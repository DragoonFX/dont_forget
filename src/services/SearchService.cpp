/*
 * SearchService.cpp
 *
 *  Created on: Feb 11, 2017
 *      Author: misha
 */

#include "SearchService.hpp"
#include "../config/AppConfig.hpp"
#include <QFile>
#include <QVariantList>
#include <QVariantMap>
#include "../models/Task.hpp"

QString SearchService::DB_PATH = "./sharewith/search/search.db";

SearchService::SearchService(QObject* parent, TasksService* tasksService) : QObject(parent), m_pSda(NULL), m_pTaskService(tasksService) {}

SearchService::~SearchService() {
    delete m_pSda;
    m_pSda = NULL;
    if (m_database.isOpen()) {
        m_database.close();
    }
}

void SearchService::dbOpen() {
    if (!m_database.isOpen()) {
        m_database = QSqlDatabase::addDatabase("QSQLITE");
        m_database.setDatabaseName(DB_PATH);
        m_database.open();
    }
}

void SearchService::init() {
    m_pSda = new SqlDataAccess(DB_PATH);
    m_pSda->execute("PRAGMA encoding = \"UTF-8\"");

    QString searchDbIndexed = AppConfig::getStatic("search_db_indexed").toString();
    if (searchDbIndexed.isEmpty()) {
        qDebug() << "Search DB not indexed yet. Will index it now." << endl;

        m_pSda->execute("DROP TABLE IF EXISTS search");
        m_pSda->execute("DROP TABLE IF EXISTS search_info");

        m_pSda->execute("CREATE TABLE search_info (icon_path VARCHAR(128), "
                                                              "uri VARCHAR(128), "
                                                              "timestamp INTEGER NOT NULL DEFAULT 0, "
                                                              "group_id INTEGER NOT NULL DEFAULT 0)");

        m_pSda->execute("CREATE VIRTUAL TABLE search USING fts4 (title, description, TOKENIZE=icu)");

        if (m_pTaskService != NULL) {
            QVariantList tasks = m_pTaskService->findAll();
            for (int i = 0; i < tasks.size(); i++) {
                Task task;
                task.fromMap(tasks.at(i).toMap());

                QString searchInfoQuery = "INSERT INTO search_info (rowid, icon_path, uri, timestamp, group_id) VALUES (:rowid, '', '', 0, :group_id)";
                QVariantMap searchInfoData;
                searchInfoData["rowid"] = task.getId();
                searchInfoData["group_id"] = task.getId();

                m_pSda->execute(searchInfoQuery, searchInfoData);

                QString searchQuery = "INSERT INTO search (docid, title, description) VALUES (:docid, :title, :description)";
                QVariantMap searchData;
                searchData["docid"] = task.getId();
                searchData["title"] = task.getName();
                searchData["description"] = task.getDescription();

                m_pSda->execute(searchQuery, searchData);
            }
        }
        AppConfig::setStatic("search_db_indexed", "true");
    } else {
        qDebug() << "Search DB already indexed." << endl;
    }
}


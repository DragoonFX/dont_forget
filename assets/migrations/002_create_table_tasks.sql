PRAGMA foreign_keys = ON;
CREATE TABLE tasks (
	id INTEGER PRIMARY KEY, 
	name TEXT DEFAULT NULL, 
	description TEXT DEFAULT NULL, 
	type TEXT, 
	parent_id INTEGER,
	deadline INTEGER DEFAULT 0, 
	closed INTEGER DEFAULT 0, 
	expanded INTEGER DEFAULT 0, 
	important INTEGER DEFAULT 0, 
	remember_id TEXT DEFAULT NULL,
	FOREIGN KEY (parent_id) REFERENCES tasks(id) ON DELETE CASCADE ON UPDATE NO ACTION
);
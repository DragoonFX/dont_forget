# Don't Forget
Hierarhical task tracker app for Blackberry 10

# Build
Setup your blackberry development environment and check to see if you
have your "author.p12", "bbidtoken.csk" and "debugtoken.bar" in your
~/.rim folder.
Then go your project folder using a terminal emulator and type "make" to
build the libraries and then enter this command-
$ blackberry-nativepackager -package <package_name>.bar -sign -storepass <your_keystorepass> -configuration Device-Release bar-descriptor.xml

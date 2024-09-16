classes: classes.hpp classes.cpp
	g++ -Wall classes.cpp classes.hpp 
compile:
	touch arc.text || echo "arc.text already exists"
	g++ -Wall classes.hpp main.cpp -o main.exe
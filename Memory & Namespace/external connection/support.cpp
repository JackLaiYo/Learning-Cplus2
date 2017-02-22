// support.cpp -> use external variables

#include <iostream>

extern double warming;		// use warming from another file

//function prototype
void update(double dt);
void local();

using std::cout;
void update(double dt)			//modifies global variable
{
	extern double warming;		//optional redeclarion
	warming += dt;				//uses global warming
	cout << "Updating global warming to " << warming;
	cout << " degrees.\n";
}

void local()					//uses local variable
{
	double warming = 0.8;		//new variable hides external one

	cout << "Local warming = " << warming << " degrees.\n";
	cout << "But global warming = " <<::warming;
	cout << " degrees.\n";
}
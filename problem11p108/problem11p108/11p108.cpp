

/*
Curran McKenzie
September 19nd 2016
Intro to Computer Programming
Problem #11 pg.108 
*/


#include <iostream>
using namespace std;
int main()

{

	double velocity, starting, ending; // declaring variables

	

	cout << "This program is figuring out the velocity of sound between two tempatures" << endl;

	cout << "Enter a starting tempature as a whole number, then add an ending tempature" << endl; 
	cout << "as a whole number with a space between them ";
	cin >> starting >> ending;	


	while (starting <= ending) // goes from starting and to ending including it
	{


		velocity = 0.61 * starting + 331.3;


		cout << "at " << starting << " degrees Celcius the velocity of sounds is " << velocity << " m/s" << endl; 
		starting++;  // prints out the degrees and velocity


	}

	system("pause");
	return 0;
}


/*
Curran McKenzie
September 8th 2016
Intro to Computer Programming
Char Attraction Fare
*/


#include <iostream>
using namespace std;
int main()

{

	char person, letr;
	double fare;

	letr = 'Z';
	fare = 2.75;

		cout << "Are you a child (C), an adult (A), or a senior (S) ";
		cin >> person;

	if (person == 'C' || person == 'c')
		cout << "Pay the child fare \n";

	else
	
	{

	if (person == 'A' || person == 'a')
		cout << "Pay the Adult fare \n";

	
	else

		cout << "Pay the senior fare \n";


	}

	if (person != letr)
		cout << "Person is not a Z, so there! \n";

	else
		cout << "You tyoed a Z, didn't you! \n";


	{

	if (person == 'S' && fare > 2.00)
		cout << "Too expensive for the senior citizen \n";

	}

	


	system("pause");
	return 0;

}
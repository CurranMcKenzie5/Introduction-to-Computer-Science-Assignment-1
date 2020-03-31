
/*Curran McKenzie 
September 6th
Creating a program using the if statement */ 

#include<iostream>
using namespace std; 
int main()

{

	int yourage;

		cout << "Please enter your age as a whole number  "; 
		cin >> yourage; 
	 
/*	if (yourage < 18)

	{

		cout << " sorry you can't vote yet" << endl;
		cout << " wait a few years";

	}

	else 

	{

		cout << "since you are " << yourage << " you can vote. " << endl;
		cout << "In fact, its your civic duty" << endl; 

	}

	*/


		if (yourage >= 18)

			cout << " You can vote! Please do. \n";

		else

			cout << "you can't vote yet \n"; 



		system("pause");
		return 0; 
	


}
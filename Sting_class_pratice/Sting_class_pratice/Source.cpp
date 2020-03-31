
/*
Curran McKenzie
December 1st 2016
Intro to Computer Programming
Sting Class Pratice 
*/


#include <iomanip> 
#include <iostream> 
#include <fstream> 
#include <cstring>
#include <string> 

using namespace std;


int main()

{

	string stringone, stringtwo, third, weekdays[80];
	int i;
	bool status;

	cout << "type some text \n";

	getline(cin, stringone);
	//cout << stringone << endl;
	stringtwo = "Finals are coming soon.";
	cout << stringtwo[3] << " is the forth character in stringtwo\n";
	/*
	third = stringone + " " + stringtwo; 
	cout << third << endl;

	i = stringtwo.length(); 
	cout << stringtwo << " is " << i << " characters long\n";

	third = "Last week."; 
	if (stringone < third)
		cout << "String one comes before third\n";
	else
		cout << "String one comes after third\n"; 

	*/

	//if (third.empty())
		//cout << "Nothing has been stored yet in third.\n"; 
	/*status = third.empty(); 
	if (status)
		cout << "third is empty" << endl; 
	*/ 

	weekdays[0] = "Monday";
	weekdays[1] = "Tuesday";
	cout << weekdays[1] << endl; 
	system("pause");
	return 0;
}
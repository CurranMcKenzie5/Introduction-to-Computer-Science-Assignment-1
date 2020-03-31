
/*
Curran McKenzie
November 15rd 2016
Intro to Computer Programming
String Phrase Pratice 
*/


#include <iomanip> 
#include <iostream> 
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
	//Part 1
	char phrase[18] = "Today is Tuesday.", nother [18];

	cout << phrase << endl; 

	//Part 2
	cout << phrase[0] << phrase[14] << endl; 

	//Part 3 
	strncpy_s(nother, phrase, 17);
	cout << nother << endl << endl;

	//Part 4
	cout << "At the 17th position in phrase is " << phrase[17] << endl << endl;

	 //Part 5
	if (phrase[17] == '\0')
		cout << "Found the end of the string " << endl << endl;  
	
	if (strncmp(phrase, nother, 6) == false)
		cout << "They are the same. \n" << endl;
	else
		cout << "They are different through the 6th character \n" << endl;


	system("pause"); 
	return 0;

}
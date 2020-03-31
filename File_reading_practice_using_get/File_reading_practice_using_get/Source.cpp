
/*
Curran McKenzie
October 19rd 2016
Intro to Computer Programming
File I/O Using Get Pratice
*/


#include <iomanip> 
#include <iostream> 
#include <fstream>
using namespace std;



int main()

{

	ifstream myfile;

	char letr;

	myfile.open("c:\\Users\\Curri\\OneDrive\\documents\\Text Files for C++\\file reading pratice get.txt");
 
	myfile.get(letr);

	while (myfile.eof() != true)
	{
		if (letr != '\n' && letr != ' ')
		{
			cout << letr;
		}
			myfile.get(letr);	
		
	}
	
	myfile.close();


	system("pause");
	return 0;
}
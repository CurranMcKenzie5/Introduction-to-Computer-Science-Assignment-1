
/*
Curran McKenzie
October 19rd 2016
Intro to Computer Programming
Put/Get in class pratice
*/


#include <iomanip> 
#include <iostream> 
#include <fstream>
using namespace std;



int main()

{
	char letr, result;
	ifstream file1;
	ofstream result2, result3, result4, result5;
	file1.open("c:\\Users\\Curri\\OneDrive\\documents\\Text Files for C++\\get and put pratice file.txt");
	result2.open("c:\\Users\\Curri\\OneDrive\\documents\\Text Files for C++\\putget practice.txt");
	result3.open("c:\\Users\\Curri\\OneDrive\\documents\\Text Files for C++\\putget2 practice.txt");
	result4.open("c:\\Users\\Curri\\OneDrive\\documents\\Text Files for C++\\putget3 practice.txt");
	result5.open("c:\\Users\\Curri\\OneDrive\\documents\\Text Files for C++\\putget4 practice.txt");

	file1.get(letr); 

	if (file1.fail()) // trap to catch errors in opening the file
	{
		cout << "The file failed to open\n";
		system("pause");
		exit(1);
	}

	while (file1.eof() != true)

	{

		if (letr >= 'a' && letr <= 'f')
		{
			result = letr; 
			result2.put(result) << " ";
		}

		if (letr >= 'g' && letr <= 'm')
		{
			result = letr;
			result3.put(result) << " ";
		}

		if (letr >= 'n' && letr <= 't')
		{
			result = letr;
			result4.put(result) << " ";
		}

		else
		{
			result = letr;
			result5.put(result) << " ";
		}

		file1.get(letr);
	}


	file1.close(); 
	result2.close(); 
	result3.close();
	result4.close();
	result5.close();

	system("pause");
	return 0;

}
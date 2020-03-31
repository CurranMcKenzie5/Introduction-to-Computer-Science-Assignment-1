
/*
Curran McKenzie
October 13rd 2016
Intro to Computer Programming
File reading practice
*/

// trying out file input/output, or at least input

#include <iomanip> 
#include <iostream> 
#include <fstream>
using namespace std;


int main()

{

	int nbr, result;

	ifstream datfile; 
	datfile.open("c:\\Users\\Curri\\Desktop\\file reading practice.txt");

	if (datfile.fail()) // trap to catch errors in opening the file
	{
		cout << "The file failed to open\n";
		system("pause");
		exit(1);

	}

	datfile >> nbr;

	while (nbr != 0)
	{
		result = nbr * 10;
		cout << "Result is " << result << endl;

		datfile >> nbr;
	}

	cout << "The loop is all done now \n"; 

	datfile.close(); 

	system("pause"); 
	return 0;

}
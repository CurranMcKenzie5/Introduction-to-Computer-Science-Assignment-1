/*
Curran McKenzie
September 27th 2016
Intro to Computer Programming
In class Looping Pratice
*/

#include <iomanip> 
#include <iostream>
using namespace std;


double CalcSqArea(double side);
double CalcRectArea(double length, double width); 


int main()

{
	double ss, area, length, width; 
	int no = 45;

	cout << "Enter a side ";
	cin >> ss;
	area = CalcSqArea(ss);  
	

	cout << "The area of the square is " << area << endl;

	cout << "Plese enter a length and Width "; 
	cin >> length >> width;  
	area = CalcRectArea(length, width);

	
	

	system("pause");
	return 0;

}

	double CalcSqArea(double side)

	{

		double ar;
		ar = pow(side, 2.0);
		return ar;


	}

	double CalcRectArea(double length, double width)

	{
		 
		double ar; 
		ar = length * width; 
		return ar; 

	}


	





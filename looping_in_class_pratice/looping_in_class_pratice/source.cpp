/*
Curran McKenzie
September 27th 2016
Intro to Computer Programming
In class Looping Pratice
*/

#include <iomanip> 
#include <iostream>
using namespace std;

int main()

{

	char letter1, letter2, running;
	int kount = 0; 

	cout << "Please enter two lowercase letters (Ex. m and s) ";  

	

	cin >> letter1 >> letter2;

	running = letter1;
		
	while (running != letter2)
	{

		cout << setw(3) << running;
		kount++;
		running = running + 1;

	}

	if(running > 'z' && letter2 != 'z');
		running = 'a';
	
		
	cout << setw(3) << running << endl; 
	kount++; 
	cout << setw(3); 
	for (int i = 3; i <= kount * 3; i++)
		cout << '*';

	
	system("pause");
	return 0;


}
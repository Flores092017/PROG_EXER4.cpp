/*
Author: M.S. Flores
Program: Rice bags
Description: The program determines the number of the rice bags in one metric ton
*/
#include <iostream>
using namespace std;
int main() 
{
	float num;
	float lb;
    
  //prompt the user to enter inputs
	cout << "Determining the number of rice bag" << endl;
	cout << "Enter the amount of rice in bag in pound :";
	cin >> lb;
	
	 
	 num = 2205/lb;
    
    //output of the program
	 cout << "The number of bags of rice in one metric ton is :" << num << endl;
	 

	return 0;
}

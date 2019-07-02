/* Change Temperature celsius to farenhite */
#include <iostream>
using namespace std;
int main()
{
	int c ;
	float fahrenhite;
	cout << "Enter Celsius temperature : ";
	cin >> c;
	fahrenhite = (1.80 * c) + 32;
	cout << "Fahrenheit = " << fahrenhite << endl; 
	cout << "Now weather in Thailand is " << ((fahrenhite  > 70 ) == 1? "HOT":"COOL") << endl;
	return 0;
}
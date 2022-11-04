//lets do it вот так

// include =  видимо что-то вроде включить начать запустить что-то*. iostream=input out stream (pokaz na ekrane)
// int = integer значит говорит к чему привел результат 1 2 3.  main = osnova kak switch on/off tv
// double = dlya float 2.22222 etc
//std::endl endline 

// const = vezde budet zna4enie const
//using namespace std; 4tob bez repeat i srazu mojno skip in code
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
	const short minValue = 1;
	const short maxValue = 6;

	srand(time(0));
	short first = (rand() % (maxValue - minValue + 1)) + minValue;
	short second = (rand() % (maxValue - minValue + 1)) + minValue;
	cout << first << "," << second << endl;
	



	short x = 32.320;
	cout << "cash = " << x << "$" << endl;

	double y = (x *.04);
	cout << "State tax = " << y << "%" << endl;

	double z = (y * .02);
	cout << "Country tax = " << z << "%" << endl;

	int number = 1050000;
	short another= number;
	cout << another;
	return 0;
	//0 means program workin fine, if other symbol means error
}



	// cout << "fahrenheit: ";
	// int fahrenheit;
	// cin >> fahrenheit;
	// double celsius= (fahrenheit -32)/1.8;
	// cout << celsius << endl;
	/*cout << "radius: ";
	double radius;
	cin >> radius;
	const double pi = 3.14;
		double result = pi * pow(radius, 2);
	cout << result;
	*/

	// std = standart . cout = character out
	//above statement or deistvie, но скобками не закрывать я хз..
	// << before text>>

// зато сам
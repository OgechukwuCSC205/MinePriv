#include <iostream>

using namespace std;
/*
int main()
{
	string name;
	int minutes;
	cout << "Hello" << '\n';
	cout << "And your name is ..." << '\n';
	cin >> name;
	cout << "Welcome " << name << '\n';
	cout << "This is a program to compute the hours and minutes" << '\n';
	cout << "Input the minutes: " << '\n';
	cin >> minutes;
	
	int hour = minutes/60;        
	int mins = minutes % 60;
	
	
	cout << name << ", the time is "<< hour <<";" << mins ;
	
}

int main()
{
	string name;
	int radius;
	const float PI = 3.142;
	cout << "Hello" << '\n';
	cout << "And your name is ..." << '\n';
	cin >> name;
	cout << "Welcome " << name << '\n';
	cout << "This is a program to compute the volume of a sphere" << '\n';
	cout << "What is the radius: " << '\n';
	cin >> radius;
	
	float volume = 4/3 * PI * radius * radius * radius;
	
	cout << name << ", the volume is "<< volume << "cm3";


}


int main()
{
	string name;
	int length;
	
	cout << "Hello" << '\n';
	cout << "And your name is ..." << '\n';
	cin >> name;
	cout << "Welcome " << name << '\n';
	cout << "This is a program to compute the volume of a cube" << '\n';
	cout << "What is the length of a side: " << '\n';
	cin >> length;
	
	float volume = length * length *length;
	cout << name << ", the volume is "<< volume << "cm3";


}

int main()
{
	string name;
	int radius;
	int height;
	const float PI = 3.142;
	cout << "Hello" << '\n';
	cout << "And your name is ..." << '\n';
	cin >> name;
	cout << "Welcome " << name << '\n';
	cout << "This is a program to compute the volume of a cylinder" << '\n';
	cout << "What is the radius: " << '\n';
	cin >> radius;
	cout << "And, the height: " << '\n';
	cin >> height;
	
	float volume = PI * radius * radius * height;
	cout << name << ", the volume is "<< volume << "cm3";


}


int main()
{
	string name;
	float kelvin;
	cout << "Hello" << '\n';
	cout << "And your name is ..." << '\n';
	cin >> name;
	cout << "Welcome " << name << '\n';
	cout << "This is a program to change temperature from Kelvin to Farenheit" << '\n';
	cout << "What is the temperature in Kelvin: " << '\n';
	cin >> kelvin;
	
	
	float farenheit = (((kelvin - 273.15) * 9) / 5) + 32;
	cout << name << ", the temperatue in Farenheit is "<< farenheit << "F";


}

int main()
{
	string name;
	
	
	cout << "Hello" << '\n';
	cout << "And your name is ..." << '\n';
	cin >> name;
	cout << "Welcome " << name << '\n';
	cout << "This is a program to solve simultaneous equations with the use of the determinant method" << '\n';
	cout << "The unknowns of the first equation would be referred to a and b, (normally x and y) and the second, c and d: " << '\n';
	int a;
	cout << "Put in your value for a " << '\n';
	cin >> a;
	int b;
	cout << "Put in your value for b " << '\n';
	cin >> b;
	int c;
	cout << "Put in your value for c " << '\n';
	cin >> c;
	int d;
	cout << "Put in your value for d " << '\n';
	cin >> d;
	int f;
	cout << "Put in your answer for the first equation " << '\n';
	cin >> f;
	int g;
	cout << "Put in your answer for the second equation " << '\n';
	cin >> g;
	
	float GG = (a*d) - (b*c);
	float AA = 1/GG;
	float ha = ((d*f) + (-b*g));
	float he = ((-c*f) + (a*g));
	float x = (AA * ha);
	float y = (AA * he);
	cout << name << ", The value of X is "<< x << " and the value of Y is "<< y ;


}*/

int main()
{
	string name;
	int radius;
	const float PI = 3.142;
	cout << "Hello" << '\n';
	cout << "And your name is ..." << '\n';
	cin >> name;
	cout << "Welcome " << name << '\n';
	cout << "This is a program to compute the volume of a sphere" << '\n';
	cout << "What is the radius: " << '\n';
	cin >> radius;
	
	float volume = (4 * PI * radius * radius * radius);
	
	cout << name << ", the volume is "<< volume << "cm3";


}

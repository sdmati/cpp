#include <iostream>
using namespace std;

float a, b;
int main ()
{
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	
	cout << "Wynik dodawania: " << 	a + b << endl;
	cout << "Wynik odejmowania: " << a - b << endl;
	cout << "Wynik mnozenia: " << a * b << endl;
	
	if (a==0, b==0) 
	cout << "Nie mozna dzielic przez zero" << endl;
	
	else
	cout << "Wynik dzielenia: " << a / b << endl;
	
	return 0;
}



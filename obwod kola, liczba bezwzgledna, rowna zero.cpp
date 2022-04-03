#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float x, bezwz, pole;
	
	cout << "Podaj liczbe rzeczywista: ";
	cin >> x;
	
	if( x > 0 )
	{
		pole = M_PI * x * x;
		cout << "\nPole kola: " << pole;	
	}
	
	else
	{
		if( x < 0 )
		{
			cout << "\nWartosc bezwzgledna liczby " << x << " wynosi: " << -1*x;
		}
		
		else
		{
			if( x == 0)
			cout << "\nPodana liczba jest rowna zero";
		}
	}
	
	return 0;
}



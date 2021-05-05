#include <iostream>
using namespace std;

int main()
{
	
	setlocale (LC_CTYPE, "Polish");
	
	int nww, a, b, i, l1, l2, m1, m2, licznik, mianownik;
	
	cout << "Podaj licznik pierwszego u³amka: ";
	cin >> l1;
	cout << "\nPodaj mianownik pierwszego u³amka: ";
	cin >> m1;
	
	cout << "\nPodaj licznik drugiego u³amka: ";
	cin >> l2;
	cout << "\nPodaj mianownik drugiego u³amka: ";
	cin >> m2;
	
	a=m2;
	b=m1;
	
	while(b!=0)
		{
			i = b;
			b = a%b;	
			a = i;
		}	
		
	nww= m1*m2/a;
	
	mianownik = nww;
	licznik = mianownik/m1*l1 + mianownik/m2*l2;
	
	cout << l1 << " / " << m1 << " + " << l2 << " / " << m2 << " = " << licznik << " / " << mianownik;
	
	return 0;	
}


#include <iostream>
using namespace std;

int main()
{
	
	setlocale  (LC_CTYPE, "Polish");
	
	int ilosc;
	
	cout << "Podaj z ilu ocen chcesz obliczyæ œredni¹: ";
	cin >> ilosc;
	
	float oceny[ilosc], waga, sumaocen, sumawag, srednia;
	for ( int i = 0; i < ilosc;  i++)
	{		
		cout << "\nPodaj " << i+1 << " ocenê: ";
		cin >> oceny[ilosc];
				
			if (oceny[ilosc] > 6 || oceny[ilosc] < 1)
			{
				cout << "\n\nOcena nie mo¿e byæ mniejsza od 1 i wiêksza od 6!\n\n";
				i = i - 1;
			}
			
			else 
		  	{
		  		cout << "Podaj wagê oceny: ";
				cin >> waga;
				
				if (waga > 10 || waga < 1)
				{
					cout  << "Waga nie mo¿e byæ mniejsza od 1 i wiêksza od 10!\n\n";
					i = i - 1;
				}
				else
				{
				sumaocen += oceny[ilosc]*waga;		
				sumawag += waga;
				srednia = sumaocen/sumawag;
				}
			}
	}
	
	cout  << "\nŒrednia: " << srednia << "\n";

	return 0;
	
}







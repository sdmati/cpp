#include <iostream>  // Program dodatkowo:
using namespace std; //  nie pozwala wpisac oceny nizszej od 1 i wiekszej od 6
float suma, srednia; //  wypisuje na koncu podane oceny
					 // pozwala wybrac ilosc ocen, z ktorych chcemy wyliczyc srednia
int main() {
	setlocale  (LC_CTYPE, "Polish");
	int ilosc;
	cout << "Podaj ilo�� ocen, z kt�rych chcesz obliczy� �redni�: ";
	cin >> ilosc;
	float oceny[ilosc];
 	for(int i = 0; i < ilosc; i++) {
		cout<<endl<<"Podaj "<<i+1<<" ocene: "; 
		cin>>oceny[i];	
		if (oceny[i] > 6 || oceny[i] < 1)  {
			cout << "\nOcena nie mo�e by� mniejsza od 1 i wi�ksza od 6.\n";
			i = i - 1;
		}
		else {
			suma += oceny[i];
		}
	}

	for(int i = 0; i < ilosc; i++){
	
		cout <<"\n" << i+1 << ".Ocena: " << oceny[i];
	}
	 
	srednia = suma/ilosc;
	cout << endl << "\n�rednia ocen = " << srednia;

	return 0;
}




#include <iostream>  // Program dodatkowo:
using namespace std; //  nie pozwala wpisac oceny nizszej od 1 i wiekszej od 6
float suma, srednia; //  wypisuje na koncu podane oceny
					 // pozwala wybrac ilosc ocen, z ktorych chcemy wyliczyc srednia
int main() {
	setlocale  (LC_CTYPE, "Polish");
	int ilosc;
	cout << "Podaj iloœæ ocen, z których chcesz obliczyæ œredni¹: ";
	cin >> ilosc;
	float oceny[ilosc];
 	for(int i = 0; i < ilosc; i++) {
		cout<<endl<<"Podaj "<<i+1<<" ocene: "; 
		cin>>oceny[i];	
		if (oceny[i] > 6 || oceny[i] < 1)  {
			cout << "\nOcena nie mo¿e byæ mniejsza od 1 i wiêksza od 6.\n";
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
	cout << endl << "\nŒrednia ocen = " << srednia;

	return 0;
}




#include <iostream>
using namespace std;
int main()

{	
	setlocale  (LC_CTYPE, "Polish");
	
	float frekwencja, srednia;
	
	cout << "Sprawdz, czy uczniowi przysluguje nagroda\n";
	
	cout << "\nPodaj frekwencje w %: ";
	cin >> frekwencja;
	
	cout << "Podaj srednia ocen: ";
	cin >> srednia;	
	
		if (frekwencja >= 95 || srednia >= 4.5) 
		{
			cout << "\n\nNagroda przys³uguje";
		}
		
		else
		{
			cout << "\n\nBrak nagrody";
		}

	return 0;
}


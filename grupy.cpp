# include <iostream>
using namespace std;
int p;
int main()
{
	setlocale (LC_CTYPE, "Polish");
	cout << "Wprowadz liczbe punktow "<< endl;
	cin >> p;
	if (p>=0 && p<20)
	cout << "grupa podstawowa" << endl;
	else
	
	if (p>=20 && p<=40)
	cout << "grupa œredniozaawansowana";
	else
	if (p>40 && p<=60)
	cout << "grupa zaawansowana"<<endl;
	else 
	cout <<"wprowadzono liczbe spoza zakresu"<<endl;
	return 0;
}

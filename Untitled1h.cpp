#include <iostream>
using namespace std;

int main()
{
	float datos[4];
	int i=1;
	float suma;
	float media;
	suma=0;
	for (i=1; i<=4; i++)
	{
	cout << "Dime el numero " << i << ": ";
	cin >> datos[i];
	suma=suma+datos[i];
	}
	media=suma/4;
	cout << "La media aritmética de ";
	for (i=1; i<=4; i++)
	{
	cout << datos[i] << " ";
	}
	cout << "es " << media << endl;
	return 0;
}

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
	cout << "Tell me a number " << i << ": ";
	cin >> datos[i];
	suma=suma+datos[i];
	}
	media=suma/4;
	cout << "The arithmetic average of ";
	for (i=1; i<=4; i++)
	{
	cout << datos[i] << " ";
	}
	cout << "is " << media << endl;
	return 0;
}

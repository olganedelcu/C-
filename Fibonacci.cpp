  
#include <iostream>
using namespace std;
//n - n�mero de la serie fibonacci 
long fibonacci(int n)
{
	if(n <= 2) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int num; //argumento para pasar en una funci�n de Fibonacci
	cout<<"Ingresa una posicion: ";
    cin >> num;	
    cout<<"Corresponde al numero: ";
	cout << fibonacci(num) << endl;
	system("pause");
}


#include <iostream>
using namespace std;

int main(){
  int num,num_pos=0, num_neg=0,cero;
  
  cout<< "Ingresa un num(0 para parar) : ";
  cin >> num;
  while(num){
  	if (num >0)
  	num_pos++;
  	else if(num < 0 )
  	num_neg++;
  	cout<<"Ingresa otro num (0 para parar): ";
  	cin >> num;
  }
  cout<< "N. positivos: "<< num_pos << endl;
  cout<< "N. negativos : "<< num_neg;
  
  return 0; 
}
  

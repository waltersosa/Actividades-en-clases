#include<iostream>

using namespace std;

int main()
{
	int num;
		
	do
	{
		cout<<"Ingrese un numero del 1 al 10 : "; 
		cin>>num;
	}
	while((num < 1) || (num > 10));
	
	for (int i = 1; i <= 10; i++)
	{
		cout<<num<<" * "<< i <<" = "<< num * i <<endl;
	}
		
	return 0;
}

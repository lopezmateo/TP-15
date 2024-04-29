#include <iostream>
#include <string>
using namespace std;
int main ()
{
	int i;
	int numero;
	
	cout<<"ingrese la cantidad de veces que se repita hola mundo"<<endl;
	cin>>numero;
	
	for(i=1;i<=numero;i++)
	{
		cout<<"hola mundo"<<endl;
	}
	
	return 0;
}
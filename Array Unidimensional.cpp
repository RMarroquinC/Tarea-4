#include <iostream>
using namespace std;

main() {
	
	int notas[4];
	notas[0] = 80;
	notas[1] = 65;
	notas[2] = 60;
	notas[3] = 75;
	
	cout<<notas[0]<<endl;
	cout<<notas[1]<<endl;
	cout<<notas[2]<<endl;
	cout<<notas[3]<<endl;
	
	notas[2] = 70;
	cout<<"Valor modificado (2)"<<notas[2]<<endl;
	
	
}
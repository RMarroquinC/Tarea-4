#include <iostream>
using namespace std;

int main() {
	string semana[7]={"Lunes,""Martes","Miercoles","Jueves","Viernes","Sabado","Domimgo"};
	semana[3]= "Jueves";
	for(int i=0;i<7;i++){
		cout<<semana[i]<<endl;
	}
	
	
	
	system("pause");

}
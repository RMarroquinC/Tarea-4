#include <iostream>
using namespace std;

main() {
	
	// arreglos bidimensionales, matriz, tabla
	int fil=0,col=0;
	cin<<"Ingrese filas: ";
	cin>>fil;
	cin<<"Ingrese columnas: ";
	cin>>col;
	int matriz[fil][col];
	
	int matriz[fil][col]={{10,20,30},{40,50,60}};
	cout<<"--------- Mostrar ---------"<<endl;
	for (int i=0;i<fil;i++){
		for(int ii=0;ii<3;ii++){
					
		cout<<i<<","<<ii<<": "<<matriz[i][ii]<<endl;
		}
		
	}
	
		
	system("pause");
}
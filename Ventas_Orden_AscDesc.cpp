#include <iostream>
#include <cstdlib>
#include <fstream>

//Hecho por: Marlon Salomon Coreas Villanueva CV18035

using namespace std;


int main() {
	
	char cadena[128];
	
	int i;
	int j;
	int temp;
	int vector[5];
	float p;
	int v;
	float pv;
	
	
	for (i=0; i<=4; i++){
		cout<<"Ingrese el precio unitario en la venta "<<i+1<<": ";
		cin>>p;
		cout<<"Ingrese la cantidad de unidades vendidas en la venta "<<i+1<<" : ";
		cin>>v;
		pv=(v*p);
		vector[i]=pv;
	}

	for (i=0; i<=4; i++){
		for (j=i+1; j<=4; j++){
			if (vector[j]<vector[i]){
				temp=vector[j];
				vector[j]=vector[i];
				vector[i]=vector[j];
				vector[i]=temp;
			}
		}
	}
	cout<<endl;
	cout<<endl;
	cout<<"Ventas en orden Ascendente: "<<endl;
	for(i=0; i<=4; i++){
		cout<<vector[i]<<"  ";
	}	
	
	ofstream fs("nombre.txt");
	fs<<"Ventas en orden Ascendente: "<<endl;
	for(i=0; i<=4; i++){
	fs<<vector[i]<<endl;
	}
	fs.close();
	
	cout<<endl;
	cout<<endl;
	
	for (i=0; i<=4; i++){
		for (j=i+1; j<=4; j++){
			if (vector[j]>vector[i]){
				temp=vector[j];
				vector[j]=vector[i];
				vector[i]=vector[j];
				vector[i]=temp;
			}
		}
	}
	cout<<"Ventas en orden Desendente: "<<endl;
	for(i=0; i<=4; i++){
		cout<<vector[i]<<"  ";
	}

	system("pause");
	return 0;
}

//Hacer un programa en C++ que permita calcular el total de una venta almacenarla en un arreglo
//y ordenar las ventas de forma ascendente y descendente. Se debe soliciar al usuario la cantidad de articulos vendidos
//el precio y las unidades por venta

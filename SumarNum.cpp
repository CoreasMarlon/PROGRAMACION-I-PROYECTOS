#include <iostream> //Libreria para entrada y salida de datos.
#include <cstdlib>
#include <windows.h>

using namespace std;
void l(); // declaracion de la funcion, no retorna/no recibe parametros.
int sumar (int a, int aux);
int pedirNumSumar ();

int main(int argc, char** argv) {
	int n=1; //contador
	int vn; //Su valor cambiara de 2 a 4
	int suma = 0; //Acumulador
	int aux; //intercambiar valores temporales
	vn = pedirNumSumar ();
	
	
	while(n<=vn){
		l(); //system ("cls");
		cout<<"Ingrese el numero: "<<n<<endl;
		cin>>aux;
		suma = sumar (suma, aux); //suma=suma+aux; //llamada de la funcion
		n++;
	}
	l(); //system ("cls");
	cout<<"La suma es de: "<<suma<<endl;
	system("pause");
	l(); //system ("cls");
	cout<<"Desarrollado por Coreas Inc."<<endl;
	cout<<"UNIVERSIDAD DE EL SALVADOR"<<endl;
	cout<<"Version 5.7."<<sumar(1,2)<<endl;
	system("pause");	
}
void l() { //Implementacion de la funcion l
system ("cls");
cout <<"--------------------------------------------------"<<endl;
cout <<"-----------------PROGRAMA DE SUMA-----------------"<<endl;
cout <<"--------------------------------------------------"<<endl;
}
int sumar (int a, int aux){
	return a+aux;
}
int pedirNumSumar() {
int xl;
do{
	l(); //system ("cls"); //llamada de la funcion
	cout <<"Cuantos numeros quieres sumar:[2 - 4 ] : ";
	cin>>xl;
	}while(xl<2 || xl>4);
	return xl;
}


//Una empresa de telefonia necesita calcular el total a pagar por cada cliente
//segun la sig tabla:
// 1 min -- 10 min --> $0.05
// 11 min -- 15 min --> $0.08
// mas de 15 min --> $0.10
//hcaer un programa que calcule el total a pagar por cada llamada
//implementando ciclos y funciones.


//Una empresa necesita calcular la produccion diaria de bebidas y los
//insumos requeridos para la elaboracion del refresco deacuerdo a la 
//siguiemnte tabla:
//                   Agua              Azucar
//     Soda         500 ml              800 g
//     Jugo         600 ml              700 g
//Hacer un programa que permita ingresar la produccion diaria y muestre en 
//pantalla los insumos requeridos.


//Correo: tareasuesfmo@gmail.com







//Programa hecho por: Marlon Salomon Coreas Villanueva	CV18035
//Programacion I ciclo 02.
#include <iostream> //Libreria para entrada y salida de datos.
#include <windows.h> //Libreria para las funciones de windows.
#include <cstdlib> //Esta funcion sirve para llamar un comando del sistema.

using namespace std;

void limp(); //Declaracion de funcion para limpiar pantalla.
void line(); //declaracion de funcion que imprime linea de caracteres.

main (){
	system ("Color 84"); //comando de color de color de consola y texto que se imprime.
	
	//declaracion de variables:
	int soda; //Almacena el numero de sodas producidas en un dia.
	int jugo; //Almacena el numero de jugos producidos en un dia.
	
	//ciclos para condicionar que los datos ingresados sean validos (mayores que cero).
	do{
	limp();
	//Se ingresa la cantidad de sodas.
	cout<<"Ingrese la cantidad de Sodas producidas: ";
	cin>>soda;
	limp();
	}while(soda < 0);
	do{
	//Se ingresa la cantidad de jugos.
	cout<<"Ingrese la cantidad de Jugos producidos: ";
	cin>>jugo;
	limp();
	}while (jugo < 0);
	
	//Se imprimen los datos obtenidos.
	cout <<endl; //Por cada Soda producida se necesitan 500 ml de agua y 800 g de azucar.
	cout <<"Los insumos requeridos para la produccion de "<<soda<<" Sodas fueron: "<<endl;
	cout <<soda*500<<" ml de Agua"<<endl; //Se imprime el calculo del agua utilizada por cada soda producida.
	cout <<soda*800<<" g de Azucar"<<endl; //Se imprime el calculo del azucar utilizada por cada soda producida.
	line();
	cout <<endl; //Por cada Jugo producido se necesitan 600 ml de agua y 700 g de azucar.
	cout<<"Los insumos requeridos para la produccion de "<<jugo<<" Jugos fueron: "<<endl;
	cout<<jugo*600<<" ml de Agua"<<endl; //Se imprime el calculo del agua utilizada por cada jugo producido.
	cout <<jugo*700<<" g de Azucar"<<endl; //Se imprime el calculo del azucar utilizada por cada jugo producido.
	line();
	
	system ("pause");
	limp();
	line();
	cout <<"               DESARROLLADO POR MARLON COREAS                 "<<endl;
	cout <<"       	               VERSION 1.1.1                          "<<endl;
	line();
	system ("pause");
	
}
void limp()
{
system ("cls");
line();
cout <<endl;
cout <<"            CALCULO DE INSUMOS REQUERIDOS PARA LA             "<<endl;
cout <<"                 PRODUCCION DE SODAS Y JUGOS                  "<<endl;
line();
}
void line()
{
cout <<"______________________________________________________________"<<endl;	
}

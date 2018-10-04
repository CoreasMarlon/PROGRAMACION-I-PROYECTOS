//Programa hecho por: Marlon Salomon Coreas Villanueva	CV18035
//Programacion I ciclo 02.
//Declaracion de las librerias a utilizar

#include <iostream>//Libreria para entrada y salida de datos.
#include <math.h> //Libreria para operaciones matematicas.
#include <iomanip> //librria para mostrar en pantalla sistemas de ecuacines de forma elegante.
#include <stdio.h> //libreria que contiene los prototipos de las funcioes macros. En este codigo se
					//utlizo para darle color al fondo de la consola y al texto que se muestra en pantalla.
#include <windows.h> //Libreria que en este codigo se utilizo para usar la funcion Beep.

using namespace std;
	
int main() {

	system ("color 84"); //Comando para darle color al fondo de la consola y al texto que se muestra en pantalla.
	cout <<"______________________________________________________________"<<endl;
	cout<<endl;
	cout<<"PROGRAMA PARA CALCULAR EL SALARIO POR VENTAS A EMPLEADOS"<<endl;
	cout <<"______________________________________________________________"<<endl;
	cout<<endl;

	//declaracion de Variables
	float ventas; //Variabe para almacenar la cantidad de ventas.
	float sueldo; //Variable pára almacenar el sueldo con respecto a las ventas realizadas
	
	//Se usa el ciclo do while para comprobar que la cantidad introcudida sea positiva.
	//el ciclo se va a dejar de ejeutar hasta que se introduzca una cantidad valida es decir  ventas > 0.
	do{
	
	//Ingreso de datos
	cout <<"Ingrse la Cantidad de Ventas Reealizadas: "; 
	cin >>ventas;
	} while(ventas < 0);
	
	//Si la cantidad de ventas va de 0 hasta 500000 se realiza lo siguiente
	if(ventas >= 0 && ventas <= 500000)
	{
		sueldo = 80.000;
		
		Beep (950, 500); //Comando Beep para darle tono cuando se imprima el resulado.
		cout<<"El Valor del Sueldo es: $"<<sueldo<<endl;
	}
	
	//Si la cantidad de ventas va de 50000 hasta 1000000 se realiza lo siguiente
	else if(ventas > 500000 && ventas <= 1000000)
	{
		sueldo = 160.000;
		
		Beep (800, 500);
		cout<<"El Valor del sueldo es: $"<<sueldo<<endl;
	}
	
	//Si la cantidad de ventas va de 1000001 hasta 15000000 se realiza lo siguiente
	else if (ventas > 1000000 && ventas <= 1500000)
	{
		sueldo = 320.000;
		
		Beep (850, 500);
		cout<<"El Valor del Sueldo es: $"<<sueldo<<endl;
	}
	
	//Si la cantidad de ventas va de 1500000 hasta 25000000 se realiza lo siguiente
	else if (ventas > 1500000 && ventas <= 2500000)
	{
		sueldo = 450.000;
		
		Beep (950, 500);
		cout<<"El Valor del Sueldo es: $"<<sueldo<<endl;;
	}
	
	//Si la cantidad de ventas va de 2500000 hasta 4000000 se realiza lo siguiente
	else if (ventas > 2500000 && ventas <= 4000000)
	{
		sueldo = 550.000;
		
		Beep (935, 500);
		cout<<"El Valor del Sueldo es: $"<<sueldo<<endl;
	}

	//Si la cantidad de ventas es mas 4000000 se realiza lo siguiente: dado la cantidad 
	//se calcula el 20% de las ventas
	else if (ventas > 4000000)
	{
		sueldo = (ventas * 0.2);
		
		Beep (999, 500);
		cout << fixed <<setprecision(4)<<"El Valor del Sueldo es: $"<<sueldo<<endl;;
	}
	system ("pause");


	cout <<"DESARROLLADO POR MARLON COREAS                 "<<endl;
	cout <<"VERSION 1.1.1                          "<<endl;
	cout <<"______________________________________________________________"<<endl;
	system ("pause");
	
	
	return 0;
}

//Programa hecho por: Marlon Salomon Coreas Villanueva	CV18035
//Programacion I ciclo 02.
#include <iostream> //Libreria para entrada y salida de datos.
#include <cstdlib> //Esta funcion sirve para llamar un comando del sistema.

using namespace std;

void limp(); //Declaracion de la funcion para limpiar la pantalla.
void line(); //Declaracion de la funcion para incertar linea en la pantalla.
float numMinutos (); //Declaracion de la funcion para la introduccion de la cantidad de minutos.

main (){
	system ("Color 84"); //Comando para darle color a la consola y al texto en pantalla.
	float m; //Variable que almacena la cantidad de minutos hablados.
	float p; //Esta variable almacena los minutos hablados dependiendo del rango en que se encuentren.
	float tpagar; //Esta variable almacena el total a pagar por todos os minutos ablados.
	
	m = numMinutos (); //Se iguala la variable m con la funcion numMinutos para usar el dato obtenido.
	if (m>0 && m<=10) //Se comprueba que la cantidad de minutos este entre 0 y 10 para aplicar la terifa de $0.05.
	{
		//Se calcula el total a pagar. (no se usa la variable "p" ya que la cantdad de minutos se encuentra en un solo rango.
		tpagar = (m * 0.05); 
		cout<<"El Total a Pagar por los "<<m<<" minutos hablados es: $ "<<tpagar<<endl; //Se imprime el total.
	}
	else if (m>10 && m<=15) //Se prueva que la cantidad de minutos este entre 10 y 15.
	{	//En este caso se aplica la tarifa de $ 0.05 para los primeros 10 minutos y $0.08 para el resto.
		p = (10 * 0.05); //Se calcula el costo de los primeros 10 minutos.
		tpagar = ((m - 10 )* 0.08); //Se calcula el costo del resto de minutos hablados.
		cout<<"El Total a Pagar por los "<<m<<" minutos hablados es: $ "<<tpagar+p<<endl; //Se imprime la suma de los totales.
	}
	else //Si la cantidad de minutos hablados es mas de 15 se aplica la tarifa de $0.10.
	{	//Se calculanel costo de los primeros 10 minutos y se suma el costo de los otros 5 minutos siguientes.
		p = ((10 * 0.05) + (5 * 0.08));
		tpagar = ((m - 15) * 0.1); //Secalcula el costo de los minutos restantes.
		cout<<"El Total a Pagar por los "<<m<<" minutos hablados es: $ "<<tpagar+p<<endl; //Se imprime la suma de los totales.
	}
	system("pause"); //Funcion para pausar el sistema.
	limp();
	cout<<"Desarrollado por: Marlon Coreas"<<endl;
	cout<<"Version: 1.1.1"<<endl;

}
void line(){ //Descripcion de la funcion para incertar lines en pantalla.
cout <<"______________________________________________________________"<<endl;	
}
void limp(){ //Descripcion de la fncion para limpiar pantalla. (Esta funcion contiene el titulo del programa.
system ("cls"); //Comando para limpiar pantalla.
line();
cout<<endl;
cout<<"            CALCULO DE TARIFA POR MINUTOS HABLADOS            "<<endl; //Titulo del programa.
line();
}
float numMinutos (){ //Funcion para obtener la cantidad de minutos hablados.
	float nminutos;
	do{ //Esta funcion contiene un ciclo do-While para asegurar que la cantidad de minutos sea valida.
	limp();
	cout<<"Ingrese la cantidad de minutos hablados: ";
	cin>>nminutos;
	}while(nminutos<0);
	return nminutos;
}

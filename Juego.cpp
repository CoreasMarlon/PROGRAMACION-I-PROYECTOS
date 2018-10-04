//Programa hecho por Marlon Salomon Coreas Villanueva. CV18035
#include <iostream>//Libreria para entrada y salida de datos.
#include <cstdlib>//Libreria que sirve para llamar un comando del sistema.
#include <windows.h>//Libreria para las funciones de windows.
using namespace std;

char juego[3][3]; //Declaracion de la matriz donde se almacenaran los datos del juego (la letra y la posicion en que se incerto).
char caracter[3]={"XO"}; //Arreglo que almacena las letras X O que son con las que se juega.
int cas;//Esta variable alamcena el numero de casilla donde se va a incertar la letra. Es resultado de la funcion "pedirnum".
void ncb();//Decaracion de la funcion "ncb" (encabezado) que imprime en pantalla un encabezado del programa y las indicaciones.
void tabla();//Decaracion de la funcion "tabla" que imprime una tabla que sirve de referencia para las celdas del juego.
int intrnum();//Declaracion de la funcion donde se pide la introduccion del numero de la posicion de la letra.
void opeX();//Declaracion de la fucion que veifica el numero de la celda a la que se va incertar X.
void opeO();//Declaracion de la fucion que veifica el numero de la celda a la que se va incertar O.
void sumt();//Declaracion de la funcion "sumt". Que recorre la matriz juego y la imprime.
void oper();//Declaracion de la funcion "oper" que se ejecuta por cada interaccion con el usuario en todo el programa.
void gan1();//Declaracion de la funcion "gan1" que mprime un letrero cunado el ganador es X.
void gan2();//Declaracion de la funcion "gan2" que mprime un letrero cunado el ganador es O.
void end();//Declaracion de la funcion "end" que imprime el letrero que termino el juego y cierra la consola.

int main() {
	system("Color 31"); //Funcion para darle color a la consola y al texto que se imprime.
	ncb(); //Se inicia el programa con la funcion que imprime el encabezado y las indicaciones.
	for (int i=0; i<=2; i++)//Ciclos para imprimir vacia en forma de tabla la matriz "juego".
	{
		for (int j=0; j<=2; j++)//Por cada vez que se ejecuta el primer ciclo "for" se ejcuta el segundo y asi se recorre toda la matriz.
		{
			cout<<juego[i][j];//Se imprime la matriz.
			if(j<=1){//Se imprime la barra para darle aspecto de tabla x/o a la matriz impresa.
				cout<<"	|";
			}
		}
		cout<<endl; //Salto de linea.
		if(i<=1){//Se imprime la linea para darle aspecto de tabla x/o a la matriz impresa.
			cout<<"    _________________";
		}
		cout<<endl; //Salto de linea.
	}
	for (int inc=1; inc<=4; inc++){//Este ciclo se ejecuta 4 a la funcion "oper" veces para rrellenar 8 casillas de la matriz.
		oper();
		}//Ya que el juego consta de 9 casillas las siguientes funciones se ejecutan para rellenar la numero 9.
	tabla();//Esta funcion imprime la tabla de referencia para las casillas del juego.
	intrnum(); //Se ejecuta la funcion "intrnum()" la cual pide al usuario el numero de posicion donde desea incertar la letra.
	system("cls");//Comando para limpiar pantalla. Se ejecuta aqui para limpiar pantalla e imprimir los resultados de la operacion.
	ncb();//Funcion de encabezado e indicaciones que serviran para la siguiente interaccion.
	opeX();//Se ejecuta la fucion que veifica el numero de la celda a la que se va incertar X.
	end();//Funcion que imprime el letrero que termino el juego.
	return 0;//Valor de retorno de la funcion "main".
}
void ncb(){//Se define la funcion "ncb". Esta funcion imprime un encabezado del programa.
	system("cls");//Comando para limpiar pantalla cada vez que se ejecuta la funcion "titulo()".
	cout<<"________________________________________________________"<<endl;		//
	cout<<endl;																	//
	cout<<"                           X/O                          "<<endl;		//Texto de encabeado del programa.
	cout<<endl;																	//
	cout<<"                   JUEGA Y DIVIERTETE                   "<<endl;		//
	cout<<"________________________________________________________"<<endl;		//
	cout<<endl;
	cout<<"INDICACION: La tabla siguiente muestra los espacios del"<<endl;		//
	cout<<"juego que se iran reyenado conforme juegue. Basese en la"<<endl;		//Indicaciones del juego.
	cout<<"Tabla 2 para selecionr la casilla donde desea colocar la"<<endl;		//
	cout<<"letra (seleccione X o O)"<<endl;										//
	cout<<endl;
}	
void tabla(){ //Se define la funcion "tabla()" la que se ejecutara durante todo el juego paa que el usuario siempre
				//tenga referencia a la hora de ingresar el numero de posicion.
	cout<<"_________Tabla 2________"<<endl;//
	cout<<"   1	   2	   3"<<endl;		//
	cout<<endl;								//Esta funcion es utilizada para imprimir una tabla con una serie de numeros
	cout<<"   4	   5	   6"<<endl;		//del 1 al 9 que sirven de referencia para incertar el numero dependiendo la/
	cout<<endl;								//celda donde se desea incertar la letra.
	cout<<"   7	   8	   9"<<endl;		//
	cout<<"________________________"<<endl;//
}
int intrnum(){//Se define la funcion "intrnum".
				//Esta funcion se repetira durante todo el juego pidiendo al usuario que introduzca el numero con respecto
				//a la posicion donde desea incertar la letra.
	do{ //Se crea un ciclo do-while para condicionar que el numero que ingrese el ususario este entre el 1 al 9 ya que
		//solo en este intervalo se encuentran el numero de casillas.
		cout<<"Introduzca la posision donde desea incertar la letra :"; //Se pide al usuario el numero.
		cin>>cas;//Se lee el numero y se almacena en la variable entera "cas".
	}while(cas<1 || cas>9);//Se condiciona  que el numero no sea menor que 1 ni mayor que 9.
	return cas; //Esta funcion retorna el valor almacenado en la variable "cas".
}
void sumt(){//Esta funcion recorre la matriz "juego[][]" y la imprime durante todo el programa por cada dato de ingrese el usuario.
	for (int i=0; i<=2; i++)//Por cada vez que se ejecuta el primer ciclo "for" se ejcuta el segundo y asi se recorre toda la matriz.
		{
		for (int j=0; j<=2; j++)
		{
			cout<<"    "<<juego[i][j];//Se imprime la matriz.
			if(j<=1){//Se imprime la barra para darle aspecto de tabla x/o a la matriz impresa.
				cout<<"	|";
			}
		}
		cout<<endl; //Salto de linea.
		if(i<=1){//Se imprime la linea para darle aspecto de tabla x/o a la matriz impresa.
			cout<<"    _________________";
		}
		cout<<endl; //Salto de linea.
		}
}
void opeX(){//Se define la funcion "opeX()". Esta funcion toma el valor en la variable "cas" y verifica por medio de "if e else-if"
			//la posision donde desea incertar la letra "X" (que se encuentra en la posicion cero del arreglo "caracter[]).
			//A cada posicion de la matriz se le representa por un numero del 1 al 9 como lo imprime la funcion "tabla()".
	if(cas==1){//Primera condicion que se va a ejecutar si la posicion donde se desea incertar X es 1.
		juego[0][0]=caracter[0];//Esta instruccion le da a la posicion de la matriz el valor de "X".
		sumt();
	}
	else if(cas==2){//Segundo condicion que se va a ejecutar si la posicion donde se desea incertar X es 2.
		juego[0][1]=caracter[0];//Esta instruccion le da a la posicion de la matriz el valor de "X".
		sumt();
	}
	else if(cas==3){//Tercera condicion que se va a ejecutar si la posicion donde se desea incertar X es 3.
		juego[0][2]=caracter[0];//Esta instruccion le da a la posicion de la matriz el valor de "X".
		sumt();
	}
	else if(cas==4){//Cuarta condicion que se va a ejecutar si la posicion donde se desea incertar X es 4.
		juego[1][0]=caracter[0];//Esta instruccion le da a la posicion de la matriz el valor de "X".
		sumt();
	}
	else if(cas==5){//Quinta condicion que se va a ejecutar si la posicion donde se desea incertar X es 5.
		juego[1][1]=caracter[0];//Esta instruccion le da a la posicion de la matriz el valor de "X".
		sumt();
	}
	else if(cas==6){//Sexta condicion que se va a ejecutar si la posicion donde se desea incertar X es 6.
		juego[1][2]=caracter[0];//Esta instruccion le da a la posicion de la matriz el valor de "X".
		sumt();
	}
	else if(cas==7){//Septima condicion que se va a ejecutar si la posicion donde se desea incertar X es 7.
		juego[2][0]=caracter[0];//Esta instruccion le da a la posicion de la matriz el valor de "X".
		sumt();
	}
	else if(cas==8){//Octava condicion que se va a ejecutar si la posicion donde se desea incertar X es 8.
		juego[2][1]=caracter[0];//Esta instruccion le da a la posicion de la matriz el valor de "X".
		sumt();
	}
	else if(cas==9){//Novena y ultima condicion que se va a ejecutar si la posicion donde se desea incertar X es 9.
		juego[2][2]=caracter[0];//Esta instruccion le da a la posicion de la matriz el valor de "X".
		sumt();
	}
}
void opeO(){//Se define la funcion "opeO()". Esta funcion toma el valor en la variable "cas" y verifica por medio de "if e else-if"
			//la posision donde desea incertar la letra "O" (que se encuentra en la posicion una del arreglo "caracter[]).
			//A cada posicion de la matriz se le representa por un numero del 1 al 9 como lo imprime la funcion "tabla()".
	if(cas==1){//Primera condicion que se va a ejecutar si la posicion donde se desea incertar O es 1.
		juego[0][0]=caracter[1];//Esta instruccion le da a la posicion de la matriz el valor de "O".
		sumt();
	}
	else if(cas==2){//Segundo condicion que se va a ejecutar si la posicion donde se desea incertar O es 2.
		juego[0][1]=caracter[1];//Esta instruccion le da a la posicion de la matriz el valor de "O".
		sumt();
	}
	else if(cas==3){//Tercera condicion que se va a ejecutar si la posicion donde se desea incertar O es 3.
		juego[0][2]=caracter[1];//Esta instruccion le da a la posicion de la matriz el valor de "O".
		sumt();
	}
	else if(cas==4){//Cuarta condicion que se va a ejecutar si la posicion donde se desea incertar O es 4.
		juego[1][0]=caracter[1];//Esta instruccion le da a la posicion de la matriz el valor de "O".
		sumt();
	}
	else if(cas==5){//Quinta condicion que se va a ejecutar si la posicion donde se desea incertar O es 5.
		juego[1][1]=caracter[1];//Esta instruccion le da a la posicion de la matriz el valor de "O".
		sumt();
	}
	else if(cas==6){//Sexta condicion que se va a ejecutar si la posicion donde se desea incertar O es 6.
		juego[1][2]=caracter[1];//Esta instruccion le da a la posicion de la matriz el valor de "O".
		sumt();
	}
	else if(cas==7){//Septima condicion que se va a ejecutar si la posicion donde se desea incertar O es 7.
		juego[2][0]=caracter[1];//Esta instruccion le da a la posicion de la matriz el valor de "O".
		sumt();
	}
	else if(cas==8){//Octava condicion que se va a ejecutar si la posicion donde se desea incertar O es 8.
		juego[2][1]=caracter[1];//Esta instruccion le da a la posicion de la matriz el valor de "O".
		sumt();
	}
	else if(cas==9){//Novena y ultima condicion que se va a ejecutar si la posicion donde se desea incertar O es 9.
		juego[2][2]=caracter[1];//Esta instruccion le da a la posicion de la matriz el valor de "O".
		sumt();
	}
}
void oper(){//Esta funcion recoje las funciones principales del programa y las ejecuta en orden al juego. Imprime la tabla de
		//referencia, pide el numero de celda, limpia la pantalla e imprime el encabezado del juego y ejecuta primero la funcion
		//"opeX" luego comprueva si hay algun ganador por medio de una serie de ""if e else-if" cada uno por cada forma posible
		//de ganar el juego; luego se ejecutan las funciones antes mencionadas exepto por la funcion "opeX" ya que se ejecuta 
		//la funcion "opeO" que que comprueva la posicion donde se va a imcertar O luego vuelve a comprovar si hay ganador..
	tabla();//Se ejecuta la funcion "tabla()" para que se imprima y sirva como referencia a la hora de ingresar e numero de posicion.
	intrnum(); //Se ejecuta la funcion "intrnum()" la cual pide al usuario el numero de posicion donde desea incertar la letra.
	system("cls");//Comando para limpiar pantalla. Se ejecuta aqui para limpiar pantalla e imprimir los resultados de la interaccion.
	ncb();//Funcion que imprime el encabezado e indicaciones que serviran para la siguiente interaccion.
	opeX();//Se ejecuta la funcion "opeX" que conprueva la posicion done se va poner X e imprime la matriz "juego[][].
	if(juego[0][0]==caracter[0] && juego[0][1]==caracter[0] && juego[0][2]==caracter[0]){//Se ejecuta si en la primera fila solo hay X.
			gan1();
		}
	if(juego[1][0]==caracter[0] && juego[1][1]==caracter[0] && juego[1][2]==caracter[0]){//Se ejecuta si en la segunda fila solo hay X.
			gan1();
		}
	if(juego[2][0]==caracter[0] && juego[2][1]==caracter[0] && juego[2][2]==caracter[0]){//Se ejecuta si en la tercera fila solo hay X.
			gan1();
		}
	if(juego[0][0]==caracter[0] && juego[1][0]==caracter[0] && juego[2][0]==caracter[0]){//Se ejecuta si en la primera columna solo hay X.
			gan1();
		}
	if(juego[0][1]==caracter[0] && juego[1][1]==caracter[0] && juego[2][1]==caracter[0]){//Se ejecuta si en la segunda columna solo hay X.
			gan1();
		}
	if(juego[0][2]==caracter[0] && juego[1][2]==caracter[0] && juego[2][2]==caracter[0]){//Se ejecuta si en la tercera columna solo hay X.
			gan1();
		}
	if(juego[0][0]==caracter[0] && juego[1][1]==caracter[0] && juego[2][2]==caracter[0]){//Se ejecuta si en diagonal solo hay X.
			gan1();
		}
	if(juego[2][0]==caracter[0] && juego[1][1]==caracter[0] && juego[0][2]==caracter[0]){//Se ejecuta si en diagonal solo hay X.
			gan1();
		}		
	if(juego[0][0]==caracter[1] && juego[0][1]==caracter[1] && juego[0][2]==caracter[1]){//Se ejecuta si en la primera fila solo hay O.
			gan2();
		}
	if(juego[1][0]==caracter[1] && juego[1][1]==caracter[1] && juego[1][2]==caracter[1]){//Se ejecuta si en la segunda fila solo hay O.
			gan2();
		}
	if(juego[2][0]==caracter[1] && juego[2][1]==caracter[1] && juego[2][2]==caracter[1]){//Se ejecuta si en la tercera fila solo hay O.
			gan2();
		}
	if(juego[0][0]==caracter[1] && juego[1][0]==caracter[1] && juego[2][0]==caracter[1]){//Se ejecuta si en la primera columna solo hay O.
			gan2();
		}
	if(juego[0][1]==caracter[1] && juego[1][1]==caracter[1] && juego[2][1]==caracter[1]){//Se ejecuta si en la segunda columna solo hay O.
			gan2();
		}
	if(juego[0][2]==caracter[1] && juego[1][2]==caracter[1] && juego[2][2]==caracter[1]){//Se ejecuta si en la tercera columna solo hay O.
			gan2();
		}
	if(juego[0][0]==caracter[1] && juego[1][1]==caracter[1] && juego[2][2]==caracter[1]){//Se ejecuta si en diagonal solo hay O.
			gan2();
		}
	if(juego[2][0]==caracter[1] && juego[1][1]==caracter[1] && juego[0][2]==caracter[1]){//Se ejecuta si en diagonal solo hay O.
			gan2();
		}
	tabla();//Se ejecuta la funcion "tabla()" para que se imprima y sirva como referencia a la hora de ingresar e numero de posicion.
	intrnum(); //Se ejecuta la funcion "pedirnum()" la cual pide al usuario el numero de posicion donde desea incertar la letra.
	system("cls");//Comando para limpiar pantalla. Se ejecuta aqui para limpiar pantalla e imprimir los resultados de la interaccion.
	ncb();//Funcion que imprime el encabezado e indicaciones que serviran para la siguiente interaccion.
	opeO();//Se ejecuta la funcion "opeO" que conprueva la posicion done se va poner O e imprime la matriz "juego[][].
	if(juego[0][0]==caracter[0] && juego[0][1]==caracter[0] && juego[0][2]==caracter[0]){//Se ejecuta si en la primera fila solo hay X.
			gan1();
		}
	if(juego[1][0]==caracter[0] && juego[1][1]==caracter[0] && juego[1][2]==caracter[0]){//Se ejecuta si en la segunda fila solo hay X.
			gan1();
		}
	if(juego[2][0]==caracter[0] && juego[2][1]==caracter[0] && juego[2][2]==caracter[0]){//Se ejecuta si en la tercera fila solo hay X.
			gan1();
		}
	if(juego[0][0]==caracter[0] && juego[1][0]==caracter[0] && juego[2][0]==caracter[0]){//Se ejecuta si en la primera columna solo hay X.
			gan1();
		}
	if(juego[0][1]==caracter[0] && juego[1][1]==caracter[0] && juego[2][1]==caracter[0]){//Se ejecuta si en la segunda columna solo hay X.
			gan1();
		}
	if(juego[0][2]==caracter[0] && juego[1][2]==caracter[0] && juego[2][2]==caracter[0]){//Se ejecuta si en la tercera columna solo hay X.
			gan1();
		}
	if(juego[0][0]==caracter[0] && juego[1][1]==caracter[0] && juego[2][2]==caracter[0]){//Se ejecuta si en diagonal solo hay X.
			gan1();
		}
	if(juego[2][0]==caracter[0] && juego[1][1]==caracter[0] && juego[0][2]==caracter[0]){//Se ejecuta si en diagonal solo hay X.
			gan1();
		}		
	if(juego[0][0]==caracter[1] && juego[0][1]==caracter[1] && juego[0][2]==caracter[1]){//Se ejecuta si en la primera fila solo hay O.
			gan2();
		}
	if(juego[1][0]==caracter[1] && juego[1][1]==caracter[1] && juego[1][2]==caracter[1]){//Se ejecuta si en la segunda fila solo hay O.
			gan2();
		}
	if(juego[2][0]==caracter[1] && juego[2][1]==caracter[1] && juego[2][2]==caracter[1]){//Se ejecuta si en la tercera fila solo hay O.
			gan2();
		}
	if(juego[0][0]==caracter[1] && juego[1][0]==caracter[1] && juego[2][0]==caracter[1]){//Se ejecuta si en la primera columna solo hay O.
			gan2();
		}
	if(juego[0][1]==caracter[1] && juego[1][1]==caracter[1] && juego[2][1]==caracter[1]){//Se ejecuta si en la segunda columna solo hay O.
			gan2();
		}
	if(juego[0][2]==caracter[1] && juego[1][2]==caracter[1] && juego[2][2]==caracter[1]){//Se ejecuta si en la tercera columna solo hay O.
			gan2();
		}
	if(juego[0][0]==caracter[1] && juego[1][1]==caracter[1] && juego[2][2]==caracter[1]){//Se ejecuta si en diagonal solo hay O.
			gan2();
		}
	if(juego[2][0]==caracter[1] && juego[1][1]==caracter[1] && juego[0][2]==caracter[1]){//Se ejecuta si en diagonal solo hay O.
			gan2();
		}
}
void gan1(){//Esta funcion se ejecuta cuando el ganador es el usuario que usa la letra X. Imprime el letrero y manda a la funcion fin.
	cout<<"________________________________________________________"<<endl;		
	cout<<endl;																
	cout<<"                     EL GANADOR ES X                    "<<endl;		
	cout<<"________________________________________________________"<<endl;
	end();
}
void gan2(){//Esta funcion se ejecuta cuando el ganador es el usuario que usa la letra O. Imprime el letrero y manda a la funcion fin.
	cout<<"________________________________________________________"<<endl;		
	cout<<endl;																
	cout<<"                     EL GANADOR ES O                    "<<endl;		
	cout<<"________________________________________________________"<<endl;
	end();
}
void end(){//Esta funcion se ejecuta cuando un usuario gana o se rellenan todos los espacios de la matriz. Muestra el letrero que finalizo
			//el programa y el nombre del programador y la version del juego y luego ejecuta el comando "extit(0)" para cerrar el programa.
			 
	cout<<"________________________________________________________"<<endl;		//
	cout<<endl;																	//Se imprime el siguiente letrero al final de las
	cout<<"                      JUEGO FINALIZO                    "<<endl;		//interacciones para indicar que el juego termino.
	cout<<"________________________________________________________"<<endl;		//
	cout<<endl;	
	system("pause");
	system("cls");//Comando para limpiar pantalla al terminar el juego.
	cout<<"________________________________________________________"<<endl;		//
	cout<<endl;																	//
	cout<<"                PROGRAMADOR MARLON COREAS               "<<endl;		//Este letrero si imprime al final del programa
	cout<<endl;																	//con los datos del programador y la vercion del juego.
	cout<<"                      VERSION 1.1                       "<<endl;		//
	cout<<"________________________________________________________"<<endl;		//
	exit(0);
}

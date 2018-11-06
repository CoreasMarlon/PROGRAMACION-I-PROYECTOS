#include <cstdlib>
#include <iostream>

using namespace std;

struct Empleado{//Estructura para almacenar datos de los empleados.
char cod[5];//esta variable almacena el codigo del empeado.
char nombre[50];//esta variable almacena el nombre del empleado.
int edad;//esta variable almacena la edad del empleado.
float salbase;//esta variable almacena el salario base del empleado.
float salliquido;//esta variable almacena el salario liquido del empleado.
float isss;//esta variable almacena el valor del isss a descoontar al empleado.
float afp;//esta variable almacena el valor del afp a descontar del empleado.
float renta;//esta variable almacena el valor de la renta a descontar al empleado.
float totalprestamo;//esta variable almacena el total de los prestamos que tiene el empleado.
char departamento[60];//esta variable almacena el departamento.
char puesto[60];//esta variable almacena el puesto del empleado.
};
struct Sucursal{//Estructura de la sucursal.
int numsucursal;//variale que almacena el numero de sucursal.
char nombresucursal[60];//variable que almacena el nombre de la sucursal.
};

float calIsss(float salbase);//Declaracion de la funcion para calcular el ISSS.
float calAfp(float salbase);//Declaracion de la funcion para calcular el AFP.
float calRenta(float salbase, float isss, float afp);//Declaracion de la funcion para calcular la Renta.
void limp();//Declaracion de la funcion para limpiar pantalla e imprimir el encabezado.


int main(){
system("Color 80");//Comando para darle color a la consola.
limp();
int n;//Esta variable almacena el numero de empleados que se tiene. Permite saber las veces que se va a reptir la peticion de datos.
do{
cout << "Cantidad de Empleados: ";//Se  pide la cantidad de empleados.
cin>>n;//Se lee el valor de n, o la cantidad de empleados.
limp();
}while(n<=0);//Este ciclo se ejecuta si la cantidad de empleados es negativa (ya que es ilogico).
Empleado e[n]; //Se crea una variable del tipo Empleado con el tamaño de n.
Sucursal s;//Se crea una variable del tipo Sucursal.
for(int i=0; i<n;i++)//Este ciclo se va a ejecutar por cada empleado con el que se cuente.
{
cout << "Codigo de Empleado:"<<endl;//Se pide el coigo del empleado.
cin>>e[i].cod;//Se lee el codigo del empleado y se almacena en la variable cod de la estructura empleado.
cout << "Nombre del Empleado:"<<endl;//Se pide el nombre del empleado.
cin>>e[i].nombre;//Se lee el nombre del empleado y se almacena en la variable nombre de la estructura empleado.
cout << "Edad:"<<endl;//Se pide la edad del empleado.
cin>>e[i].edad; //Se lee la edad del empleado y se almacena en la variable edad de la estructura empleado.
cout << "Salario base:"<<endl;//Se pide el salario del empleado.
cin>>e[i].salbase;//Se lee el salario base del empleado y se almacena en la variable salbase de la estructura empleado.
e[i].isss=calIsss(e[i].salbase);//Se ejecuta la funcion para calcular el ISSS que lleva como parametro el salario base y retorna el valor del ISSS el que se lmacena en la variable isss de la estructura Empleado. 
e[i].afp=calAfp(e[i].salbase);//Se ejecula la funcion para calcular el AFP que lleva como parametro el salario base y retorna el valor del APF y se almacena en la variable afp de la estructura Empleado.
e[i].renta=calRenta(e[i].salbase, e[i].isss, e[i].afp);//Se ejecuta la funcion para calcular la renta la que lleva como parametro el salario base, el valor del ISSS y el valor del AFP la cual retorna el valor de la renta y se almacena en la variable renta de la estructura Empleado.

int np; //Variable para almacenar el numero de prestamos.
float ppp; //Variable para almacenar lo que se paga mensualmente por cada prestamo.
float tp=0; //variable para almacenar el total por los prestamos existentes.
int mp; //esta variable almacena el numero de opcion si requiere mas prestamos.
float  otrop; //esta variable almacena (si se solicita) la cantidad de prestamo solicitado.
int tiempop; //esta variable almacena (si se solicita) los meses de tiempo por el cual se solicita el nuevo prestamo.
float mnp=0; //esta variable almacena (si se solicita) el total a pagar mensual por el prestamo solicitado.
//ESTE GRUPO DE VARIABLES ANTES DECLARADAS SE USAN PARA PEDIR LOS DATOS SOBRE LOS CREDITOS DEL EMPLEADO Y CALCULARLOS.
	do{
	cout<<"Cuantos prestamos tiene: ";//Se pide la cantidad de prestamos.
	cin>>np;//se lee la cantidad y se almacena en la variable np.
	if(np < 0){//Se ejecutara si el numero introducido es negativo. (no se puede tener un numero neativo de creditos).
		cout<<"Ingrese un numero valido"<<endl;}
	else if(np > 5){//se ejecutra si el numero introducido es mayor que 5 ya que no se permiten mas de 5 creditos.
		cout<<"No puede tener mas de 5 prestamos"<<endl;}
	}while(np < 0 || np > 5);//Este ciclo se ejecuta si introduce numeros negativos o meyores que 5 ya que no se permiten mas de 5 prestamos.
	do{
	for (int i=1; i<=np; i++){//Se ejecutara las veces dependiendo del numero de prestamos.
		do{//Se crea este ciclo para camprobar que la cantidad sea valida.
		cout<<"Pago por prestamo "<<i<<endl;//Se pide el pago por cada prestamo.
		cin>>ppp;//Se almacena la cantidad en la variable ppp.
		if (ppp < 0){//Si la cantidad es negativa se ejecutara.
			cout<<"Ingrese cantidades validas"<<endl;
		}
		}while(ppp < 0);//Se ejecuta si la cantidad introducida es neativa ya que no se puede estar pagando una cantidad negativa.
		tp = tp+ppp;//la variable tp acumulara las cantidades pagadas por cada prestamo, que aumentara a medida se ejecuta el ciclo for anterior.
	}
	if(tp > (e[i].salbase*0.2)){//Se ejecuta si la suma de lo que paga por el total de prestamos es mayor al 20% del salario.
	cout<<"No puede pagar por prestamos mas del 20% de su Salario Liquido"<<endl;
	cout<<"Introduzca las cantidades correctas"<<endl;
	}
	else if((tp == (e[i].salbase*0.2)) || (np == 5)){//Se ejecuta si la suma de lo que paga por el total de prestamos es igual al 20% del salario.
	cout<<"No puede realizar mas prestamos"<<endl;
	}
	}while((e[i].salbase*0.2) < tp || tp < 0);//Se ejecuta si la suma de lo que paga por el total de prestamos es menor al 20% del salario.
	cout<<"Actualmente paga $"<<tp<<" por "<<np<<" prestamos"<<endl;
	if(np >= 0 && np <5 ){//Se ejecuta si el numero de prestamos es menor a 5 ya que 5 es la cantidad maxima de prestamos.
	do{//Este ciclo se ejecuta para preguntarle al usuario si desea otro prestamo.
	cout<<"Desea otro prestamo: "<<endl;
	cout<<"Si desea otro prestamo intoduzca 1 y si no introduzca 2."<<endl;
	cin>>mp;//se lee el numero de opcion que desea realizar.
	}while(mp < 1 || mp > 2);//esta condicion se asegura que se incerte un numero valido.
	if (mp == 1){//si desea otro prestamo.
		do{
		cout<<"Cuanto desea prestar: $";//La cantidad que desea prestar.
		cin>>otrop;//se lee el valor del prestamo que desea realizar.
		cout<<"Por cuantos meses desea el prestamo: ";//el tiempo por el cual solicita el prestamo.
		cin>>tiempop;//se lee la cantidad de meses por los que desea el prestamo.
		mnp = (otrop / tiempop);//se calcula la cantidad a pagar al mes por el prestamo solicitado.
		if(otrop < 0){//Si la cantidad que solicita es negativa o invalidad se ejecuta y se muestra el letrero.
			cout<<"Intrduzca una cantidad valida."<<endl;
		}
		else if(tiempop < 0){//Si el tiempo solicitado es invalido se ejecuta y se muestra el letrero.
			cout<<"Intrduzca un numero de meses validos."<<endl;
		}
		else if((mnp + tp) <= (e[i].salbase*0.2)){//si la cantidad a pagar por el nuevo prestamo mas lo que paga por los prestamos anteriores no sobrepasa el 20% del salario base.
		cout<<"Monto a pagar por el nuevo prestamo: $"<<mnp<<endl;//Se muestra en pantalla y se continua con el programa.
		}
		else{//si la cantidad a pagar por el nuevo prestamo mas lo que paga por los prestamos anteriores sobrepasa el 20% del salario base.
			cout<<"La cantidad es muy grande o el tiempo es muy corto,"<<endl;//
			cout<<"prueve cambiando el monto solicitado o el numero de meses: ";
		}
	}while(otrop < 0 || tiempop < 0);//condicion para asegurar que la cantidad y tiempo introducidos sean validos.
	}
}
cout<<endl;//Salto de linea.
e[i].totalprestamo = (tp + mnp);//Se almacena el total a pagar al mes por los prestamos mas el nuevo prestamo (si solicito).
e[i].salliquido = (e[i].salbase - e[i].isss - e[i].afp - e[i].renta - tp - mnp);//se calcula el salario liquido restando al salario base el ISSS, AFP, Renta y el total por los prestamos a pagar.
system("pause");//camando para pausar el sistema.
limp();
}
limp();
cout<<"Codigo	Nombre	Edad	S. Base	ISSS	AFP	Renta	TPPres.	S. Liquido"<<endl;//Indicadores de los datos impresos.
for(int i=0; i<n;i++)//Este ciclo se repetira segun el numero de empleados.
{//Se imprimen los datos guardados en la estructura.
cout <<e[i].cod<<"\t";//Se imprime el codigo del empleado.
cout <<e[i].nombre<<"\t";//Se imprime el nombre del empleado.
cout<<e[i].edad<<"\t";//Se imprime la edad del empleado.
cout<<e[i].salbase<<"\t";//Se imprime el salario base del empleado.
cout<<e[i].isss<<"\t";//Se imprime el ISSS del empleado.
cout<<e[i].afp<<"\t";//Se imprime el AFP del empleado.
cout<<e[i].renta<<"\t";//Se imprime la renta del empleado.
cout<<e[i].totalprestamo<<"\t";//Se imprime el total de los prestamos del empleado.
cout<<e[i].salliquido<<"\t";//Se imprime el salario liquido del empleado.
cout<<endl;//Salto de linea.
}
system("Pause");
}

float calIsss(float salbase)//funcion para calcular el ISSS, tiene como parametro el salario base.
{
float isss=0;//variable local para calcular el ISSS.
if (salbase > 1000){//Si el salario base es mayor a $1000 se aplica el valor de techo que es $30.
		isss =  30;
	}
	else{//Si el salario base es menor a $1000 se calcula el 30% del salario base.
		isss = (salbase * 0.03);
	}
	return isss;//El valor de retorno es el ISSS.
}
float calAfp(float salbase){//funcion para calcular el AFP, tiene como parametro el salario base.
	float afp=0;//variable local para calcular el AFP.

	afp = (salbase * 0.075);//El AFP es el 7.50% del salrio base.
	return afp;//Se retorna el valor del AFP.
}
float calRenta(float salbase, float isss, float afp){//Funcion para calcular la renta, tiene como parametros el salario base y el valor calculado del AFP e ISSS.
	float saldes;//variable local para almacenar el resultado del salario base menos AFP e ISSS.
	float renta;//variable local para almacenar el valor calculado de la renta.
	saldes = (salbase - isss - afp);//se le resta al salario base el AFP e ISSS para calcular la renta on este dato.
	if (salbase >= 0.01 && saldes <= 472.0){//Si el valor de saldes entra en el primer tramo de la tabla de retencion.
		renta = 0;//No se aplca renta
	}
	else if (saldes >= 472.01 && saldes <= 895.24){//Si el valor de saldes entra en el segundo tramo de la tabla de retencion.
		renta = (((saldes - 472) * 0.1) + 17.67);//Se calcula la renta aplicando los calculos correspondientes.
	}
	else if (saldes >= 895.25 && saldes <= 2038.10){//Si el valor de saldes entra en el tercer tramo de la tabla de retencion.
		renta = (((saldes - 895.24) * 0.2) + 60.00);//Se calcula la renta aplicando los calculos correspondientes.
	}
	else{//Si el valor de saldes entra en el tercer tramo de la tabla de retencion.
		renta = (((saldes - 2038.10) * 0.3) + 288.57);//Se calcula la renta aplicando los calculos correspondientes.
	}
	return renta;//el vaor de retorno es la renta calculada.
}
void limp(){//funcion que se utiliza para limpiar pantalla y luego imprimir un encabezado.
	system("cls");//comando para limpiar pantalla.
	cout<<"_______________________________________________________________________"<<endl;
	cout<<endl;
	cout<<"                       BASE DE DATOS DE EMPLEADOS                      "<<endl;
	cout<<"_______________________________________________________________________"<<endl;
}

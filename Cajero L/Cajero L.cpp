// Cajero L.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "iostream"
#include "windows.h"
#include "locale.h"
#include "string"
#include <fstream>
#include <string>
#include <conio.h>
#include <cstdlib>

using namespace std;

#define USER "0511"
#define PASS "0511"
#define ENTER 13
#define BACKSPACE 8

int _tmain(int argc, _TCHAR* argv[])
{
	
    int saldocajero = 1000000, cuentacredito=100000, cuentacorriente= 10000, cuentaahorro=1000000;
	int saldo, retiro, opciones,deposito,opcioncajero,depositoopcion,dinerotercerodeposito,recibo1,tipodecuentaconsulta,recibo2,recibo3,recibo4,recibo5,retirocuenta,totalcuentacredito=100000,numerocredito,totalcuentacorriente=10000,numerocorriente,totalcuentaahorro=1000000,numeroahorro,recibo6,recibo7,recibo8,sionocajero=0,dinerocuentadeposito;
	bool ingresa = false;
	int contador = 0;
	string usuario, password, cuentat;
	string cuentatercerodeposito;
	ingresa==false;
	do{ setlocale(LC_ALL, "spanish");

	cout<<"*****     *******           *****               **           **      *    *                  "<<endl;                      
	cout<<"*   *     *     *          *     *             *  *         *        *   *                   "<<endl;             
	cout<<"*   *     *     *         *       *           *    *       *         *  *                    "<<endl;              
	cout<<"****      *******        * ******* *         *      *     *          ***                     "<<endl;            
	cout<<"*         *     *       *           *       *        *   *           *  *                    "<<endl;                    
	cout<<"*         *     *      *             *     *          * *            *    *                  "<<endl;                 
	cout<<"*    *    *******     *               *   *            *             *      *                "<<endl;                      

	

	//Presentacion de logo
                                                                              
	HANDLE h=GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	cout<<"\t\****** Cajero Perez ******"<<endl;

	do { contador=0;
	usuario="";
	password="";
	
     
	 fstream vari12;
	
	
	


		cout << "\n\t Ingrese el numero de la tarjeta: ";
		char caracter1;
		caracter1=_getch(); //Ingreso del primer numero

		while (caracter1 != ENTER) {

			if (caracter1 != BACKSPACE){
				usuario.push_back(caracter1);
				cout<<"*";}
			else{        //Colocacion de astericos en contraseña
				if (usuario.length() >0){
					cout<< "\b \b";
					usuario= usuario.substr(0, usuario.length() - 1); //Linea de codigo para que se pueda borrar los digitos
				}
			}
			caracter1 = _getch();

		}

		if (usuario == USER && password == PASS){
			ingresa = true;
		}
		
		system ("cls");
	cout<<"*****     *******           *****               **           **      *    *                  "<<endl;                      
	cout<<"*   *     *     *          *     *             *  *         *        *   *                   "<<endl;             
	cout<<"*   *     *     *         *       *           *    *       *         *  *                    "<<endl;              
	cout<<"****      *******        * ******* *         *      *     *          ***                     "<<endl;            
	cout<<"*         *     *       *           *       *        *   *           *  *                    "<<endl;                    
	cout<<"*         *     *      *             *     *          * *            *    *                  "<<endl;                 
	cout<<"*    *    *******     *               *   *            *             *      *                "<<endl;     
                                                                //Logo              
	HANDLE h=GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
	cout<<"\t\****** Cajero Perez ******"<<endl;
		cout << "\tIngrese la Contrasena: ";
		// getline(cin, password);
		char caracter;  //Ingreso de digito
		caracter = _getch();


		while (caracter != ENTER) {

			if (caracter != BACKSPACE) {
				password.push_back(caracter);
				cout << "*";

			}
			else {
				if (password.length() > 0) {
					cout << "\b \b";
					password = password.substr(0, password.length() - 1);
				}
			}

			caracter = _getch();
		}


		if (usuario == USER && password == PASS) {
			ingresa = true;
		}
		else {
			ingresa=false;
			cout << "\n\n\tEl usuario y/o contrasena son incorrectos" << endl;
			cin.get();
			contador++;
		}
		system("cls");
	cout<<"*****     *******           *****               **           **      *    *                  "<<endl;                      
	cout<<"*   *     *     *          *     *             *  *         *        *   *                   "<<endl;             
	cout<<"*   *     *     *         *       *           *    *       *         *  *                    "<<endl;              
	cout<<"****      *******        * ******* *         *      *     *          ***                     "<<endl;            
	cout<<"*         *     *       *           *       *        *   *           *  *                    "<<endl;                    
	cout<<"*         *     *      *             *     *          * *            *    *                  "<<endl;                 
	cout<<"*    *    *******     *               *   *            *             *      *                "<<endl;     
	} while (ingresa == false && contador < 3);
	//Logo
	if (ingresa == false) {
		cout << "\n\tUsted no pudo ingresar al sistema. ADIOS" << endl;
	}
	else {
		system("cls");
	cout<<"*****     *******           *****               **           **      *    *                  "<<endl;                      
	cout<<"*   *     *     *          *     *             *  *         *        *   *                   "<<endl;             
	cout<<"*   *     *     *         *       *           *    *       *         *  *                    "<<endl;              
	cout<<"****      *******        * ******* *         *      *     *          ***                     "<<endl;            
	cout<<"*         *     *       *           *       *        *   *           *  *                    "<<endl;                    
	cout<<"*         *     *      *             *     *          * *            *    *                  "<<endl;                 
	cout<<"*    *    *******     *               *   *            *             *      *                "<<endl;     
                                         //LOGO                                     
	HANDLE h=GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
	cout<<"\t\****** Cajero Perez ******"<<endl;

		  cout<<"Escoja la opcion que vaya a utilizar"<<endl;
   cout<<"1.Deposito"<<endl;
   cout<<"2.Consulta"<<endl;
   cout<<"3.Retiro"<<endl;
   cout<<"4.Salir"<<endl;
   cin>>opcioncajero;
   system("cls");
   //Opciones
   if(opcioncajero==1){

   system("cls");
	   cout<<"Escoja a donde vas a hacer el deposito"<<endl;
	   cout<<"1.Tercero"<<endl;
	   cout<<"2.Deseo ingresarlo en mi propia cuenta"<<endl;
	   cin>>depositoopcion;
	   system("cls"); //Opciones
	   if (depositoopcion==1){
		   cout<<"Ingrese la cuenta que quieres depositar"<<endl;         
		   cin>>cuentatercerodeposito;                                     //Lineas de codigos que sirve para que se deposite en un tercero

			   
		   cout<<"Ingrese la cantidad de dinero que quiere depositar al tercero"<<endl;
	       cin>>dinerotercerodeposito;

		  
		   cout<<"Deposito hecho correctamente"<<endl;
		   cout<<""<<endl;
		   cout<<"Factura Banco Perez"<<endl;
		   cout<<""<<endl;                                                   //Lineas de codigos que sirve para poner la factura
		   cout<<"Numero de transaccion:509996  "<<endl;
		   cout<<"Cantidad del deposito:  "<<dinerotercerodeposito<<endl;
		   cout<<"Direccion: Los Mina, Av Venezuela"<<endl;
		   cout<<""<<endl;
		   //Resultado de la primera opcion
		  


           cout<<"Desea imprimir el recibo en pantalla?"<<endl;
		   cout<<"1.SI"<<endl;                                    //Condicion que sirve para decir si se imprime la factura
		   cout<<"2.NO"<<endl;
		   cin>>recibo1;

		   if(recibo1==1){
			system("cls");
			  ofstream cajero;  
		   cajero.open("micajero.txt");
		   cajero<<"Factura Banco Perez"<<endl;
		   cajero<<""<<endl;
		   cajero<<"Numero de transaccion:509996  "<<endl;
		   cajero<<"Cantidad del deposito:  "<<dinerotercerodeposito<<endl;   //Lineas de codigos que sirve para que se ponga la factura
		   cajero<<"Direccion: Los Mina, Av Venezuela"<<endl;
		   cajero<<"Transaccion exitosa"<<endl;
		   cajero<<"Vuelva pronto!"<<endl;

		   system("cls");
		   cajero.close();
		   cin.get();
		   system("start micajero.txt");


		   }

	   }
	   system("cls");
	   if(depositoopcion==2){
		   cout<<"Ingrese la cantidad que dinero que quieres ingresar a tu cuenta"<<endl;
		   cin>>dinerocuentadeposito;                
		   cout<<"Deposito hecho correctamente"<<endl;        //Lineas de codigos que sirve para que ingrese el dinero del deposito
		   totalcuentaahorro=dinerocuentadeposito+cuentaahorro;
		   cout<<""<<endl;
		   
		   cout<<"Factura Banco Perez"<<endl;
		   cout<<""<<endl;
		   cout<<"Cantidad del deposito:  "<<dinerocuentadeposito<<endl;
		   cout<<"Numero de transaccion:509996  "<<endl;
		   cout<<"Direccion: Los Mina, Av Venezuela"<<endl;
		   cout<<""<<endl;
	   

	       cout<<"Desea imprimir el recibo en pantalla?"<<endl;
		   cout<<"1.SI"<<endl;
		   cout<<"2.NO"<<endl;
		   cin>>recibo2;

		   if(recibo2==1){
			   system("cls");
			     ofstream cajero;  
		   cajero.open("micajero.txt");
		   cajero<<"Factura Banco Perez"<<endl;
		   cajero<<""<<endl;
		   cajero<<"Numero de transaccion:509996  "<<endl;
		   cajero<<"Cantidad del deposito:  "<<dinerocuentadeposito<<endl;     //Lineas de codigos que sirve para que se ponga la factura
		   cajero<<"Direccion: Los Mina, Av Venezuela"<<endl;
		   cajero<<"Transaccion exitosa"<<endl;
		   cajero<<"Vuelva pronto!"<<endl;

		   system("cls");
		   cajero.close();
		   cin.get();
		   system("start micajero.txt");

		   }
	   }

	   
	    
   }
   
     if(opcioncajero==2){
		 
		 cout<<"Escoja que tipo de cuenta deseas consultar"<<endl;
		 cout<<"1.Cuenta de ahorro"<<endl;
		 cout<<"2.Cuenta corriente"<<endl;
		 cout<<"3.Cuenta de credito"<<endl;
		 cin>>tipodecuentaconsulta;
		 system("cls");
		 if(tipodecuentaconsulta==1){
			 cout<<"Factura Banco Perez"<<endl;
			 cout<<"Tienes en la cuenta de ahorro la cantidad de:     "<<totalcuentaahorro<<endl;
			 cout<<""<<endl;
		     cout<<"Direccion: Los Mina, Av Venezuela"<<endl;
			 
			 
			 cout<<"Vas a imprimir la factura que se presenta en pantalla?"<<endl;                    
			 cout<<"1.SI"<<endl;
		     cout<<"2.NO"<<endl;
		     cin>>recibo3;
			 
			 if(recibo3==1){
				 system("cls");
				   ofstream cajero;  
		   cajero.open("micajero.txt");                                           //Lineas de codigos que sirve para que la factura se presenta en la pantalla
		   cajero<<"Factura Banco Perez"<<endl;
		   cajero<<""<<endl;
		   cajero<<"Balance de la cuenta:  "<<totalcuentaahorro<<endl;
		   cajero<<"Direccion: Los Mina, Av Venezuela"<<endl; 
		   cajero<<"Vuelva pronto!"<<endl;

		   system("cls");
		   cajero.close();
		   cin.get();
		   system("start micajero.txt");

		   }

		 }
		 if(tipodecuentaconsulta==2){
			 cout<<"Factura Banco Perez"<<endl;
			 cout<<"Tienes en la cuenta corriente la cantidad de:    "<<totalcuentacorriente<<endl;
			 cout<<""<<endl;
		     cout<<"Direccion: Los Mina, Av Venezuela"<<endl;


			 
			 cout<<"Vas a imprimir la factura que se presenta en pantalla?"<<endl;
			 cout<<"1.SI"<<endl;
		     cout<<"2.NO"<<endl;
		     cin>>recibo4;
			 
			 if(recibo4==1){
				 system("cls");
				   ofstream cajero;  
		   cajero.open("micajero.txt");
		   cajero<<"Factura Banco Perez"<<endl;
		   cajero<<""<<endl;
		   cajero<<"Balance de la cuenta:  "<<totalcuentacorriente<<endl;           //Lineas de codigos que sirve para que se ponga la factura
		   cajero<<"Direccion: Los Mina, Av Venezuela"<<endl;
		   cajero<<"Vuelva pronto!"<<endl;

		   system("cls");
		   cajero.close();
		   cin.get();
		   system("start micajero.txt");

		   }
		 }
        if(tipodecuentaconsulta==3){
			cout<<"Tienes en la cuenta de credito la cantidad de:   "<<totalcuentacredito<<endl;
			cout<<"Factura Banco Perez"<<endl;
			 cout<<""<<endl;
			                                                                                  //Lineas de codigos que sirve para que se ponga la factura
		     cout<<"Direccion: Los Mina, Av Venezuela"<<endl;
			 cout<<"Vas a imprimir la factura que se presenta en pantalla?"<<endl;
			 cout<<""<<endl;


			 cout<<"1.SI"<<endl;
		     cout<<"2.NO"<<endl;
		     cin>>recibo5;
			 
			 if(recibo5==1){
				 system("cls");
				   ofstream cajero;  
		   cajero.open("micajero.txt",ios::out);
		   cajero<<"Factura Banco Perez"<<endl;
		   cajero<<""<<endl;
		   cajero<<"Balance de la cuenta:  "<<totalcuentacredito<<endl;        //Lineas de codigos que sirve para que se ponga la factura
		   cajero<<"Direccion: Los Mina, Av Venezuela"<<endl;
		   cajero<<"Vuelva pronto!"<<endl;

		   system("cls");
		   cajero.close();
		   cin.get();
		   system("start micajero.txt");

		   }
		}

	 }
	 
	 if(opcioncajero==3){

		 cout<<"Escoja a que cuenta quieres retirar el dinero"<<endl;
		 cout<<"1.Credito"<<endl;
		 cout<<"2.Corriente"<<endl;
		 cout<<"3.Ahorro"<<endl;
         cin>>retirocuenta;
		 system("cls");



		 if(retirocuenta==1) { 
			 cout<<"Ingrese la cantidad de dinero que quieres retirar"<<endl;
			 cin>>numerocredito;

			 if (numerocredito > 100000){
			
			system ("cls");
		cout<<"  No puede retirar una cantidad mayor a 100.000 "<<endl;
	}


			 

				if (numerocredito < 100000){ 

			 totalcuentacredito = cuentacredito-numerocredito;
			 cout<<"Factura Banco Perez"<<endl;
			 cout<<"Usted retiro la cantidad de:   "<<numerocredito<<endl;
			 cout<<"El nuevo balance de su cuenta de credito es :   "<<totalcuentacredito<<endl;            //Lineas de codigos que sirve para que se ponga la factura
			 cout<<""<<endl;

			 cout<<"Numero de transaccion:509996  "<<endl;                         
		     cout<<"Direccion: Los Mina, Av Venezuela"<<endl;                                        //Lineas de codigos que sirve para que se ponga la factura
			 cout<<"Vas a imprimir la factura que se presenta en pantalla?"<<endl;
			 cout<<""<<endl;
			 

			 cout<<"1.SI"<<endl;
		     cout<<"2.NO"<<endl;
		     cin>>recibo6;
				

		 
			 

		 
			
			 if(recibo6==1){
		   system("cls");
		     ofstream cajero;  
		   cajero.open("micajero.txt",ios::out);
		   cajero<<"Factura Banco Perez"<<endl;
		   cajero<<""<<endl;
		   cajero<<"Numero de transaccion:509996  "<<endl;
		   cajero<<"Usted retiro la cantidad de:   "<<numerocredito<<endl;          //Lineas de codigos que sirve para que se ponga la factura
		   cajero<<"Balance de la cuenta:  "<<totalcuentacredito<<endl;
		   cajero<<"Direccion: Los Mina, Av Venezuela"<<endl;
		   cajero<<"Transaccion exitosa"<<endl;
		   cajero<<"Vuelva pronto!"<<endl;

		   system("cls");
		   cajero.close();
		   cin.get();
		   system("start micajero.txt");
			 }
			 }
			 }
		 
		 

		  if(retirocuenta==2) { 
			 cout<<"Ingrese la cantidad de dinero que quieres retirar"<<endl;
			 cin>>numerocorriente;
			  if (numerocorriente > 10000){
			
			system ("cls");
		cout<<"  No puede retirar una cantidad mayor a 10.000 "<<endl;
	}

			  if (numerocorriente < 10000){ 
			 totalcuentacorriente= cuentacorriente-numerocorriente;
			 
			 cout<<"Factura Banco Perez"<<endl;
			
			 cout<<"El nuevo balance de su cuenta corriente es :   "<<totalcuentacorriente<<endl;
			 cout<<"Numero de transaccion:509996  "<<endl;                                          //Lineas de codigos que sirve para que se ponga la factura
			 cout<<""<<endl;
		     cout<<"Direccion: Los Mina, Av Venezuela"<<endl;
			 cout<<""<<endl;
			 cout<<"Vas a imprimir la factura que se presenta en pantalla?"<<endl;
			 cout<<""<<endl;


			 cout<<"1.SI"<<endl;
		     cout<<"2.NO"<<endl;
		     cin>>recibo7;
			 
			 if(recibo7==1){
				 system("cls");
				   ofstream cajero;  
		   cajero.open("micajero.txt",ios::out);
		   cajero<<"Factura Banco Perez"<<endl;
		   cajero<<""<<endl;
		   cajero<<"Numero de transaccion:509996  "<<endl; 
		   cajero<<"Usted retiro la cantidad de:   "<<numerocorriente<<endl;   //Lineas de codigos que sirve para que se ponga la factura
		   cajero<<"Balance de la cuenta:  "<<totalcuentacorriente<<endl;
		   cajero<<"Direccion: Los Mina, Av Venezuela"<<endl;
		   cajero<<"Transaccion exitosa"<<endl;
		   cajero<<"Vuelva pronto!"<<endl;

		   system("cls");
		   cajero.close();
		   cin.get();
		   system("start micajero.txt");

			 }
		   }
		 }
		   if(retirocuenta==3) { 
			 cout<<"Ingrese la cantidad de dinero que quieres retirar"<<endl;
			 cin>>numeroahorro;
			 if (numeroahorro > 1000000){
			
			system ("cls");
		cout<<"  No puede retirar una cantidad mayor a 1.000.000 "<<endl;
	}
			 if (numeroahorro < 1000000){ 
			 totalcuentaahorro=cuentaahorro-numeroahorro;
			 cout<<"Factura Banco Perez"<<endl;
			 cout<<"El nuevo balance de su cuenta de ahorro es :   "<<totalcuentaahorro<<endl;
			 cout<<""<<endl;
			 cout<<"Numero de transaccion:509996  "<<endl;                         //Lineas de codigos que sirve para que se ponga la factura
		     cout<<"Direccion: Los Mina, Av Venezuela"<<endl;
			 cout<<""<<endl;
			 cout<<"Vas a imprimir la factura que se presenta en pantalla?"<<endl;
			 cout<<""<<endl;

			 

			 cout<<"1.SI"<<endl;
		     cout<<"2.NO"<<endl;
		     cin>>recibo8;
			 
			 if(recibo8==1){
				   ofstream cajero;  
		   system("cls");
		   cajero.open("micajero.txt");
		   cajero<<"Factura Banco Perez"<<endl;
		   cajero<<""<<endl;
		   cajero<<"Numero de transaccion:509996  "<<endl;
		   cajero<<"Usted retiro la cantidad de:   "<<numeroahorro<<endl;          //Lineas de codigos que sirve para que se ponga la factura
		   cajero<<"Balance de la cuenta:  "<<totalcuentaahorro<<endl;
		   cajero<<"Direccion: Los Mina, Av Venezuela"<<endl;
		   cajero<<"Transaccion exitosa"<<endl;
		   cajero<<"Vuelva pronto!"<<endl;

		   system("cls");
		   cajero.close();
		   cin.get();
		   system("start micajero.txt");
			 }
		   }
			 
		 }
		   }
	 
	 if(opcioncajero==4){
		 system("cls");
		 cout<<"Seguro que quieres salir?"<<endl;

					cout<<"1.SI"<<endl;
					cout<<"0.NO"<<endl;
					cin>>sionocajero;                      //Lineas de codigos que sirve para que se ponga la condicion de salir
					if (sionocajero==1){
					
						exit;
					
				
					
					}
	 }
	system("pause");
	system("cls");
		}
	} while (sionocajero == 0);
	return 0;
}


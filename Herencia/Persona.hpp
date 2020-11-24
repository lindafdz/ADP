#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;



class Persona{
	//protected:
	private:
		string Nombre;
		int Edad;
	public:
		Persona();
		Persona(string, int);
		void MostrarDatos();
		
	
};
class Alumno:public Persona{
	private:
		int Noboleta;
	public:
		Alumno();
		void Muestra();
		
};

class Empleado: public Persona{
	private:
		string 
}; 

Persona::Persona(){
	/*Nombre="Zamora";
	Edad=25;*/
	cout<<"Ingresa el Nombre:";
	cin>> Nombre;
	cout<<"Ingresa Edad:";
	cin>>Edad;
}
Persona::Persona(string a, int e){
	Nombre=a;
	Edad=e;
}
//:: operador de pertenencia 
void Persona::MostrarDatos(){
	cout<<"Nombre:"<<Nombre<<endl;
cout<<"Edad:"<<Edad<<endl;

}
Alumno::Alumno(){
	cout<<"Ingresa Numeor de Boleta";
	cin>> Noboleta;
}
void Alumno::Muestra(){
	cout<<"Noboleta"<<endl;
	
	
}

//Fernández Olvera Linda María 			1MM4 		ADP

#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class Transmision{
	protected:
		string Tipo;
	public:
		Transmision();	
};

class Dispositivo : public Transmision{
	protected:
		string Nombred;
		float anchodeB;	
	public:
		Dispositivo();
		void MuestraDatos();
};

class Archivo : public Dispositivo{
	private:
		string Nombrea;
		int Tamano;
	public:
		Archivo();
		float CalculaTiempo();
		void Muestrainf();		
};

Transmision::Transmision(){
cout<<"Tipo de transmision:";
cin>>Tipo;
};

Disposito::Dispositivo(){
	cout<<"Nombre de dispositivo:";
	cin>>Nombred;
	cout<<"Ancho de banda:";
	cin>>anchodeB;
};
Dispositivo::MuestraDatos(){
	cout<<"Tipo de archivo:"<<Tipo<<endl;
	cout<<"Nombre de dispositivo"<<Nombred<<endl;
	cout<<"Ancho de banda: "<<anchodeB<<endl;
}

Archivo::Archivo(){
    cout<<"Nombre de archivo:";
	cin>>Nombrea;	
	cout<<"Tamaño del archivo:";
	cin>>Tamano;
};

Archivo::CalculaTiempo(float T){
	T=Tamano/anchodeB;	
}

Archivo::Muestrainf(){
	cout<<"Nombre de archivo: "<<Nombrea<<endl;
	cout<<"Tamaño del archivo: "<<Tamano<<endl;
	cout<<"Tiempo de transferencia: "<<T<<endl;
	
}

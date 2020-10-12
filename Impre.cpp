#include"Carnet.cpp"
#include<iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,grado,seccion;
	int telefono;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombre: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Grado: ";
	cin>>grado;
	cout<<"Ingrese Seccion: ";
	cin>>seccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	
	Carnet car = Carnet(nombres,apellidos,grado,seccion,telefono,nit);
	car.mostrar();
	
	cout<<"------------Modificar------------"<<endl;
	cout<<"Ingrese Nit: "<<endl;
	cin>>nit;
	cout<<"Ingrese Nombre: "<<endl;
	cin>>nombres;
	cout<<"Ingrese Apellidos: "<<endl;
	cin>>apellidos;
	cout<<"Ingrese Grado: "<<endl;
	cin>>grado;
	cout<<"Ingrese Seccion: "<<endl;
	cin>>seccion;
	cout<<"Ingrese Telefono: "<<endl;
	cin>>telefono;
	cout<<" "<<endl;
	cout<<"------------Mostrar------------"<<endl;
	car.setNit(nit);
	car.setNombre(nombres);
	car.setApellidos(apellidos);
	car.setGrado(grado);
	car.setSeccion(seccion);
	car.setTelefono(telefono);
	
	cout<<"Nit: "<<car.getNit()<<endl;
	cout<<"Nombre: "<<car.getNombre()<<endl;
	cout<<"Apellidos: "<<car.getApellido()<<endl;
	cout<<"Grado: "<<car.getGrado()<<endl;
	cout<<"Seccion: "<<car.getSeccion()<<endl;
	cout<<"Telefono: "<<car.getTelefono()<<endl;
}

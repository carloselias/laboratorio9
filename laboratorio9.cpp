#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;
stack<string> pila;
queue<string> cola;
string t1;
int opc;
void ej1();
void ej2();
void ej3();
void ej4();
int main() {
    do
	{
		system ("cls");
        cout<<"1) agregar una tarea" << endl<<"2) completar la ultima tarea (consultar y eliminar)"<<endl<<"3) atender la tarea mas antigua (consultar y eliminar)"<<endl<<"4) mostrar todas las tareas"<<endl<<"0) salir"<< endl<<"> ";
        cin>>opc;
        cin.ignore();
        switch (opc) 
		{
            case 1:
                ej1();
                break;
            case 2:
                ej2();
                break;
            case 3:
                ej3();
                break;
            case 4:
                ej4();
                break;
            case 0:
                cout<< "adios";
                break;
            default: 
			cout << "opcion no valida"; 
			break;
        }
    } 
	while (opc !=0);
    return 0;
}
void ej1() {
	cout << "agregar una tarea"<<endl<<"> ";
    getline(cin, t1);
    pila.push(t1);
    cola.push(t1);
    cout << "tarea agregada en pila: " << pila.top() << endl;
    cout << "tarea agregada en cola: " << cola.back() << endl;
    system ("pause");
}
void ej2() {
    if (!pila.empty()) 
	{
        cout<<"completando la ultima tarea en pila (consultando y eliminando):"<<endl<<"> "<<pila.top()<<endl;
        pila.pop();
    } 
	else
    cout<<"no hay ninguna tarea"<<endl;
    system ("pause");
}
void ej3() {
    if (!cola.empty()) 
	{
        cout<<"atendendiendo la tarea mas antigua en cola (consultando y eliminando):"<<endl<<"> "<<cola.front()<<endl;
        cola.pop();
    }
	else 
    cout<<"no hay ninguna tarea"<<endl;
    system ("pause");
}
void ej4() {
    cout<<"todas las tareas"<<endl;
    cout<<"pila:"<<endl;
    while (!pila.empty()) 
	{
        cout<<pila.top()<<endl;
        pila.pop();
    }
    cout<<"cola:"<<endl;
    while (!cola.empty()) 
	{
        cout<<cola.front()<<endl;
        cola.pop();
    }
    system ("pause");
}
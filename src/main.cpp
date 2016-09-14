/*
    Nombre: Gabriel Filtzer Gorbach

*/


#include "Cola.h"
#include "Nodo.h"
using namespace std; 

int main()
{
    Cola c=Cola();
  int opcion, Dato;
  do{
    cout << "1. Encolar" <<endl;
    cout << "2. Desencolar" <<endl;
    cout << "3. Mostrar Cola" <<endl;
    cout << "4. Verificar Cola Vacia" <<endl;
    cout << "5. Vaciar Cola" <<endl;
    cout << "0. Salir del Programa..." <<endl;
    cin >> opcion;
        switch (opcion)
        {
        case 1:
        cout << "Ingrese el dato: ";
        cin>>Dato;
        c.Encolar(Dato);
            break;
        case 2:
        c.Desencolar();
        cout << "El dato se ha desencolado.";
            break;
        case 3:
        c.Show();
            break;
        case 4:
        if((c.ColaVacia())==true)
            cout<<"La cola esta vacia."<<endl;
          else
        cout<<"La cola no esta vacia."<<endl;
            break;
        case 5:
        c.VaciarCola();
            break;
        case 0:
            break;
        default:
            cout << "Opcion incorrecta." << endl;
        }
    } while (opcion != 0);
    return 0;
}

/*
  Nombre: Gabriel Filtzer Gorbach

*/


#include "Cola.h"
#include "Nodo.h"

Cola::Cola()
{
  this->H=NULL;
  this->T=NULL;
}

void Cola::Encolar(int Dato)
{
  Nodo* encolador=new Nodo(Dato);
    if(ColaVacia()==true){
      H=encolador;
    {
      else{
        T->setSig();
      }
  T=encolador;
  encolador->setSig(H);
}

int Cola::Desencolar()
{
    if (ColaVacia()==true)
  {
    cout << "La cola esta vacia." << endl;
    return 0;
  }
  int Dato = H->getDato();
  if (H == T)
  {
    H == NULL;
    T == NULL;
  }
  else
  {
    H=H->getSig();
    t->setSig(h);
  }
  return Dato; 
}

void Cola::Show()
{
  if (ColaVacia()==true)
  {
    cout << "La cola esta vacia." << endl;
    return 0;
  }
  Nodo* show = this->H;
	  while(show!=NULL)
	  {
		  cout<<show->getDato()<<std::endl; 
		  show=show->getSig();
	  }
	  return NULL;
}

bool Cola::ColaVacia()
{
   if(this->H==NULL && this->T == NULL)
    return true;
  return false;
}

void Cola::VaciarCola()
{
  if (ColaVacia()==true) 
        {
    		return NULL; 
        }
    this->H = NULL;
  this->T = NULL;
}

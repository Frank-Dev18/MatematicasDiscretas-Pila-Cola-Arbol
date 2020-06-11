//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream>
#include <cstdlib>

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
    : TForm(Owner)
{

}
//---------------------------------------------------------------------------
struct nodo{
    int nro;
    struct nodo *sgte;
};

typedef nodo *ptrPila;
//---------------------------------------------------------------------------
ptrPila p = NULL;  // creando pila
    int dato;
    int op;
    int x ; // numero que devuelve la funcon pop
/*                        Apilar elemento
------------------------------------------------------------------------*/
void push( ptrPila &p, int valor )
{
     ptrPila aux;
     aux = new(struct nodo);  // apuntamos al nuevo nodo creado
     aux->nro = valor;

     aux->sgte = p ;
     p = aux ;
}
void __fastcall TForm2::Button1Click(TObject *Sender)
{    int a = StrToInt(Edit1->Text);
         push(p, a);
         ptrPila aux;
         aux = p;     // apunta al inicio de la lista
         Memo1->Clear();
         while( aux !=NULL )
         {
            Memo1->Text += aux->nro;
            Memo1->Text += "\r\n";
            aux = aux->sgte;
         }
}
//---------------------------------------------------------------------------
/*                     Muestra elementos de la pila
------------------------------------------------------------------------*/
void __fastcall TForm2::load(TObject *Sender)
{
     Memo1->Text = "Pila de numeros!";
     Memo2->Text = "Cola de numeros!";
     Memo3->Text = "Arbol de numeros!";
     Memo4->Text = "Orden de numeros!";
}
//---------------------------------------------------------------------------
//                 Usar tecla Enter para añadir mas rapido
//---------------------------------------------------------------------------

void __fastcall TForm2::ok(TObject *Sender, System::WideChar &Key)
{
     if (Key == vkReturn)
     {
        int a = StrToInt(Edit1->Text);
         push(p, a);
         ptrPila aux;
         aux = p;     // apunta al inicio de la lista
         Memo1->Clear();
         while( aux !=NULL )
         {
            Memo1->Text += aux->nro;
            Memo1->Text += "\r\n";
            aux = aux->sgte;
         }
     }
}
//---------------------------------------------------------------------------
/*                Desapilar elemento(devuelve elemento)
------------------------------------------------------------------------*/
int pop( ptrPila &p )
{
     int num ;
     ptrPila aux;

     aux = p ;
     num = aux->nro;   // asignamos el primer vamor de la pila

     p = aux->sgte ;
     delete(aux);

     return num;
}
void __fastcall TForm2::Button4Click(TObject *Sender)
{
     x = pop( p );
     String a = IntToStr(x);
     ShowMessage("El numero " + a + " a sido desapilado");
     ptrPila aux;
     aux = p;     // apunta al inicio de la lista
     Memo1->Clear();
     while( aux !=NULL )
     {
         Memo1->Text += aux->nro;
         Memo1->Text += "\r\n";
         aux = aux->sgte;
     }

}
//---------------------------------------------------------------------------
void destruir_pila( ptrPila &p)
{
     ptrPila aux;

     while( p != NULL)
     {
           aux = p;
           p = aux->sgte;
           delete(aux);
     }
}
void __fastcall TForm2::Button2Click(TObject *Sender)
{
     destruir_pila( p );
     ShowMessage("Pila destruida");
     ptrPila aux;
     aux = p;     // apunta al inicio de la lista
     Memo1->Clear();
     while( aux !=NULL )
     {
         Memo1->Text += aux->nro;
         Memo1->Text += "\r\n";
         aux = aux->sgte;
     }
}
struct nodos
{
    int nros;
    struct nodos *sgtes;
};
/*                      Estructura de la cola
------------------------------------------------------------------------*/
struct cola
{
    nodos *delante;
    nodos *atras;
};
   struct cola q {NULL, NULL};

/*                        Encolar elemento
------------------------------------------------------------------------*/
void encolar( struct cola &q, int valor )
{
     struct nodos *aux = new(struct nodos);
     aux->nros = valor;
     aux->sgtes = NULL;
     if( q.delante == NULL)
         q.delante = aux;   // encola el primero elemento
     else
         (q.atras)->sgtes = aux;
     q.atras = aux;        // puntero que siempre apunta al ultimo elemento
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{
     //struct cola q;

     dato = StrToInt(Edit2->Text);
     encolar( q, dato );
     struct nodos *aux;
     aux = q.delante;
     Memo2->Clear();
     while( aux != NULL )
     {
            //cout<<"   "<< aux->nro ;
            Memo2->Text += aux->nros;
            Memo2->Text += "\t";
            aux = aux->sgtes;
     }
}
//---------------------------------------------------------------------------
int desencolar( struct cola &q )
{
     int num;
     struct nodos *aux;
     aux = q.delante;      // aux apunta al inicio de la cola
     num = aux->nros;
     q.delante = (q.delante)->sgtes ;
     delete(aux);
     return num;

}
void __fastcall TForm2::Button5Click(TObject *Sender)
{
     desencolar(q);
     struct nodos *aux;
     aux = q.delante;
     Memo2->Clear();
     while( aux != NULL )
     {
            Memo2->Text += aux->nros;
            Memo2->Text += "\t";
            aux = aux->sgtes;
     }
}
void vaciaCola( struct cola &q)
{
     struct nodos *aux;

     while( q.delante != NULL)
     {
            aux = q.delante;
            q.delante = aux->sgtes;
            delete(aux);
     }
     q.delante = NULL;
     q.atras   = NULL;

}
void __fastcall TForm2::Button6Click(TObject *Sender)
{
     //struct cola q;
     vaciaCola( q );
     Memo2->Clear();
}
//---------------------------------------------------------------------------
struct nodo1{
     int nro;
     struct nodo1 *izq, *der;
};
typedef struct nodo1 *ABB;
/* es un puntero de tipo nodo que hemos llamado ABB, que ulitizaremos
   para mayor facilidad de creacion de variables */
ABB crearNodo(int x)
{
     ABB nuevoNodo = new(struct nodo1);
     nuevoNodo->nro = x;
     nuevoNodo->izq = NULL;
     nuevoNodo->der = NULL;

     return nuevoNodo;
}
void insertar(ABB &arbol, int x)
{
     if(arbol==NULL)
     {
           arbol = crearNodo(x);
     }
     else if(x < arbol->nro)
          insertar(arbol->izq, x);
     else if(x > arbol->nro)
          insertar(arbol->der, x);
}
String a, b, c, d, f, g, h, j;
ABB arbol = NULL;   // creado Arbol

    int n, z, l;  // numero de nodos del arbol
    int y; // elemento a insertar en cada nodo
void verArbol(ABB arbol, int n)
{
     if(arbol==NULL)
          return;
     verArbol(arbol->der, n+1);
     for(int i=0; i<n; i++)
     a += "   ";
     a += IntToStr(arbol->nro) + "\r\n";
     verArbol(arbol->izq, n+1);
}

void preOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          b += IntToStr(arbol->nro) + " ";
          preOrden(arbol->izq);
          preOrden(arbol->der);
     }
}
void enOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          enOrden(arbol->izq);
          c = IntToStr(arbol->nro) + " ";
          enOrden(arbol->der);
     }
}
void postOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          postOrden(arbol->izq);
          postOrden(arbol->der);
          d = IntToStr(arbol->nro) + " ";
     }
}

void __fastcall TForm2::Button7Click(TObject *Sender)
{
     verArbol(arbol, 0);
     Memo3->Text = a;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button9Click(TObject *Sender)
{
     n = StrToInt(Edit3->Text);
     int cont = StrToInt(Label4->Caption);
     if(cont == n+1)
     {
        ShowMessage("Se lleno!");
     }
     else
     {
         cont++;
         Label4->Caption = cont;
     }
     z = StrToInt(Edit4->Text);
     insertar( arbol, z);

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button8Click(TObject *Sender)
{
     preOrden(arbol);
     postOrden(arbol);
     enOrden(arbol);
     Memo4->Clear();
     Memo4->Text += "PreOrden " + b + "\r\n";
     Memo4->Text += "enOrden " + c + "\r\n";
     Memo4->Text += "PostOrden " + d + "\r\n";
}
//---------------------------------------------------------------------------


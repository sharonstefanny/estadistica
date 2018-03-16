#include <iostream>
using namespace std;

int main (){
    int serie;
    char opcion;
    
    opcion='c';
    while (opcion=='c'){
    
    
   cout<<"la seria que decea 100,200,300: ";
   cin >>serie; 
   
   switch (serie){
       
       case 100:
        cout<<"la serie 100 es un televisor de 42 pulgadas\n tiene control remoto"<<endl;
           break;
    
    case 200:
           cout<<"la serie 200 es un televisor de 42 pulgadas\n tiene control remoto\n utiliza tdt"<<endl;
           break;
    
           case 300:
           cout<<"la serie 100 es un televisor de 42 pulgadas\n tiene control remoto\n utiliza tdt \n contiene smart tv\n viene con una memoria de 64 GB"<<endl;
           break;
           
           default:
               cout<<" el numero no valido";
               break;
               
   }
               
               cout<<"ingrese c para continuar";
               cin>>opcion;
    
   
   
    }
    
   }
   

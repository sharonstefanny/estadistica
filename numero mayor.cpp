#include<iostream>
using namespace std;
int main(){
    
    int numero1,numero2,numero3;
    cout<<"ingrese un numero";
    cin>> numero1;
    
    cout<<"ingrese otro numero";
    cin>>numero2;
    
    cout<<"ingrese otro numero";
    cin>>numero3;
    
       if (numero1>=numero2)&&(numero1>=numero3){
           cout<<"el numero mayor es"<<numero3<<endl;
       }
       else if (numero1>=numero2)=<numero3){
           cout<<"el numero mayor es"<<numero2<<endl;
           
       }
       
       else if (numero1=<nuemero2=<numero3){
           cout<<"el numero mayor es"<<numero1<<endl;
       }
       
       else {
           cout<<"son iguales "<<endl;
       }
           
} 
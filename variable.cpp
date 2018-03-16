#include<iostream>
using namespace std;

void imprimehola();
void imprimehola2();

int main(){
    cout<<"hola mundo desde el main \n";
    imprimehola ();
    imprimehola2();
}

void imprimehola(){
    cout<<"hola mundo desde funcion \n";
}
void imprimehola2 () {
    cout<<"hola desde funcion 2 \n";
    imprimehola();
    }

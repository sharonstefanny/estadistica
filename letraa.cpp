#include <iostream>
using namespace std;

int main (){
    char letra;
    
    cout<<"ingrese A,B,C,D o E: ";
    cin>>letra;
   switch (letra) {

       case 'a':
            cout<<"letra A minuscula"<<endl;
        case 'A':
            cout<<"la letra ingresada fue A"<<endl;
            break;
            
            case 'b':
            case 'B':
            cout<<"la letra ingresada fue B"<<endl;
            break;
            
            case 'c':
            case 'C':
            cout<<"la letra ingresada fue C"<<endl;
            break;
            
            case 'd':
            case 'D':
            cout<<"la letra ingresada fue D"<<endl;
            break;
            
            case 'e':
            case 'E':
            cout<<"la letra ingresada fue E"<<endl;
            break;
    
            default:
                cout<<"letra no valida "<<endl;
                break;
            
   }
   
}
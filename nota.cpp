#include<iostream>
using namespace std;
int main(){
    
    int nota;
    cout<<"ingrese una nota ";
    cin>>nota;
    
       if ((nota>100) || (nota<0)){
           cout<<"nota no valida";
       }
       else if ((nota>=90) && (nota<=100)){
           cout<<"la tota es E";
           
       }
       
       else if ((nota>=80) && (nota<90)){
           cout<<" la nota es S";
       }
       
       else if ((nota>=70) && (nota<80)){
           cout<<"la nota es B";
       }
       
       else if ((nota>=60) && (nota<70)){
           cout<<"la nota es A";
       }
       
       else if ((nota>=0) && (nota<60)){
           cout<<"la nota es D";
       }
           
} 
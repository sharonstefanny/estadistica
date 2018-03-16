#include<iostream>
using namespace std;

void mifuncion(int &a){
    cout<<a<<endl;
    a=5;
    cout<<a<<endl;
}
int main(){
    int a;
    a=3;
    mifuncion(a);
    cout<<a<<endl;
}
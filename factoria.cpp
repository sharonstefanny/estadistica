#include <iostream>
using namespace std;

int factorial(int a){
int i,producto;
producto=1;
for(i=a;i>1;i--){
    producto*=i;
}
return producto;
}
int factorialRecursivo(int a){
    if(a==2) return 2;
    return a*factorialRecursivo (a-1);
}
int main(){
    int n=5;
    cout<<n<<"!= "<<factorial(n)<<endl;
    cout<<n<<"!= "<<factorialRecursivo(n)<<endl;
}   
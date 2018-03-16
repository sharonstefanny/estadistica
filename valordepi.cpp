#include <iostream>
using namespace std;

int main(){
int r,i,n;
float suma,resta;
suma=0;
resta=0;
n=1;
for(i=1;i<100000;i++){
    r=i%2;
    if (r==0){
        resta=resta+(4.0/n);
    }
    else{
        suma=suma+(4.0/n);
    }
    n=n+2;
}
suma=suma-resta;
cout.precision(10);
cout<<"el valor de pi es: "<<endl;
cout<<suma<<endl;
}

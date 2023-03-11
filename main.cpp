#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int numero;
    do{
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;

    }while((numero<1) || (numero>10));

    for(int i=1; i<=10; i++){
        cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
    }
    return 0;
}






#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<< "Ingresa un numero: ";
    cin>> n;
    for (i = 1; i <= 10; i++){
        cout<< n <<" x "<<i<< " = "<<n*i <<endl;
    }
    return 0;
}













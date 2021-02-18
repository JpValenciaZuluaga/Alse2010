#include <iostream>
using namespace std;

int mayor_ref(int &a,int &b){
	int c = a < b ? c = b : c= a ;
	b= 5;
return c;
}

int mayor_valor(int a, int b){

    int c = a < b ? c = b : c= a ;
	b = 5;
return c;
}

int main ( int argc, char** argv){


int m, n;
cin >> m >> n ;
int j =mayor_valor(m,n);
cout << m << " uno " << n << " otro  " << j << " mayor "<< endl;

int h = mayor_ref(m,n);
cout << "m= " << m << " y n= " << n << " el mayor es: "<< h<<  endl;
return 0;
} 

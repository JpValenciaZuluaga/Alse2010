#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int a = 8;
	int b  ;
	float c = 0.;
	float d ;
	
	
	cout << "Helow world! " << a << " "<< b <<"  "<< c <<"  " << d << endl;
	cout << "Cantidad de parametros:  "<< argc << endl;
	for (a = 0; a < argc;a= a + 1){
		
		cout << "Argumento: " << a <<": "<< argv[a]<< endl;
	}
	return 0;
} 

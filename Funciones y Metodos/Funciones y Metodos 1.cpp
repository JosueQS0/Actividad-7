#include <iostream>
using namespace std;

//80 lineas de codigo en 10 lugares distintos =800  lineas de codigo
//de las cuales 80 son iguales
//crean una funcion o un metodo = y lo mandan a llmar 10 veces =80
int suma(int num1, int num2){
	int resultado=0;
	resultado=num1+num2;
	return resultado;
}

int resta(int num1, int num2){
	int resultado=0;
	resultado=num1-num2;
	return resultado;
}
	main(){
		
		cout<<suma(10,20)<<endl;
		cout<<resta(50,70)<<endl;
	
	system("pause");
}

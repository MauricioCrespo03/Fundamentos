// ArearadioyPerimetro.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;
int main (){
	float perimetro,area,radio, p ;
	p=3.14;
	cout <<"introduzca al radio "<<endl;
	cin >> radio;
	perimetro= 2*p*radio;
	cout <<"El perimetro es: " <<endl;
	cout << perimetro <<endl;
	area= p*(radio*radio);
	cout <<"El area es: " <<endl;
	cout<< area <<endl; 
	getch();
	return 0;
}


#include <iostream>
#include "figura.h"
#include "triangulo.h"
#include "rectangulo.h"
using namespace std ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Triangulo*  objeto1= new Triangulo(3,4,5,6);
	
	cout << "Numero de lados : " << objeto1 -> getlados()<<endl ;
	cout << "Area del triangulo : " << objeto1 ->areaTriangulo()<<endl;
	
	cout << "Perimetro de un triangulo : " << objeto1 ->perimetroTriangulo()<< endl ;
	
	Rectangulo* objeto2= new Rectangulo(4,8,6);
	cout << "Numero de lados : " << objeto2 ->getlados() << endl;
	cout << "Area del Rectangulo : " << objeto2 ->areaRectangulo() << endl;
	cout << "Perimetro de un rectangulo : " << objeto2 ->perimetroRectangulo()<< endl ;
	return 0;
}

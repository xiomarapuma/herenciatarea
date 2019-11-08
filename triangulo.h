#include <iostream>
#include <math.h>

using namespace std;
class Triangulo: public Figura{
	private:
		float lado_1,lado_2,lado_3;
	public:
		Triangulo(int lados,float lado_1,float lado_2 ,float lado_3):Figura(lados){
			this ->lado_1=lado_1;
			this ->lado_2=lado_2;
			this ->lado_3=lado_3;
		}
		float areaTriangulo(){
			float p=(lado_1+lado_2+lado_3)/2;
			float area= sqrt(p*(p-lado_1)*(p-lado_2)*(p-lado_3));
			return area;
		}
		float perimetroTriangulo(){
			float perimetro= lado_1+lado_2+lado_3;
			return perimetro;
		}
};


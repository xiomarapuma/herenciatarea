#include <iostream>
#include <math.h>

using namespace std;

class Rectangulo:public Figura{
	private:
		float altura,base;
	public:
		Rectangulo (int lados, float base, float altura):Figura(lados){
			this ->base=base;
			this ->altura=altura;
		}
		float areaRectangulo(){
			float area=(base*altura);
			return area;
		}
		float perimetroRectangulo(){
			float perimetro= (2*base)+(2*altura);
			return perimetro ;
		}
};
		









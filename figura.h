#include <iostream>
using namespace std ;

class Figura{
	private: 	
		int lados;
	public:
		Figura(int lados){
			this ->lados=lados;
		}
		int getlados(){
			return lados;
		}
};

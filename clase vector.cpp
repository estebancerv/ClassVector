#include <iostream>
#include <math.h>

using namespace std;

class Punto{
	private:
		int x,y;
	
	public:
		Punto(int corx=0,int cory=0){
			x=corx;
			y=cory;
		}
		void printPunto(){
			cout << "(" << x << "," << y << ")" << endl; 
		}
		int get_x(){
			return x;
		}
		int get_y(){
			return y;
		}
};

class Vector{
	private:
		Punto P0,P1;
	public:
		Vector(Punto Pi, Punto Pf){
			P0=Pi;
			P1=Pf;
		}
		void printVector(){
			cout << "Start= (" << P0.get_x() << "," << P0.get_y() << ") End= (" << P1.get_x() << "," << P1.get_y() << ")" << endl;
		}
		float distancia(){
			float dis;
			dis=sqrt(pow((P1.get_x()-P0.get_x()),2)+pow((P1.get_y()-P0.get_y()),2));
			return dis;
		}
};

int main() {
	Punto Pi(3,3);
	Punto Pf(6,7);
	Vector MiVector(Pi,Pf);
	MiVector.printVector();
	cout << "Distancia = " << MiVector.distancia();
	return 0;
}

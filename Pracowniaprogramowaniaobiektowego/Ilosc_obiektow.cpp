#include <iostream>
using namespace std;

class Animal{
	public:
		static int s_count;
		
		Animal(){
			s_count=s_count+1;
		}
		~Animal(){
			s_count=s_count-1;
		}-
};
int Animal::s_count= 0;
int main(){
	setlocale(LC_CTYPE,"polish");
	Animal *Mikolaj= new Animal();
	delete Mikolaj;
	cout<<"Iloœæ obiektów: "<<Animal::s_count;
	return 0;
}

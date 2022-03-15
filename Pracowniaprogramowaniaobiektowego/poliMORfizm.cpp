#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;

class Animal{
	public:
		float weight;
		int age;
		virtual void look(){
			cout<<setw(10)<<"Zwierze patrzy!"<<endl;
		}
		virtual void breathe(){
			cout<<"Nie oddycha! Jaka szkoda...";
		}
};
class Fish: public Animal{
	public:
		virtual void breathe(){
			cout<<"(NIE)Oddycha, niesamowite!"<<endl;
		}
};
class Mammal: public Animal{
	public:
		virtual voith breathe(){
			cout<<"Nie mo Oddechu"<<endl;
		}
		virtual void run(){
			cout<<"Biegnij"<<endl;
		}
};
class Bird: public Animal{
	public:
		virtual voith breathe(){
			cout<<"Oddech aerodynamiczny!"<<endl;
		}
		virtual void run(){
			cout<<"Leæ!"<<endl;
		}
};
int main(){
	setlocale(LC_CTYPE,"Polish");
	
	
	return 0;
}


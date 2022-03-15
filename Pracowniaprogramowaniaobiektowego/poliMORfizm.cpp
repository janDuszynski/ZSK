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
		 void breathe(){
			cout<<"(NIE)Oddycha, niesamowite!"<<endl;
		}
};
class Mammal: public Animal{
	public:
		 void breathe(){
			cout<<"Nie mo Oddechu"<<endl;
		}
		 void run(){
			cout<<"Biegnij"<<endl;
		}
};
class Bird: public Animal{
	public:
		 void breathe(){
			cout<<"Oddech aerodynamiczny!"<<endl;
		}
		 void run(){
			cout<<"Leæ!"<<endl;
		}
};
int main(){
	setlocale(LC_CTYPE,"Polish");
	Mammal zwierze;
	Animal *wsk = &zwierze;
	wsk->breathe();
	
	return 0;
}

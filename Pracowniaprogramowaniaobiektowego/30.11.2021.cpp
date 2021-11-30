#include <iostream>

using namespace std;

class Worker{
	private:
		string surname{"Nowak"};
		unsigned short int yearOfBirthday{1951};
		int earnings{2500};
		string division{"Zabawki"};
		unsigned short int tax;
		public:
			void ZarobekNetto();
			void zmienZarobek();
			void podatek();
			
			
	};
	

	void Worker::podatek(){
		cin>>tax;
		tax=tax*0,01;
	}
	void Worker::ZarobekNetto(){
		cout<<"Zarobek netto:"<<earnings-earnings*tax<<endl;
	}
int main(){
	setlocale(LC_CTYPE,"polish");
	
	return 0;
}

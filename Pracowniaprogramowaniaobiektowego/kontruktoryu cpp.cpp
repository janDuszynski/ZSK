#include <iostream>
using namespace std;

struct Date{
	int dd, mm, yyyy;
};

class Car{
	public:
		int id;
		string brand, model, color;
		unsigned short int power;
		float price;
		Date dateOfProduction;
		
		void getData();

		Car(int, string, unsigned short int, float, Date);
}
Car::Car(int pId, string pBrand, unsigned short int, float, Date){
	id=pId;
	id=pBrand;
	id=pModel;
	id=pColor;
	id=pPower;
	id=pPrice;
	id=pDateofProduction;
}
		

void Car::getData(){
	cout<<"\n Id: "<<id<<"\n Marka: "<<brand<<"\n Model: "<<model<<"\nData produkcji:"
	<<dateOfProduction.yyyy<<"\n Kolor: "<<color<<"\n Moc:"<<power<<"km"<<"Cena: "<<price<<"PLN";
	}

int main(){
	setlocale(LC_CTYPE, "Polish");
	Car jaguar(1, "x", 1, 1, {1,2,3});
	jaguar.getData();
	return 0;
}

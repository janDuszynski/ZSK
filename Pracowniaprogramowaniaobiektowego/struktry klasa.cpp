#include <iostream>
using namespace std;

struct Date{
	unsigned short int dd, mm, yyyy;

};
class Worker{
	public:
		unsigned int id {};
		string name {}, surname{};
		Date dateBirthday {};
		
		void showAllData();
		void setDate(unsigned int id);
};

void Worker::showAllData(){
	cout<<"dane pracownika:\n Identyfikator pracownika: "<<id<<"Imiê i nazwisko"<<name<<" "<<surname<<"\n Data urodzenia:"<<dateBirthday.dd;
};
void Worker::setDate(unsigned int id, string name, string surname, Date dateBirthday){
		Worker::id=id;
		Worker::name=name;
		Worker::surname=surname;
		Worker::dateBirthday=dateBirthday;
	}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	Worker Kowalski;
	bombel.SetDate(1, "Marek" "Nowak", {29,10,1966});
	kowalski.setDate(5);
	kowalski.showAllDate();
	return 0;
}

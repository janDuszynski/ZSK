#include <iostream>
using namespace std;
struct Date{
	unsigned short int dd,mm, rrrr;
};

struct Student{
	string name, middlename, surname;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeEDB[5];
};
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Student nowak{"Marek, Grzegorz, Nowak, 100, {11,10,1966}, {5,4,6,5,2} "};
	
	cout<<"Imiê i nazwisko: "<<nowak.name<<""<<nowak.middlename<<" "<<nowak.surname<<"\nIdentyfikator"<<nowak.id<<"\nDataurodzenia"<<nowak.dateBirthday.dd;
	return 0;
}

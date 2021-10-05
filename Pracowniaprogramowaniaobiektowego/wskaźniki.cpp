#include <iostream>
using namespace std;

class Worker{
	public:
		string name, surname;
		void getData();
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Worker::getData(){
	cout<<"Imiê i nazwisko: "<<name<< " "<<surname;
}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	Worker kowalski;
	Worker *p_kowalski;
	p_kowalski = &kowalski;
	cout<<"Adres obiektu kowalski: "<<p_kowalski<<endl;
	p_kowalski->name="Jan";
	p_kowalski->surname="Kowalski";
	return 0;
}

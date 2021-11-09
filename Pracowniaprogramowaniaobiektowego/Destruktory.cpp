#include <iostream>

using namespace std;

class Worker{
	public:
		string name, surname;
		
		Worker();
		Worker(string pName, string pSurname);
		
		~Worker(){
			cout<<"Destruktor";
		}
		
		void getData();
		void createObjectWorker();
};

Worker::Worker(){
	cout<<"Konstruktor domyœlny";
}

Worker::Worker(string pName, string pSurname):
	name {pName},
	surname{pSurname}
{
		cout<<"konstruktor parametryczny";
}
void Worker::getData(){
		cout<<"Imiê:"<<name<<"\nNazwisko:"<<surname<<endl;
}
void createObjectWorker(){
	Worker worker;
	Worker().getData();
	cout<<"Wywo³anie funkcji krijejt obd¿ekt worker";	
}
int main(){
	setlocale(LC_CTYPE,"polish");
	Worker nowak= Worker("Janusz", "Nowak");
	Worker *p_kowalski=new Worker("Krystian", "Kowalski");
	p_kowalski->getData();
	delete p_kowalski;
	return 0;
}

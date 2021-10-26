#include <iostream>

using namespace std;

class Worker{
	public:
		int id{8};
		string name {"Katarzyna"};
		string surname {"Katarzyna"};
		
		Worker();
		Worker(int pId, string pName, string pSurname);
		
		void getData();
};

Worker::Worker(){
	id=13;
	name="KATARZYNA";
	surname="NOWAK";
	cout<<"konstruktor domyœlny.";
}
Worker::Worker(int pId, string pName, string pSurname){
	id=pId;
	name=pName;
	surname=pSurname;
}

void Worker::getData(){
	cout<<"Id: "<<id<<"\nImiê: "<<name<<"\nNazwisko"<<surname<<endl;
}
int main(){
	setlocale (LC_CTYPE, "polish");
	Worker nowak;
	nowak.getData();
	Worker nowak1= Worker();
	return 0;
}

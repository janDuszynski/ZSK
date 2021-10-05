#include <iostream>
using namespace std;

class school{
	public:
		static string s_school; 
		static string s_jobPosition;
		
		string name; //zmienne instancyjne
		string surname;
		
		void getDate(); //prorotypy
		void setNameSurname(string name, string surname);
		
		static string s_getSchool();
		static void s_setSchool;
};

	string school::s_school="ZSK";
	string school::s_jobPosition="student";
	
	void school::getDate(){
		cout<<"Imiê i nazwisko"<<name<<surname;
	}
	void school::setNameSurname(string name, string pSurname){
		school::name=name;
		surname=pSurname;
	}
	
	string School::s_getSchool(){
		return s_school;
	}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	cout<<school::s_school;
	cout<<school::s_jobPosition;
	return 0;
	
	school kowal;
	kowal.setNameSurname("Jerzy", "Sabiniewicz");
	kowal.getDate();
	school::s_jobPosition="nauczyciel";
	cout<<"\nStanowisko:"<<school::s_jobPosition;
	kowal.s_jobPosition="ZJUJU";
	cout<<kowal.s_jobPosition;
	cout<<school::s_jobPosition;
	cout<<school::s_getSchool();
	School::s_setSchool("ZSK");
	cout<<School::s_getSchool();
	return 0;
}

#include <iostream>
#include <fstream>


using namespace std;

int main(){
	setlocale(LC_CTYPE, "polish");
	ofstream File;
	File.open("C:\\Users\\student\\Desktop\\Pliki\\plik.txt", ios::app);
	
	if(File.is_open()){
		cout<<"Podaj dane do zapisu w pliku\n";
		string text;
		cin >> text;
		getline(cin, text);
		File << text;
		File.close();
	}
	return 0;	
}

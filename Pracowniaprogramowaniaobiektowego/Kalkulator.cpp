#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

class Calculator{
	private:
		unsigned short int menuValue;
		double num1, num2;
	public:
		Calculator(){};
		~Calculator(){
			printf("Zako�czono program");
		}
		//Metody
		void menu();
		void getData();
		void enterNumbers();
		void showResult();
};
//Wy�wieltanie menu
void Calculator::menu(){
	cout<<"Enter the number:"<<"\n1) Addition"<<"\n2) Substraction"
	<<"\n3) Multiplication"<<"\n4) Division"<<"\n5) Power"<<"\n6) Exit"<<endl;
	cin>>menuValue;
	//sprawdzanie, czy wprowadzona warto�� jest cyfr� 1<=x<=6
	while(cin.fail()){
		cin.clear();
		cin.ignore(1000, '\n');
		printf("wprowad� poprawn� warto��.\n");
		cin>>menuValue;
	}
	if(menuValue==6) exit(0);
}
//Wprowadzanie liczb
void Calculator::enterNumbers(){
	cout<<"Number 1: ";
	cin>>num1;
	cout<<"Number 2: ";
	cin>>num2;
}
//Wy�wietlanie wyniku + sprawdzanie czy wprowadzona warto�� jest !=0
void Calculator::showResult(){
	if(num2==0 && menuValue==4){
		cout<<"Nie mo�na dzieli� przez 0...";
		system("exit");
	}
	switch(menuValue){
		case 1: cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl; break;
		case 2: cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl; break;
		case 3: cout<<num1<<"x"<<num2<<"="<<num1*num2<<endl; break;
		case 4: cout<<num1<<":"<<num2<<"="<<num1/num2<<endl; break;
		case 5: cout<<num1<<"^"<<num2<<"="<<pow(num1, num2)<<endl; break;
	}
}

int main(){
	setlocale(LC_CTYPE,"polish");
	Calculator user1;
	for(int i=2;i<=10;i++){
		user1.menu();
		user1.enterNumbers();
		user1.showResult();
		cout<<"\n\n\n"<<endl;
	}
	return 0;
}

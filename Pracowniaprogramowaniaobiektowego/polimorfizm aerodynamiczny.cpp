#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;

class c1{
int a, b, c;
    virtual void f(){
        cout<<"Funkcja!"<<endl;
        }
};
class c2{
int a, b, c;
    virtual void f(){
        cout<<"Funkcja!"<<endl;
        }
};
class c3{
int a, b, c;
    virtual void f1(){
        cout<<"Funkcja!"<<endl;
        }
    virtual void f2(){
        cout<<"Funkcja!"<<endl;
        }
};
int main(){
	setlocale(LC_CTYPE,"Polish");
    c1 *wsk1 = new c1;
    cout<<sizeof(*wsk1)<<endl;

    c2 *wsk2 = new c2;
    cout<<sizeof(*wsk2)<<endl;

      c3 *wsk3 = new c3;
    cout<<sizeof(*wsk3)<<endl;


	return 0;
}

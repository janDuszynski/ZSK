#include <iostream>

using namespace std;

class Rectangle{
private:
    double sideA;
    double sideB;
    string color;
public:
    Rectangle();
    Rectangle(double pSideA, double pSideB);
    void setColor(string color);
    void getData();

};
Rectangle::Rectangle(){
cout<<"Konstruktor domyślny";
setColor("aqua");
}

Rectangle::Rectangle(double pSideA, double pSideB){
cout<<"Konstruktor parametrowy";
sideA=SideA;
sideB=pSideB;
}

void Rectangle::setColor(string pColor){
color=pColor;
}

void Rectange::getData(){
cout<<"Bok a:"<<sideA<<"\nBok b:"<<sideB<<"\nKolor: "<<color<<endl;
}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");

        Rectangle p1;
        p1.getData();
        cout<<endl;

        Rectange p2(2,4);
        p2.getData();
        p2.setColor("Czarny");
        p2.getData();

        p2.
	return 0;
}


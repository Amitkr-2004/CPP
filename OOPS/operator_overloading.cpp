#include<iostream>
using namespace std;
class ComplexNo{
    public:
    int real;
    int imag;
    
    ComplexNo operator +(ComplexNo &c1){
    ComplexNo c3;
    c3.real=c1.real + this->real;
    c3.imag=c1.imag + this->imag;
    return c3;
    }
    
    ComplexNo operator -(ComplexNo &c1){
    ComplexNo c3;
    c3.real=this->real - c1.real;
    c3.imag=this->imag - c1.imag;
    return c3;
    }
};
int main(){
    ComplexNo c1;
    c1.real=12;
    c1.imag=10;

    ComplexNo c2;
    c2.real=6;
    c2.imag=12;

    ComplexNo c3;   
    c3=c1+c2;

    ComplexNo c4;   
    c4=c1-c2;

    cout<<c3.real<<" "<<c3.imag<<endl;
    cout<<c4.real<<" "<<c4.imag<<endl;
}

//Operator not overriden is .,.?,::,sizeof()
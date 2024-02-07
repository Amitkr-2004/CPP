#include<iostream>
using namespace std;
class vehicle{//parent class,base class
    public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;

    void showCompanyName(){
        cout<<companyName<<endl;
    }
    vehicle(){
        cout<<"vehicle call hua \n";
    }
};

class Bike:public vehicle{//child class,derived class
    public:
    int handleSize;
};

class Cars:public vehicle{//child class,derived class
    public:
    int strearSize;
    Cars(){
        cout<<"Constructor call hua \n";
    }
};

class A{
    private://can't be inherited,can't be accessed from outside
        int a_ka_private;
    protected://can be inherited,can't be accessed from outside
        int a_ka_protected;
    public://can be inherited,can be accessed from outside
        int a_ka_public;
};

class B{//(a ka protected,a ka public) as protected
    public:
    int b_ka_public;
};

//multi-level inheritance
class C:public B{//b ka public, (a ka protected,a ka public) as protected
    public:
    int c_ka_public;
};
//multiple Inheritance
class D:public A,public B,public C{//b ka public, (a ka protected,a ka public) as protected
    public:
    int c_ka_public;
};
int main(){
    // Cars honda;
    // honda.tyreSize=200;
    // honda.engineSize=300;
    // honda.strearSize=5;
    // honda.companyName="HONDA";

    // cout<<honda.engineSize<<endl;
    // honda.showCompanyName();

    B b;
    // b.a_ka_public=50;
    // b.b_ka_private=100;
}
#include <iostream>

using namespace std;

class A
{
    public:
        void fun()
        {
            cout<<"Inside A fun"<<endl;
        }
};

class B
{
    public:
        void fun()
        {
            cout<<"Inside B fun"<<endl;
        }
};

int main()
{
    A obj = new B();
    //A obj = new A();
    
    //A obj;
    obj.fun();

    return 0;
}




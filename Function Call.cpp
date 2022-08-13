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
    A *ptr = NULL;
    
    //A obj = new A();
    
    //B obj;
    ptr = new A;
    ptr->fun();

    return 0;
}

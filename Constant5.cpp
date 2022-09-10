#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;    // Constant characteristic

        Demo(int a, int b) : j(b)
        {
            i = a;
        }
        void fun()      //Non-constant function
        {
            cout<<"Inside fun\n";
            i++;        // Allowed
            // j++;     //Not allowed
        }
        // b is a constant input argument
        void gun(int a, const int b) const      // constant function / behaviour
        {
            int x = 10;
            const int y = 20;       // Constant local variable

            cout<<"Inside gun\n";
           // i++;        // Not allowed
            /// j++;     // Not allowed

            x++;        // allowed
           //  y++;        // Not allowed

            a++;    // Allowed
           // b++;        // not allowed
        }
};

int main()
{
   Demo obj1(11,21);
   const Demo obj2(11,21);

    obj1.fun();         //Non-constant obj1 calling non constant member function fun.     
    //obj2.fun();   Constant object obj2 can't call non constant member function fun.

    //Both the above points prove that non constamt object can only call non constant function members of a class.

    
    obj1.gun(10,20);    //Non-constant obj1 calling constant member function gun.
    obj2.gun(10,20);    //Constant obj2 calling constant member function gun.

    //Both the above points prove that constant member function (gun in this case) can be called by any type of object.

    return 0;
}
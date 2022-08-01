/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//////////////////////////////////////////////////////////////////////////////////////
//The below code demonstrates the concept of freind in C++.In 3 cases we can use it
//1.Naked function can be freind of your class
//2.Member function of a class can be a friend.
//3.Whole class can be friend of a class.
//////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

class Hello
{
    public:
        void fun();
};

class Base
{
    public:
        int x;
    
    private:
        int y;
    
    protected:
        int z;
    
    Base()
    {
        this -> x = 11;
        this -> y = 21;
        this -> z = 51;
    }
        
    friend void Hello :: fun();    
};



void Hello :: fun()
{
    Base bobj;
    
    bobj.x++;
    bobj.y++;
    bobj.z++;
    
    cout<<" x : "<<bobj.x<<endl;
    cout<<" y : "<<bobj.y<<endl;
    cout<<" z : "<<bobj.z<<endl;
}


int main()
{
    Hello hobj;
    
    hobj.fun();

    return 0;
}
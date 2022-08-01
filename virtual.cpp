/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
////////////////////////////////////////////////////////////////////////////////////////////////////
//To demonstrate the concepts of the virtual functions,pure virtual functions, abstract class and 
//reference in C++.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

class Base
{
    public:
        int x,y;
        
    // Base(int iNo1,int iNo2)
    // {
    //     this -> x = iNo1;
    //     this -> y = iNo2;
    // }
    
    virtual void fun()
    {
        cout<<"Inside base fun"<<endl;
    }
    
    void gun()
    {
        cout<<"Inside base gun"<<endl;
    }
    
    virtual void mun(int &iNo) = 0;
};

class Derieved : public Base
{
    public:
        int i,j;
    
    Derieved(int iNo1,int iNo2)
    {
        this -> i = iNo1;
        this -> j = iNo2;
        this -> x = iNo1;
        this -> y = iNo2;
    }
    
    void mun(int &iNo)
    {
        cout<<"Inside derieved mun\n";
        iNo++;
        
    }
    
    void fun()
    {
        cout<<"Inside derieved fun"<<endl;
    }
};


int main()
{
    //Base bobj(11,21);
    int iValue = 21;
    Base *bp = NULL;
    Derieved dobj(11,21);
    bp = &dobj;
    
    bp->fun();
    bp->mun(iValue);
    cout<<"value of iValue is : "<<iValue<<endl;//22
    
    cout<<"value of x is : "<<bp->x<<endl;//11
    cout<<"value of i is : "<<dobj.i<<endl;//11
    
    cout<<"value of y is : "<<bp->y<<endl;//21
    cout<<"value of j is : "<<dobj.j<<endl;//21

    return 0;
}
//2. Write a C++ program to demonstrate try, throw and catch statements.

#include<iostream>
#include<cstring>
using namespace std ;
int main ()
{
    double a , b ;
    cout<<"Enter two values for divided : " ;
    cin>>a>>b ;

    try 
    {
        if (b==0) 
            throw 1 ;
        cout <<"Divided of "<<a <<" and "<<b<<" is "<<a/b <<endl ;
    }
    catch (int m)
    {
        cout<<"Invalid denomerator" ;
    }
    catch(...)
    {
        cout<<"Invalid" ;
    }
    return 0 ;
}

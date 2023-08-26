/*3. Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.*/

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
        if (b < 0 )
             throw 'N' ;
        cout <<"Divided of "<<a <<" and "<<b<<" is "<<a/b <<endl ;
    }
    catch (int m)
    {
        cout<<"Invalid denomerator" ;
    }
    catch (char n)
    {
        cout<<"operator not accepted" ;
    }
    catch(...)
    {
        cout<<"Invalid" ;
    }
    return 0 ;
}

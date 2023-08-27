/*6. Write a C++ program to accept area pin code and throw an exception if it does not
contain 6 digits.*/

#include<iostream>
#include<cstring>
using namespace std ;

int main ()
{
    int pin , count=0 ;
    try 
    {
        cout<<"Enter a pin number : " ;
        cin>>pin ;

        while(pin)
        {
            pin = pin/10 ;
            count++ ;
        }
        cout<<count<<endl ;

        if (count !=6)
            throw 2 ;
        cout <<"Valid pin no." ;
        
    }
    catch(int x)
    {
        cout<<"Doesn't contain 6 character";
    }
    catch(...)
    {
        cout<<"Invalid pin no . " ;
    }
    return 0 ;
}

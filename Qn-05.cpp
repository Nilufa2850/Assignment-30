/*5. Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits.*/

#include<iostream>
#include<cstring>
using namespace std ;

int main ()
{
    int ph , count=0 ;
    try 
    {
        cout<<"Enter a ph number : " ;
        cin>>ph ;

        while(ph)
        {
            ph = ph/10 ;
            count++ ;
        }
        cout<<count<<endl ;

        if (count !=10)
            throw 2 ;
        cout <<"Valid ph no." ;
        
    }
    catch(int x)
    {
        cout<<"Doesn't contain 10 character";
    }
    catch(...)
    {
        cout<<"Invalid ph no . " ;
    }
    return 0 ;
}

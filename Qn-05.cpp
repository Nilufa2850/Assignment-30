/*Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits.*/

#include<iostream>
#include<cstring>
using namespace std ;
int main ()
{
    char email[30] ;
    
    
    try 
    {
        cout<<"Enter an email address : " ;
        cin.getline(email , 30) ;

        int i , count=0 ;
        for(i=0 ; email[i] ; i++)
        {
            if (email[i] == '@')
                count ++ ;
        }
        if (count == 0)
            throw 1 ;

        cout<<"EmailId is "<<email <<endl ;
    }
    catch (int m)
    {
        cout<<"@ not present" ;
    }
    catch(...)
    {
        cout<<"Invalid email" ;
    }
    return 0 ;
}

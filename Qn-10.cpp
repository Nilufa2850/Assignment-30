/*10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.*/

#include<iostream>
#include<cstring>
using namespace std ;

int main ()
{
    char name[10] ;

    try 
    {
        cout<<"Enter a nickname number : " ;
        cin.getline(name,10) ;

        if(strlen(name)>8)
            throw name ;

        int i ;
        for(i=0 ; name[i] ; i++)
        {
            if (name[i] >=33 && name[i]<=64)
                throw 1  ;
        }

        cout<<"Valid name" ;
        
    }
    catch(char*n)
    {
        cout<<"must be less than 8 characters";
    }
    catch(...)
    {
        cout<<"Invalid name no . " ;
    }
    return 0 ;
}

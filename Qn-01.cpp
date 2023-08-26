/*1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.*/

#include<iostream>
#include<cstring>
using namespace std ;
int main ()
{
    int vote , age ;
    char nationality [20] ;

    try 
    {
        cout<<"Enter your age : " ;
        cin>>age ;
        if(age < 18)
            throw 1 ;

        cout <<"enter your nationality : " ;
        cin.ignore() ;
        cin.getline (nationality , 20) ;
        if (strcmp(strupr(nationality) , "INDIAN")) 
            throw nationality ;

        cout<<"---------------------"<<endl;
        cout<<"1. Chota Bheem"<<endl ;
        cout<<"2. Titoo"<<endl ;

        cout<<"Enter your vote : ";
        cin>>vote ;

        if(vote > 2 || vote < 1)
            throw 2.5 ;

        cout<<"\nThank you for your vote" ;  
    }
    catch (int x)
    {
        cout<<"Invalid age " ;
    }
    catch (char* n)
    {
        cout<<"You should be an Indian" ;
    }
    catch (...)
    {
        cout<<"Invalid vote" ;
    }

    return 0 ;

}

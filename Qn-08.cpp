/*8. Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.*/

#include<iostream>
#include<cstring>
using namespace std ;

int main ()
{
    char pass[20] ;
    try 
    {
        cout<<"Enter a password : " ;
        cin.getline (pass , 20) ;

        int L = strlen(pass) ;
        if (L < 6)
            throw 1 ;

        int i , count=0, count1=0 , count2=0 ;
        for(i=0 ; pass[i] ; i++)
        {
            if (pass[i]>='0' && pass[i]<='9' ) 
                count ++ ;

            if ((pass[i] >=33 && pass[i]<=47) || (pass[i] >=58 && pass[i]<=64))
                count1++ ;

            if (pass[i]>='A' && pass[i]<='Z')
                count2++ ;
        }
        if (count==0)
            throw 2 ;
        if (count1==0)
            throw 'c' ;
        if (count2==0)
            throw 2.5 ;
    
        cout<<pass<<" - valid" <<endl ; 
    }
    catch(int x)
    {
        if (x == 1)
            cout<<"Length must be less than 6 characters.";
        else
            cout<<"Doesn't contain digit," ;
    }
    catch(char ch)
    {
        cout<<"Doesn't contain special character ." ;
    }
    catch(...)
    {
        cout<<"Does not contain Upper case" ;
    }
    return 0 ;
}

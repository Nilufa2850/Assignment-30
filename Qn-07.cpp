/*7. Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol.*/

#include<iostream>
#include<cstring>
using namespace std ;

int main ()
{
    char user[20] ;
    try 
    {
        cout<<"Enter a username : " ;
        cin.getline (user , 20) ;

        int L = strlen(user) ;
        if (L > 6)
            throw 1 ;

        int i , count=0 ;
        for(i=0 ; user[i] ; i++)
        {
            if ((user[i]>='0' && user[i]<='9' ) || (user[i] >=33 && user[i]<=47))
                count ++ ;
        }
        if (count==0)
            throw 2.5 ;
    
        cout<<user<<" - valid" <<endl ; 
    }
    catch(int x)
    {
        cout<<"Length must be less than 6 characters.";
    }
    catch(double d)
    {
        cout<<"Doesn't contain digit or special character ." ;
    }
    catch(...)
    {
        cout<<"Does not contain special character" ;
    }
    return 0 ;
}

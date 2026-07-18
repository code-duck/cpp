#include<iostream>

using namespace std;  

int main ()
{
    int age;

    cout<< "enter your age "<<endl;
    cin>> age;
    
    /*order of "if" statement matters */
    
    if(age >= 100)
    {
        cout<< "too old gramps go, get rest"<< endl;
    }
    else if( age >= 18)
    {
        cout<< "you can watch the movie "<< endl;
    }
    else if ( age < 0)
    {
        cout<<"this person is not born" <<endl;

    }
    else
    {
        cout<< "you are not able to watch this"<< endl;
    }


    return 0;

}
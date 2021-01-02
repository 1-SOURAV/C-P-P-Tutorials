#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p;
    p = &a;
    int **q;
    q = &p;
    int ***r;
    r = &q;

    cout<<"Value of a by a:- "<<a<<endl;
    cout<<"Value of a by *p:-  "<<*p<<endl;
    cout<<"Value of a by *(*q):-  "<<*(*q)<<endl;
    cout<<"Value of a by *(*(*r)):- "<<*(*(*r))<<endl;

    cout<<endl<<endl;

    cout<<"Adress of a by &a:- "<<&a<<endl;
    cout<<"Adress of a by p:- "<<p<<endl;
    cout<<"Adress of a by *q:- "<<*q<<endl;
    cout<<"Adress of a by *(*r):- "<<*(*r)<<endl;

    cout<<endl<<endl;

    cout<<"Value of p is the address of a."<<endl;
    cout<<"Value of p by p:- "<<p<<endl;
    cout<<"Value of p by *q:- "<<*q<<endl;
    cout<<"Value of p by *(*r):- "<<*(*r)<<endl;

    cout<<endl<<endl;
    
    cout<<"Adress of p is not related to a."<<endl;
    cout<<"Adress of p by &p:- "<<&p<<endl;
    cout<<"Adress of p by q:- "<<q<<endl;
    cout<<"Adress of p by *r:- "<<*r<<endl;

    cout<<endl<<endl;

    cout<<"Value of q is the adress of p."<<endl;
    cout<<"Value of q by &p:- "<<&p<<endl;
    cout<<"Value of q by *r:- "<<*r<<endl;

    cout<<endl<<endl;

    cout<<"Adress of q is the not related to p."<<endl;
    cout<<"Address of q by &q:- "<<&q<<endl;
    cout<<"Address of q by r:- "<<r<<endl;

    cout<<endl<<endl;
    
    cout<<"Value of r is the adress of q."<<endl;
    cout<<"Value of r by r:- "<<r<<endl;
    cout<<"Value of r by &q:- "<<&q<<endl;

    cout<<endl<<endl;

    cout<<"Adress of r is not related to q."<<endl;
    cout<<"Adress of r by &r:- "<<&r<<endl;

    cout<<endl<<endl;

    cout<<"Changing the value of a by r by using r."<<endl<<endl;
    cout<<"Value of a before using ***r:- "<<a<<endl;
    cout<<"Adress of a before using ***r:- "<<&a<<endl;
    ***r = 1500;
    cout<<"Value of a after using ***r:- "<<a<<endl;
    cout<<"Adress of a after using ***r:- "<<&a<<endl;

    cout<<endl<<endl;

    cout<<"Changing the value of a by using q."<<endl<<endl;
    cout<<"Value of a before using *(*q):- "<<a<<endl;
    cout<<"Adress of a before using *(*p):- "<<&a<<endl;
    *(*q) = ***r + 100;   //1600
    cout<<"Value of a after using *(*q):- "<<a<<endl;
    cout<<"Adress of a after using *(*q):- "<<&a<<endl;

    cout<<endl<<endl;

    cout<<"Changing the value of a by using p."<<endl<<endl;
    cout<<"Value of a before using *p:- "<<a<<endl;
    cout<<"Adress of a before using *p:- "<<&a<<endl;
    *p = *(*q) + 100;    // 1700
    cout<<"Value of a after using *p:- "<<a<<endl;
    cout<<"Adress of a after using *p:- "<<&a<<endl;

    
}

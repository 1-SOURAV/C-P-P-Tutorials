#include <iostream>

using namespace std;

class Distance
{
public:
    // Member Object
    int a, b;
    // No Parameter Constructor
    Distance()
    {
        this->a = 0;
        this->b= 0;
    }

    // Constructor to initialize the object's value
    // Parametrized Constructor
    Distance(int f, int i)
    {
        this->a = f;
        this->b = i;
    }

    // Overloading (+) operator to perform addition of two distance object

    Distance operator + (Distance &d2) // Call by reference
    {
        // Create an object to return
        Distance d3;

        // Perform addition of a and b
        d3.a = this->a + d2.a;
        d3.b = this->b + d2.b;

        // Return the resulting object
        return d3;
    }
    

    Distance operator - (Distance &d2) // Call by reference
    {
        // Create an object to return
        Distance d4;

        // Perform subtraction of a and b
        d4.a = this->a - d2.a;
        d4.b = this->b - d2.b;

        // Return the resulting object
        return d4;
    }

    Distance operator * (Distance &d2) // Call by reference
    {
        // Create an object to return
        Distance d5;

        // Perform multiplicaion of a and b
        d5.a = this->a * d2.a;
        d5.b = this->b * d2.b;

        // Return the resulting object
        return d5;
    }

    Distance operator / (Distance &d2) // Call by reference
    {
        // Create an object to return
        Distance d6;

        // Perform division of a and b
        d6.a = this->a / d2.a;
        d6.b = this->b / d2.b;

        // Return the resulting object
        return d6;
    }
};

// Driver Code
int main()
{
    int a, b, c, d;
    cout<<"Enter the value of Distance (a,b):- ";
    cin>>a>>b;
    cout<<"Enter the value of Distance (c,d):- ";
    cin>>c>>d;


    // Declaring and Initializing first object
    Distance d1(a,b);

    // Declaring and Initializing second object
    Distance d2(c,d);

    // Declaring third object
    Distance d3;
    // Declaring fourth object
    Distance d4;
    // Declaring fifth object
    Distance d5;
    // Declaring sixth object
    Distance d6;

    // Using the overloaded operators
    d3 = d1 + d2;
    d4 = d1 - d2;
    d5 = d1 * d2;
    d6 = d1 / d2;

    // Display the result
    cout << "\nAddition of (a+c) and (b+d):- " <<"("<<d3.a<<","<< d3.b<<")";
    cout << "\nSubtraction of (a+c) and (b+d):- " <<"("<<d4.a<<"," <<d4.b<<")";
    cout << "\nMultiplication of (a+c) and (b+d):- " <<"("<<d5.a<<"," <<d5.b<<")";
    cout << "\nDivision of (a+c) and (b+d):- " <<"("<<d6.a<<"," <<d6.b<<")";

    cout<<endl<<endl;
    cout<<"\n Addition of (a+c)=X and (b+d)=Y :- " <<d3.a+d3.b;
    cout<<"\n Subtraction of (a+c)=X and (b+d)=Y :- " <<d4.a-d4.b;
    cout<<"\n Multiplication of (a+c)=X and (b+d)=Y :- "<<d5.a*d5.b;
    cout<<"\n Division of (a+c)=X and (b+d)=Y :- "<<d6.a/d6.b;
    return 0;
}

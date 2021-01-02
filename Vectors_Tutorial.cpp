#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "\nElements of vector are: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "Element[" << i + 1 << "]:- " << v[i] <<endl;
        // cout << v.at(i) << " ";    // This method will also display the lements of the vector.
    }
    
}

int main()
{
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of vector:- ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element no. " << i + 1 << " into the vector:- ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);


    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter, 15,5);     // It inserts the element at the iter position in the vector.
    // cout<<"\n\nAfter using 'vec1.insert' :";
    // display(vec1);


    // vec1.pop_back();  //It pops the last inserted element from the vector.
    // cout<<"\n\n After using 'vec1.pop_back()':"<<endl;
    // display(vec1);
    // cout << endl;


    return 0;
}

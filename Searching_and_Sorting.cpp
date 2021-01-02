#include <iostream>
using namespace std;

//......................................................................................................................................................

// Function to perform Selection Sort
void Selection_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// .....................................................................................................................................................

// Function to perform Bubble Sort
// void Bubble_Sort(int arr[], int n)
// {
//     int counter=1;

//     while(counter<n)
//     {
//         for(int i=0;i<n-counter;i++)
//         {
//             if(arr[i]>arr[i+1])
//             {
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//         counter++;
//     }
// }

// ......................................................................................................................................................

// void Insertion_sort(int arr[],int n)
// {
//     for(int i=1;i<n;i++)
//     {
//         int current=arr[i];
//         int j=i-1;

//         while(arr[j]<current && j<=0)
//         {
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }
// }

// ......................................................................................................................................................

// Function to perform Binary Search
void Binary_Search(int arr[], int n, int key)
{
    int beg = 0;
    int end = n;

    while (beg <= end)
    {
        int mid = (beg + end) / 2;

        if (arr[mid] == key)
        {
            cout << key << " is present at the index no. " << mid + 1 << endl;
            break;
        }

        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        else if (arr[mid] < key)
        {
            beg = mid + 1;
        }

        else
        {
            cout << key << " is not present in the array" << endl;
        }
    }
}

// ................................................................Main Section..........................................................................

int main()
{
    int n;
    cout << "Enter the size of array:- ";
    cin >> n;

    int arr[n];

    cout << "Enter elements into the array:- " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i + 1 << "]:- ";
        cin >> arr[i];
    }

    Selection_Sort(arr, n);
    //Insertion_sort(arr,n);
    //Bubble_Sort(arr,n);

    cout << "Elements after sorting:- " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i + 1 << "]:- " << arr[i] << endl;
    }

    int key;
    cout << "Enter the element you wanted to search in the array:- ";
    cin >> key;

    Binary_Search(arr, n, key);

    return 0;
}

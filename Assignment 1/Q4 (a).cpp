#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void reverser(int *array,int size)
{
    int i=0,j=size-1,tmp;

    while(i!=j && i<j)
    {
        tmp=array[i];
        array[i]=array[j];
        array[j]=tmp;
        i++;
        j--;
    }
}

int main()
{
    int elements,i=0,j,k;
    cout<<"Enter number of elements to input: ";
    cin>>elements;
    int arr[100];

    for (i = 0; i < elements; i++)
    {
        cout << "Enter element number " << i+1 << ": ";
        cin >> arr[i];
    }

    reverser(arr,elements);
    cout<<"The updated array is :-"<<endl;

    for(i = 0; i < elements; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0; 
}
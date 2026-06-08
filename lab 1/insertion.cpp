#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10, 20, 30, 40, 50};
    int n=5;
    int i, ind, value;
    cout<<"The elements of array are: \n";
    for (i=0; i<n; i++)
    {
        cout<<"\n Elements at index"<<i<<"is"<<arr[i];
    }
    cout<<"\n Enter the index to store the new value";
    cin>>ind;
    cout<<"\n Enter the new value to insert";
    cin>>value;
    for(i=n-1; i>=ind; i--)
    {
        arr[i+1]= arr[i];
    }
    arr[ind]=value;
    n=n+1;
    cout<<"Array after insertion is: ";
    for(i=0; i<n; i++)
    {
        cout<<"\n Elements at index"<<i<<"is"<<arr[i];
    }
    
}

#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10, 20, 30, 40,50};
    int n=5;
    int i, pos, value;
    cout<<"the array elememts are: ";
    for(i=0; i<n; i++)
    {
        cout<<"\n the element at index"<<i<<"is "<<arr[i];
    }
    cout<<"\n Enter the position to delete value from";
    cin>>pos;
    value=arr[pos-1];
    for(i=pos-1; i<n; i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    cout<<"\n The value deleted is"<<value;
    cout<<"\n The array after deletion is: \n";
    for(i=0; i<n; i++)
    {
        cout<< arr[i];
        cout<<"\n";
    }

return 0;
}
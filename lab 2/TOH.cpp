#include<iostream>
using namespace std;

void tower(int n, char A, char B, char C)  //A= beg, B=aux, C=end
{
    if(n==1)
    {
    cout<<"\n move disk from " << A << " to " << C;
    return;
    }

    else
    {
        tower(n-1, A, C, B);
        cout<<"\n move disk from "<<  A <<"to"<< C;
        tower(n-1, B, A , C);
    }
}

int main()
{
    int n;
    cout<<"Enter the no of disks \n";
    cin>>n;
    tower(n, 'A' , 'B' , 'C' );
    return 0;
}





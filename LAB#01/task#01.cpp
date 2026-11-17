#include<iostream>
using namespace std;
int main ()
{
    //TAKING NUMBER OF ELEMENTS IN AN ARRAY
    int n;
    cout<<"Enter the number of elements you want to display .\n";
    cin>>n;
    int arr [n];

    // ELEMENTS OF ARRAY AS INPUTS
    cout<<"Enter the elements you want to display.\n";
    for (int i=0;i<n;i++)
    {
        cin>> arr[i];
        cout<<endl;
    }

    //Traversing and Displaying Array
    cout<<"The Elements are :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    
return 0;

}
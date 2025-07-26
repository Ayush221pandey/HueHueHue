#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum;
    int average;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
     cin>>arr[i];
     cout<<"The following array is: ";
     for(int i=0;i<n;i++)
        cout<<arr[i];

        cout<<"The average of the array is: ";
        for(int i=0;i<n;i++)
            {
                sum += arr[i];
            }

            cout<<"Average is :" << (sum/n);



    return 0;



}

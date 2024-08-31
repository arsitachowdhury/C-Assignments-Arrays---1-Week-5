#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,i,min=0;
    cout<<"Enter no of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    min=INT_MAX;
    for(i=0;i<n;i++)
    {
           if(arr[i]<=min)
           min=arr[i];
    }
    cout<<"Minimum number is : "<<min;
    return 0;
}
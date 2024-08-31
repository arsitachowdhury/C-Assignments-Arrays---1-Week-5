#include<iostream>
using namespace std;
int main()
{
    int n,pdt=1;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        pdt=pdt*arr[i];
    }
    cout<<"The product of the all elements is : "<<pdt;
    return 0;
}
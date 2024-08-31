#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mx=INT_MIN;
    int smx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx)  
        {
            smx=mx;
            mx=arr[i];
        }
        else 
        {
            smx=max(smx,arr[i]);
        }
    }
    cout<<"Maximum number : "<<mx<<endl;
    if(smx==mx)
    cout<<"No second largest is exists";
    else 
    cout<<"Second largest number is : "<<smx;
    return 0;
}
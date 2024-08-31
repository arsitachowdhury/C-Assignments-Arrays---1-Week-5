//Wap to find the small positive missing number in a sorted array
#include<iostream>
using namespace std;
int main()
{
    // int arr[]={-8,-6,-2,0,2,3,5,6};
    int n;
    cout<<"Enter the size of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter numbers"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=true;
    int x=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=0)
        continue;
        if(x!=arr[i])
        {
            cout<<x;
            flag=false;
             break;
        }
        x++;
    }
    if(flag==true)
    cout<<"There is no small missing positive number";
    return 0;
}
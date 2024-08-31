#include <iostream>
using namespace std;
int main()
{
    int n;
    bool flag = false;
    cout << "Enter the array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = i+1; j < n; j++)
        {
                if(arr[i]==arr[j])
                flag=true;
        }
    }
   if(flag==false)
   cout<<"All elements are unique";
   else
   cout<<"Duplicate presesnt";
    return 0;
}
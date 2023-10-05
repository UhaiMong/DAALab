#include<bits/stdc++.h>
using namespace std;
void merge_sort(int arr)
{
    if(sizeof(arr)>1)
    {
        int mid = sizeof(arr)/2;
        cout<<mid<<endl;
    }
}
int main()
{
    int arr[9] = {12,11,13,7,5,6,4,1};
    //merge_sort(arr);
    for(int i = 0;i<sizeof(arr)-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

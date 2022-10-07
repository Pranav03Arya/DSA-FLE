//linear search from first element to last element 
#include <bits/stdc++.h>
using namespace std;

//using linear search 
int findElement(int n, int arr[], int key)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}


int main()
{
    int arr[] = {5,9,4,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 4;

    int position;
        position = findElement(n, arr, key);

    if(position == -1)
        cout<<"element not found";
    else
        cout<<"element found at position:"
            << position+1;

    return 0;
}
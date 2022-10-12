#include <iostream>
using namespace std;

// we use the printArray function because we want 
//to print the array values in the text area of the console 

void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    } cout<<endl;
}

//in the swapAlternate function we use i+2 because
//when one set of elements already swapped so that it 
//point out to the next element of the array and not the swapped one.

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}
int main()
{
    int even[8] = {5,2,7,6,9,4,1,3};
    int odd[5] = {33,76,24,98,45};

    swapAlternate(even, 8);
    printArray(even,8);

    cout << endl;

    swapAlternate(odd, 5);
    printArray(odd,5);

    cout<<endl;

    return 0;
}
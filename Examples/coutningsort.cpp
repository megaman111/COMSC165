#include <iostream>
using namespace std;

int main() {
    const int NUM_SIZE = 3;
    int arr[6] = {0,1,1,2,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int output[n];
    int i, count[NUM_SIZE] = {0};

    //count the arr's item value
    for(int i=0; i<n; i++)
        count[ arr[i] ]++;
        
    for(int i=0; i<n-1; i++)
        count[i+1] += count[i];
    
    for(int i=0; i<NUM_SIZE; i++)
    cout << count[i] << " ";
    
    //build up the output array
    for(i =n-1; i>=0; i--){
        output[ count[ arr[i] ] ] = arr[i];
        count[ arr[i] ]--;
    
    }
    for(i=0; i<n i++)
        cout << arr[i] << " ";
    cout << endl;
    for(i=0; i<n i++)
        
    
}
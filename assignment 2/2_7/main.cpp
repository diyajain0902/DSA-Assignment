#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: ";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int count=0;  //no. of inversions
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i]>arr[j]) {
                count++;
            }
        }
    }

    cout<<"Number of inversions= "<<count;
    return 0;
}

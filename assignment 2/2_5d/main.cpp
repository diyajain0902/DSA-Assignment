#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of upper triangular matrix: ";
    cin>>n;

    int total=n*(n+1)/2;
    int arr[total];

    cout<<"Enter "<<total<<" elements (row-wise): ";
    for (int i=0; i<total; i++) 
        cin>>arr[i];
    
    cout<<endl;
    cout<<"Matrix:"<<endl;
    int k=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i<=j) {
                cout<<arr[k]<<" ";
                k++;
            }
            else 
                cout<<"0 ";
        }
        cout<<endl;
    }
}

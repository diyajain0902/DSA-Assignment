#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of symmetric matrix: ";
    cin>>n;

    int total=n*(n+1)/2;
    int arr[total];

    cout<<"Enter "<<total<<" elements (lower triangle row-wise): ";
    for (int i=0; i<total; i++) 
        cin>>arr[i];

    cout<<endl;
    cout<<"Matrix:"<<endl;
    int k=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i>=j) {
                cout<<arr[k]<<" ";
                k++;
            }
            else 
                cout<<arr[j*(j+1)/2 + i]<<" "; // use symmetry A[i][j] = A[j][i]";
        }
        cout<<endl;
    }
}


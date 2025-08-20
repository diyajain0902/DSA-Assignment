#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout<<"Enter rows and cols: ";
    cin>>rows>>cols;

    int mat[20][20];
    cout<<"Enter matrix:\n";
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            cin>>mat[i][j];

    cout<<"\nTriplet form (row col val):\n";
    int triplet[100][3], k=0;
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            if (mat[i][j] != 0) {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = mat[i][j];
                cout<<i<<" "<<j<<" "<<mat[i][j]<<endl;
                k++;
            }

    cout<<"\nTranspose (row col val):\n";
    for (int i=0; i<k; i++)
        cout<<triplet[i][1]<<" "<<triplet[i][0]<<" "<<triplet[i][2]<<endl;

    return 0;
}

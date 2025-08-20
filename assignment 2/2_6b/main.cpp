#include <iostream>
using namespace std;

int main() {
    int rows1, cols1;
    cout<<"Enter rows and cols of matrix 1: ";
    cin>>rows1>>cols1;

    int mat1[20][20];
    cout<<"Enter matrix 1:\n";
    for (int i=0; i<rows1; i++)
        for (int j=0; j<cols1; j++)
            cin>>mat1[i][j];

    cout<<"\nTriplet form of matrix 1 (row col val):\n";
    int triplet1[100][3], k=0;
    for (int i=0; i<rows1; i++)
        for (int j=0; j<cols1; j++)
            if (mat1[i][j] != 0) {
                triplet1[k][0] = i;
                triplet1[k][1] = j;
                triplet1[k][2] = mat1[i][j];
                cout<<i<<" "<<j<<" "<<mat1[i][j]<<endl;
                k++;
            }

    int rows2, cols2;
    cout<<"Enter rows and cols of matrix 2: ";
    cin>>rows2>>cols2;

    int mat2[20][20];
    cout<<"Enter matrix 2:\n";
    for (int i=0; i<rows2; i++)
        for (int j=0; j<cols2; j++)
            cin>>mat2[i][j];

    cout<<"\nTriplet form of matrix 2 (row col val):\n";
    int triplet2[100][3];
    int m=0;
    for (int i=0; i<rows2; i++)
        for (int j=0; j<cols2; j++)
            if (mat2[i][j] != 0) {
                triplet2[m][0] = i;
                triplet2[m][1] = j;
                triplet2[m][2] = mat2[i][j];
                cout<<i<<" "<<j<<" "<<mat2[i][j]<<endl;
                m++;
            }
    
    if (rows1!=rows2 || cols1!=cols2) {
        cout<<"Matrix addition not possible (different sizes).";
        return 0;
    }
    
    cout<<"\nResultant Matrix in Triplet form (row col val):\n";
    int result[200][3], r=0;
    
    //copy triplets1
    for (int i=0; i<k; i++) {
        result[r][0] = triplet1[i][0];
        result[r][1] = triplet1[i][1];
        result[r][2] = triplet1[i][2];
        r++;
    }
    
    //add triplets2
    for (int j=0; j<m; j++) {
        bool found=false;
        for (int x=0; x<r; x++) {
            if (result[x][0]==triplet2[j][0] && result[x][1]==triplet2[j][1]) {
                result[x][2] += triplet2[j][2]; //add values if same position
                found=true;
                break;
            }
        }
        if (!found) { //new element
            result[r][0] = triplet2[j][0];
            result[r][1] = triplet2[j][1];
            result[r][2] = triplet2[j][2];
            r++;
        }
    }
    
    //print
    for (int x=0; x<r; x++) {
        if (result[x][2]!=0) //avoid storing 0
            cout<<result[x][0]<<" "<<result[x][1]<<" "<<result[x][2]<<endl;
    }
    
    return 0;
}

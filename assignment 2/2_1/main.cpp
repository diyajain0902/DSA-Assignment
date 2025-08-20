#include <iostream>
using namespace std;

//Linear Search
int linearSearch(int arr[], int n, int element) {
    for (int i=0; i<n; i++) {
        if (arr[i]==element)
            return i;  //return index
    }
    return -1; //not found
}

//Binary Search 
int binarySearch(int arr[], int n, int element) {
    int left=0, right=n-1;
    
    while (left<=right) {
        int mid=left+(right-left)/2;
        
        if (arr[mid]==element)
            return mid;
        else if (arr[mid]<element)
            left=mid+1;
        else
            right=mid-1;
    }
    return -1; //not found
}

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements (in sorted order): ";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    int element;
    cout<<"Enter element to search: ";
    cin>>element;

    //Linear Search
    int resultLinear=linearSearch(arr, n, element);
    if (resultLinear!=-1)
        cout<<"Linear Search: Element found at index "<<resultLinear<<endl;
    else
        cout<<"Linear Search: Element not found"<<endl;

    //Binary Search
    int resultBinary=binarySearch(arr, n, element);
    if (resultBinary!=-1)
        cout<<"Binary Search: Element found at index "<<resultBinary<<endl;
    else
        cout<<"Binary Search: Element not found"<<endl;

    return 0;
}

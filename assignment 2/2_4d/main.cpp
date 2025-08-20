#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"Enter a string in lowercase: ";
    string str;
    cin>>str;
    int n=str.length();
    for(int i=1; i<=n-1; i++){
        for(int j=0; j<=n-i-1; j++){
            if(str[j]-'a'>str[j+1]-'a'){
                swap(str[j],str[j+1]);
            }
        }
    }
    cout<<str;
    return 0;
}

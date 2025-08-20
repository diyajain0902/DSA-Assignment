/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
   int size;
   cout<<"Enter the size of the array:\n";   
   cin>>size;
   
   int arr[size];
   cout<<"Enter the elements of the size:\n";
   
   for(int i=0; i<size; i++){
       cin>>arr[i];
   }
   
   cout<<"The original array is: ";
   for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
   }
   
   int start=0;
   int end= size-1;
   int temp;
   
   for(int i=0; i<size; i++){
       if(start<end){
       temp=arr[start];
       arr[start]=arr[end];    //swapping the number from start with end in order to reverse
       arr[end]=temp;
      
       
       start++;
       end--;
       }
      
   }
   
   cout<<"\nThe reversed array is: ";
   for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
   }

    return 0;
}
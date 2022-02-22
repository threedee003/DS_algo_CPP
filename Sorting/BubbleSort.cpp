#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=n-1;j>=0;j--){
        for(int k=0;k<=j-1;k++){
            if(arr[k]>arr[k+1]){
                int temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



//The Bubble Sort algorithm is of time complexity n^2.

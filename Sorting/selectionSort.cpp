#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n for array : ";
    cin>>n>>endl;
    int arr[n];
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }


    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
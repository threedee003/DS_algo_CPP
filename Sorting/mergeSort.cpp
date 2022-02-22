#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int l,int mid,int r){
	int n1 = mid-l+1;
	int n2 = r-mid;
	int a[n1];
	int b[n2];
	for(int i = 0; i < n1; i++){
		a[i] = arr[l+i];
	}
	for(int i = 0; i < n2; i++){
		b[i] = arr[mid+1+i];
	}
	int i = 0;
	int j = 0;
	int k = l;
	while(i < n1 && j < n2){
		if(a[i] < b[j]){
			arr[k] = a[i];
			k++;
			i++;
		}
		else{
			arr[k] = b[j];
			k++;
			j++;
		}
	}
	while(i < n1){
		arr[k] = a[i];
		k++;
		i++;
	}
	while(j < n2){
		arr[k] = b[j];
		k++;
		j++;
	}
}


void mergeSort(int arr[],int l, int r){
	if(l < r){
		int mid = l+(r-l)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);

		merge(arr,l,mid,r);
	}
}


int main(){
	int A[] = {22,12,45,63,95,81};
	mergeSort(A,0,sizeof(A)/sizeof(A[0])-1);
	for(int i = 0; i < sizeof(A)/sizeof(A[0]); i++){
		cout << A[i] << endl;
	}
}
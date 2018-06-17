#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l[],int r[],int n){
	int i=0,j=0,k=0,mid=n/2;
	while(j<mid && k<(n-mid)){
		if(l[j]<=r[k]){
			arr[i++]=l[j++];
		}
		else{
			arr[i++]=r[k++];
		}
	}
	while(j<mid){arr[i++]=l[j++];}
	while(k<(n-mid)){arr[i++]=r[k++];}
}
void mergesort(int arr[],int n){
	if(n<2){
		return ;
	}
	int i,j,mid=n/2;
	int l[mid],r[n-mid];
	for(i=0;i<mid;i++){
		l[i]=arr[i];
	}
	for(j=mid;j<n;j++){
		r[j-mid]=arr[j];
	}
	mergesort(l,mid);
	mergesort(r,n-mid);
	merge(arr,l,r,n);
}
int main(){
	int i,j,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	mergesort(arr,n);
	for(i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	return 0;
}
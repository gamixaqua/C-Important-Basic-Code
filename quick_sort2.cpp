#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y){
	int t=*x;
	*x=*y;
	*y=t;
}
int partition(int arr[],int start,int end){
	int pivat=arr[end];
	int i,pindex=start;
	 for(i=start;i<end;i++){
	 	if(arr[i]<=pivat){
	 		swap(arr+i,arr+pindex);
	 		pindex++;
	 	}
	 }
	swap(arr+pindex,arr+end);
	return pindex;

}
void quicksort(int arr[],int n,int m){
	if(n<m){
		return;
	}
	int index = partition(arr,m,n);
	quicksort(arr,index-1,m);
	quicksort(arr,n,index+1);

}
int main(){
	int i,j,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	quicksort(arr,n-1,0);
	for(i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	return 0;
}
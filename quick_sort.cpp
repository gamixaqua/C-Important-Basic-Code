#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y){
	int t=*x;
	*x=*y;
	*y=t;
}
void quicksort(int arr[],int n,int m){
	if((n-m) < 2){
		return;
	}
	int pivat=arr[n-1];
	int left=n-2,right=m;
	while(left>right){
		if(arr[right]<=pivat){ right++;}
		else{
			if(arr[left]>pivat){left--;}
			else{ 
				swap(arr+left,arr+right);
				right++;
				left--;
			}
	    }
	}
	if(arr[left]>arr[n-1]){
		swap(arr+left,arr+n-1);
		left--;

	}
	quicksort(arr,left+1,m);
	quicksort(arr,n,left+1);

}
int main(){
	int i,j,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	quicksort(arr,n,0);
	for(i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	return 0;
}
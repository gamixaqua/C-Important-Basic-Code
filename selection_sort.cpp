#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y){
	int t=*x;
	*x=*y;
	*y=t;
}
int main(){
	int i,j,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int imin;
	for(i=0;i<n-1;i++){
		imin=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[imin]){
				imin=j;
			}
		}
			swap(arr+i,arr+imin);
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	return 0;
}
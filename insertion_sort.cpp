#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int value;
	for(i=1;i<n;i++){
		value=arr[i];
		j=i;
		while(arr[j-1]>value && j>0){
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=value;

	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	return 0;
}
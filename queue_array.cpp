#include<bits/stdc++.h>
using namespace std;
#define MAX 10
class qqueue{
	int front,rear;
	public:
		int arr[MAX];
		qqueue(){
			front=-1;
			rear=-1;
		}
	bool isfull(){
		return ((rear+1)%MAX==front);
	}
	bool isempty(){
		return (front==-1);
	}
	void enqueue(){
		int val;
		cin>>val;
		if(isfull()){
			cout<<"queue overflow\n";
		}
		else{
			rear=(rear+1)%MAX;
			arr[rear]=val;
			if(front==-1){
				front=rear;
			}
		}
	}
	int  dequeue(){
		int data=0;
		if(isempty()){
			cout<<"queue underflow\n";
		}
		else{
			  data=arr[front];
			if(front==rear){
				front-=1;
			}
			else{
				front=(front+1)%MAX;
			}
		}
		return data;
	}
	int  size(){
			return (MAX-front+rear+1)%MAX ;
	}
	void showqueue(){
		int start=front,end=rear;
		while(start!=rear){
			cout<<arr[start]<<"  ";
			start=(start+1)%MAX;
		}
		cout<<arr[start]<<"\n";
	}
};
int main(){
	
	int c;
	class qqueue q;
	while(1){
		cin>>c;
		switch(c){
			case 1:
				q.enqueue();
				break;
			case 2:
				cout<<q.dequeue()<<"\n";
				break;
			case 3:
				cout<<q.size()<<"\n";
			case 4:
				q.showqueue();
				break;
			case 5:
				return 0;
			default:
				cout<<"please fill valid operation\n"; 
	    }
	}
	return 0;
}
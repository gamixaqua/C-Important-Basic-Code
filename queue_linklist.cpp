#include<bits/stdc++.h>
using namespace std;
struct queuenode{
	int data;
	struct queuenode *next;
};
class queue_class{
		struct queuenode *front,*rear;
	public:
		queue_class(){
			front=NULL;
			rear=NULL;
		}
	struct queuenode* newnode(int value){
		struct queuenode* temp = (struct queuenode*)malloc(sizeof(struct queuenode));
		temp->data=value;
		temp->next=NULL;
	}
	void enqueue(int value){
		struct queuenode* temp=newnode(value);
		if(rear!=NULL){
			rear->next=temp;
		}
		rear=temp;
		if(front==NULL){
			front=rear;
		}
	}
	int  dequeue(){
		if(front!=NULL){
			int x=front->data;
			front=front->next;
			return x;
		}
		else{
			cout<<"queue is empty";
			return 0;
		}
	}
	void showqueue(){
		struct queuenode *temp=front;
		while(temp!=rear){
			cout<<temp->data<<"  ";
			temp=temp->next;
		}
		cout<<rear->data<<"\n";
	}
};
int main(){
	int c;
	class queue_class q;
	while(1){
		cin>>c;
		switch(c){
			case 1:
				int value;
				//cout<<"enter the value\n";
				cin>>value;
				q.enqueue(value);
				break;
			case 2:
			    //cout<<"you want to dequeue why??\n";
				cout<<q.dequeue()<<"\n";
				break;
			case 3:
				//cout<<"you wanna see the queue\n";
				q.showqueue();
				break;
			default:
				cout<<"please fill valid operation\n"; 
	    }
	}
	return 0;
}
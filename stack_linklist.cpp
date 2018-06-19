#include<bits/stdc++.h>
using namespace std;
struct stacknode{
	int data;
	struct stacknode* next;
};
struct stacknode* push(struct stacknode* root){
	int value;
	cin>>value;
		struct stacknode *temp = (struct stacknode*)malloc(sizeof(struct stacknode));
		temp->data=value;
		temp->next=root;
		
return temp;
}
struct stacknode* pop(struct stacknode* root){
	if(root==NULL) {
		cout<<"stack underflow\n";
		return NULL;
	}
	else {
		cout<<root->data<<"\n";
		return root->next;
	}
}
void showstack(struct stacknode* root){
	struct stacknode* temp=root;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}
int size(struct stacknode* root){
	int top=0;
	struct stacknode* temp=root;
	while(temp!=NULL){
		top++;
		temp=temp->next;
	}
	return top;
}
int main(){
	struct stacknode* root=NULL;
	int c;
	while(1){
		cin>>c;
		switch(c){
			case 1:
				root = push(root);
				break;
			case 2:
				root = pop(root);
				break;
			case 3:
				cout<<size(root)<<"\n";
				break;
			case 4:
				showstack(root);
				break;
			case 5:
				return 0;
			default:
				cout<<"please fill valid operation\n"; 
	    }
	}
	return 0;
}
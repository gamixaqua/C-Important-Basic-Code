#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class stackk{
	int top;
	public:
		int stack[MAX];

		stackk(){top=-1;}

void push(){
	int value;
	cin>>value;
	if(top>=MAX) cout<<"stack overflow\n";
	else stack[++top]=value;
}
int pop(){
	if(top<0) {
		cout<<"stack underflow\n";
		return -1;
	}
	else {
		 return stack[top--];
	}
}
void showstack(){
	int x=top;
	while(x>=0){
		cout<<stack[x--]<<" ";
	}
	cout<<"\n";
}
int size(){
	return top+1;
}
};
int main(){
	
	int c;
	class stackk s;
	while(1){
		cin>>c;
		switch(c){
			case 1:
				s.push();
				break;
			case 2:
				cout<<s.pop()<<"\n";
				break;
			case 3:
				cout<<s.size()<<"\n";
				break;
			case 4:
				s.showstack();
				break;
			case 5:
				return 0;
			default:
				cout<<"please fill valid operation\n"; 
	    }
	}
	return 0;
}
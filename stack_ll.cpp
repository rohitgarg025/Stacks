#include <bits/stdc++.h>

using namespace std;

class StackNode{
public:
	int data;
	StackNode *next;

	StackNode(int data)
	{
		this->data = data;
		next = NULL;
	}
};

StackNode* top = NULL;

int isEmpty(StackNode* top)
{
	return !top;
	//if head is null then list is empty
}

void push(int x){

	//insert at beginning
	//O(1) so keep shifting top to new element instead of end
	//linked list grows as:
	//				c
	//				b->c
	//				a->b->c

	StackNode *temp = new StackNode(x);

	if(top == NULL){
		top = temp;
		return ;
	}

	temp->next = top;
	top = temp;
	return ;
}


int pop(){

	if(top ==NULL){
		cout << " Stack Underflow " << endl;
		return -1;
	}

	int x = top->data;
	StackNode* del = top;
	top = top->next;
	free(del);
	return x;

}

//Returns the data of top node

int peek(){
	if(top !=NULL)
	{
		return top->data;
	}
}

void display(){
	StackNode* p = top;

	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

int main(){



	push(10);
	push(20);
	push(30);

	display();

	return 0;
}

#include <bits/stdc++.h>

using namespace std;

#define MAX 1000

class Stack{

	int top;

public:
	int a[MAX];		//Maximum size of stack

	Stack(){ top = -1;}

	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
	void display();


};

bool Stack::push(int x)
{
	if(top >= MAX-1){
		cout << "Stack Overflow";
		return false;
	}
	else{
		top++;
		a[top] =x;
		cout <<  x  << " pushed into stack\n";
		return true;
	}

}

int Stack::pop()
{
	if(top < 0){
		cout << "Stack Underflow" << endl;
		return 0;
	}
	else{
		int x = a[top];
		top--;
		return x;
	}
}

bool Stack::isEmpty()
{
	if(top < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Stack::peek(){
    if(top <0)
    {
    	cout << "Stack Underflow " << endl;
    	return -1;
    }

    return a[top];
}

void Stack::display(){
	if(top<0)
	{
		return ;
	}

	for(int i=0;i<=top;i++)
	{
		cout << a[i] <<" ";
	}

    cout << endl;
}
int main()
{
	class Stack s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.display();
	s.pop();
	s.display();

    cout << "Is stack empty " << s.isEmpty() << endl;

    cout << "The value of top pointer is " << s.peek() << endl;

	return 0;
}


//Some points
//
//Not dynamic
//doesnt grow and shrink  depending on needs at runtime;


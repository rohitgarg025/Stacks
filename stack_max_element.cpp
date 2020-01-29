#include <bits/stdc++.h>

using namespace std;

#define MAX 100000

stack<long long int> trackStack;

class Stack {
    long long int top;

public:
    long long int a[MAX];

    Stack(){ top = -1;}

    bool isEmpty();
    void push(long long int x);
    long long int pop();
    long long int peek();
    long long int size();

};

bool Stack::isEmpty(){
    if(top<0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void Stack::push(long long int x){
    if(top >= MAX-1)
    {
        return ;
    }

    top++;
    a[top] = x;

    if((top+1) ==1){
        trackStack.push(x);
        return ;
    }

    if(x > trackStack.top())
    {
        trackStack.push(x);
    }
    else
    {
        trackStack.push(trackStack.top());
    }

}

long long int Stack::pop(){
    if(top<0)
    {
        return -1;
    }

    long long int x = a[top];
    top--;
    trackStack.pop();
    return x;
}

long long int Stack::peek(){
    return a[top];
}

long long int Stack::size(){
    return top+1;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    class Stack s;

    long long int n;
    cin >>n;

    for(int i=0;i<n;i++){
        long long int x;
        cin >> x;
        
        if(x==1)
        {
            long long int data;
            cin >>data;
            s.push(data);
        }
        else if(x==2)
        {
            int del=s.pop();
        }
        else if(x==3)
        {
            cout << trackStack.top() << endl;
        }
    }
    return 0;
}

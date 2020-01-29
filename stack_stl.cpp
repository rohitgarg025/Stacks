#include <bits/stdc++.h>

using namespace std;

int main(){
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);

	cout << " The top element is " << s.top() << endl;
	cout << "The size of stack is "<< s.size() << endl;
	cout << "Is stack empty : " << s.empty() << endl;
	cout <<"\n Lets pop " << s.pop << endl;

	return 0;
}
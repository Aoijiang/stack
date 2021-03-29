#include<iostream>
using namespace std;

template<class T>
class Stack {
private:
	T data[100];
	int Top = -1;
public:
	~Stack() {};
	void push(T x);
	bool pop();
	bool top(T &x);
	bool empty();
};

template<class T>
bool Stack<T>::empty() {
	if (Top == -1) {
		return true;
	}
	else return false;
}

template<class T>
void Stack<T>::push(T x) {
	data[++Top] = x;
}

template<class T>
bool Stack<T>::pop()
{
	if (Top == -1)return false;
	else Top--;
	return true;
}

template<class T>
bool Stack<T>::top(T &x)
{
	if (Top==-1)return false;
	x = data[Top];
    return true;
}
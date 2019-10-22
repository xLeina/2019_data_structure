#include <iostream>
#include <fstream>
using namespace std;

class Node {
	friend class LinkedList;
	public:
		Node();
		~Node();
		
		int x, y;
		int dir;
		Node *next;
};

class Stack {
	public:
		Stack() { top = NULL; };
		~Stack() {};
		
		Node *top;
		
		bool isEmpty();
		void push(Node data);
		Node pop();
		void show();
};

bool Stack::isEmpty() {
	return top == NULL;
};

void Stack::push(Node data) {
	Node *newNode = new Node(data);
	newNode->next = top;
	top = newNode;
};

Node Stack::pop() {
	if(top == NULL) isEmpty();
	Node *tmpNode = top;
};

void Stack::show() {
	
};

int main() {
	Stack maze;
	int n;
	
	Node* ptr = NULL;
	
	while(!(ptr->x == n-1 && ptr->y == n-1)){
		
	}
	
    return 0;
}

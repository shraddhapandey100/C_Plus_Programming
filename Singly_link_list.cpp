// A simple C++ program for traversal of a linked list
# include <bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};

// This fuction prints contents of linked list
// starting from the given node
void printList(Node* n){
	while (n!= NULL){
		cout<<n->data<<" ";
		n = n->next;
	}
}
// Drive code
int main(){
	Node* head = NULL;
	Node* second= NULL;
	Node* third = NULL;
	// Allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third= new Node();
	head->data=1; //assign data in first node
	head->next=second; //Lind first node with second
	second->data=2; //assign data to second node
	second->next = third;
	third->data =3;
	third->next=NULL;
	printList(head);
	return 0;
	
	
}

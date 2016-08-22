#include <iostream>
using namespace std;

//This could be in the linked_list class as well
class node{
 public:
 int data;
 node * next;
 //Constructor for basic node
 node(int x){
  data = x;
  next = NULL;
 }
};

class linked_list{
public:
node *head;
node *tail;
public:
 linked_list(){ //Linked list constructor
  head = NULL;
	tail = NULL;
 }
 ~linked_list(){
 while (head != NULL) {
  pop();
  //print();
  }
 
 }
 void push(int value){
  if(head == NULL){
   head = new node(value);
	 tail = head;
	}
  else{
   tail->next = new node(value);
   tail = tail->next;
  }
  cout << "Added: " << value << endl;
 }
 
 void pop(){
  node * temp;
	node * prev;
	temp = head;
  if (temp == NULL)
	 return;
	else if (temp->next == NULL) {
	 head = NULL;
	 tail = NULL;
	 delete temp;
	}
  else {
	 prev = temp;
	 temp = temp->next;
	 while (temp->next != NULL) {
    prev = temp;
    temp = temp->next;
	 }
	 
	 
	 
	 tail = prev;
	 tail->next = NULL;
	 delete temp;
	 }
 }
 
 
 void print(){
  node * p;
  p = head;
  while(p != NULL){
   cout << p->data << "--";
   p = p->next;
  }
 cout << "END\n";
 }
};


int main(void){
 linked_list test;
 test.push(4);
 test.push(8);
 test.push(12);
 test.push(16);
 test.push(20);
 test.push(24);
 test.print();

 /*
 test.pop();
 test.print();
 test.pop();
 test.print();
 test.pop();
 test.print();
 test.pop();
 test.print();
 test.pop();
 test.print();
 test.pop();
 test.print();
 test.pop();
 test.print();
 */
 
 
 
 return(0);
}











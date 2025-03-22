#include<iostream>
using namespace std;
struct Node
{ 
   int data;
   Node*prev;
   Node*front;
   Node(int data,Node* front,Node* prev){
        this->data = data;
        this->front = front;
        this->prev = prev;
   }
};
Node* reverseDDL(Node*head){
      Node*last = nullptr;
      Node*curr = head;
    while(curr != NULL){
      last = curr->prev;
      curr->prev = curr->front;
      curr->front = last;
      
      curr = curr->prev;
    }
    return (last?last->prev:nullptr);
}
void printDll(Node*head){
  Node*temp = head;
  while(temp!=NULL){
         cout<<temp->data<<" ";
        temp = temp->front;
  }
  cout<<endl;
}

int main(){
   Node*head = new Node(4,nullptr,nullptr);
   Node*temp1 = new Node(3,nullptr,head);
   head->front = temp1; 
   Node*temp2  = new Node(2,nullptr,temp1); 
   temp1->front = temp2;
   Node*temp3 = new Node(1,nullptr,temp2);  
   temp2->front = temp3;

   head = reverseDDL(head);
   printDll(head);
   return 0;
}

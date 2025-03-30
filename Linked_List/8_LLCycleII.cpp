#include <bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node*next;
  Node(int data){
    this->data = data;
    this->next = nullptr;
  }
  Node(int data,Node*next){
    this->data = data;
    this->next = next;
  }
};
/*Node*LLCycle(Node*head){
   Node*temp = head;
   map<Node*,int>mpp;
   while(temp!=NULL){
      if(mpp.find(temp)!=mpp.end()) return temp;
      mpp[temp] = 1;
      temp = temp->next; 
   }
   return nullptr;
}*/
Node*LLCycle(Node*head){
  Node*fast = head;
  Node*slow = head;
  while(fast!=NULL && fast->next != nullptr){
    slow = slow->next;
    fast = fast->next->next;
    if(fast == slow){
       slow = head;
       while(slow != fast){
        slow = slow->next;
        fast=fast->next;
       }
       return slow;
      }
  }
    return nullptr;
}
int main(){
  Node* node1 = new Node(1);
  Node* node2 = new Node(2);
  node1-> next = node2;
  Node* node3 = new Node(3);
  node2-> next = node3;
  Node* node4 = new Node(4);
  node3->next = node4;
  Node* node5 = new Node(5);
  node4-> next = node5;

  // Make a loop from node5 to node2
  node5->next = node2;

  // Set the head of the linked list
  Node* head = node1;
  cout<<LLCycle(head)->data;
  return 0;
}
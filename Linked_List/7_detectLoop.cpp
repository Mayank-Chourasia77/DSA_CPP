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


bool detectLoop(Node*head){
   Node*slow = head->next;
   Node*fast = head->next->next;
   while(fast!=NULL && fast->next !=nullptr)
   {
     slow = slow->next;
     fast = fast->next->next;
     if(slow == fast) return true;

   }
   return false;
   
}
void printLL(Node*head){
  while(head->next!=nullptr){
     cout<<head->data<<" ";
     head = head->next;
  }
  cout<<endl;
}
int main(){
  Node*head = new Node(3);
  head->next = new Node(2);
  head->next->next = new Node(0);
  Node*temp = new Node(-4);
  head->next->next->next = temp;
  temp->next = head->next;
  cout<<detectLoop(head);
  return 0;
}
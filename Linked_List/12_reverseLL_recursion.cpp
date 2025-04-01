#include<bits/stdc++.h>
using namespace std;
class Node{
public:
     int data;
     Node*next;
    Node(int data,Node*next){
      this->data = data;
      this->next = next;
    }
    Node(int data){
      this->data = data;
      this->next = nullptr;
    }
};
Node*reverseLL(Node*head){
  if(head == NULL || head->next == nullptr) return head;
  Node*newHead = reverseLL(head->next);
  Node*front = head->next;
  front->next = head;
  head->next = nullptr;
  return newHead;
}
void printLL(Node*head){
  while(head!=NULL){
     cout<<head->data<<" ";
     head = head->next;
  }
  cout<<endl;
}
int main(){
  Node*head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);
  printLL(head);
  Node*temp = reverseLL(head);
  printLL(temp);
  return 0;
}
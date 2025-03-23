#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node(int data,Node*next1){
      this->data = data;
      this->next = next1;
    }
    Node(int data){
      this->data = data;
      this->next = nullptr;
    }
};
Node*reverseLL(Node*head){
  if(head == NULL || head->next == nullptr) return head;
  Node *left = nullptr, *right = nullptr,*curr = head;
  while(curr != NULL){
    right = curr->next;
    curr->next = left;
    left = curr;
    curr = right;
  }
  return left;
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
  head->next = new Node(3);
  head->next->next = new Node(2);
  head->next->next->next = new Node(4);
  printLL(head);
  Node*temp = reverseLL(head);
  printLL(temp);
 return 0;
}
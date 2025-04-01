#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node*next;
    Node(int data){
      this->data = data;
      this->next= nullptr;
    }
    Node(int data , Node*next){
      this->data = data;
      this->next = next;
    }
};
Node*removeMiddle(Node*head){
  if(head || head->next == nullptr) return NULL;
    Node*slow = head;
    Node*fast = head->next->next;
    while(fast != NULL && fast->next != nullptr){
         slow = slow->next;
         fast = fast->next->next;
    }
    Node*delNode = slow->next;
    slow->next = slow->next->next;
    delete(delNode);
    return head;
}
printLL(Node*head){
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
   head->next->next->next->next= new Node(5);
   printLL(head);
   Node*newHead =removeMiddle(head);
   printLL(newHead);
}
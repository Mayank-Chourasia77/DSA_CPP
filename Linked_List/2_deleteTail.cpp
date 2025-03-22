#include<iostream>
#include<vector>
using namespace std;
struct Node
{
  int data;
  Node*next;
  Node(int data){
    this->data = data;
    next = nullptr;
  }
};
void printLL(Node *head){
    Node*temp = head;
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
}
void deleteTail(Node* &head){
  if (head == NULL || head->next == NULL)  return;
   Node*temp = head;
   while(temp->next->next != nullptr){
     temp=temp->next;
   }
   delete(temp->next);
   temp->next = nullptr;
}
int main(){
  vector<int> a={1,2,300,100};
  int val = 100;
  Node*head = new Node(a[0]);
  head->next = new Node(a[1]);
  head->next->next = new Node(a[2]);
  head->next->next->next = new Node(a[3]);
  
  deleteTail(head);
  printLL(head);
  return 0;
}
#include<iostream>
#include<vector>
using namespace std;
struct Node
{
  int data;
  Node*next;
  Node*back;
  Node(int data,Node*next,Node*back){
    this->data = data;
    this->next = next;
    this->back = back;
  }
  Node(int data){
    this->data = data;
    next = nullptr;
    back = nullptr;
  }
};
Node*convertDLL(vector<int>a){
  Node*head = new Node(a[0]);
  Node*prev = head;
  for(int i=1;i<a.size();i++){
     Node*temp = new Node(a[i],nullptr,prev);
     prev->next = temp;
     prev = temp;
  }
    return head;
}
void printLL(Node *head){
    Node*temp = head;
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
}
void deleteTail(Node* &head){
  if(head == NULL || head->next == nullptr) return;
  Node*temp = head;
  while(temp->next!= nullptr){
    temp = temp->next;
  }
  Node*prev = temp->back;
  prev->next = nullptr;
  delete(temp);
}
int main(){
  vector<int>arr = {1,2,6,8,5};
  Node*head = convertDLL(arr);
  int val =100;
  deleteTail(head);
  printLL(head);
  return 0;
}
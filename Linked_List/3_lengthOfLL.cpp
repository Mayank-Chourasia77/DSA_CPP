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
void lengthOfLL(Node* &head){
  int len =1;
     while(head->next != nullptr){
       head = head->next;
       len++;
     }
  cout<<"Length of LL : "<<len;
}
int main(){
  vector<int> a={1,2,3,4};
  int val = 100;
  Node*head = new Node(a[0]);
  head->next = new Node(a[1]);
  head->next->next = new Node(a[2]);
  head->next->next->next = new Node(a[3]);
  
  lengthOfLL(head);
  return 0;
}
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
bool searchVal(Node* &head,int val){
  Node*temp = head;
  while(temp!=NULL){
    if(temp->data == val) return true;
    temp= temp->next;
  }
  return false;
}
int main(){
  vector<int> a={1,2,3,4};
  int val = 2;
  Node*head = new Node(a[0]);
  head->next = new Node(a[1]);
  head->next->next = new Node(a[2]);
  head->next->next->next = new Node(a[3]);
  
  bool ans = searchVal(head,val);
  cout<<ans;
  return 0;
}
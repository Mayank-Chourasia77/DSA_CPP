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
Node*removeNthNode(Node*head,int N){
  if (head == NULL) {
    return NULL;
}
int cnt = 0;
Node* temp = head;

// Count the number of nodes in the linked list
while (temp != NULL) {
    cnt++;
    temp = temp->next;
}
cout<<"count"<<cnt<<endl;
// If N equals the total number of
// nodes, delete the head
if (cnt == N) {
   Node* newhead = head->next;
    delete (head);
    return newhead;
}

// Calculate the position of the node to delete (res)
int res = cnt - N;
temp = head;
cout<<"res"<<res<<endl;
// Traverse to the node just before the one to delete
while (temp != NULL) {
    res--;
    if (res == 0) {
        break;
    }
    temp = temp->next;
}

// Delete the Nth node from the end
Node* delNode = temp->next;
temp->next = temp->next->next;
delete (delNode);
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
   Node*newHead =removeNthNode(head,2);
   printLL(newHead);
}
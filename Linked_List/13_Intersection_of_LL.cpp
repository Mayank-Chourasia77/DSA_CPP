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
// Node*intersectionLL(Node*h1, Node*h2){
//    while(h2!=NULL){             // tc: n1*n2 , sc: 1
//        Node*temp = h1;
//        while(temp!=NULL){
//            if(temp == h2) return temp;
//            temp = temp->next;
//        }
//        h2 = h2->next;  
//    }
//    return NULL;
// }
// Node*intersectionLL(Node*h1, Node*h2){
//   map<Node*,int>mpp;
//   Node*temp = h1;               // tc:n1*logn1 + n2.logn2 , sc:n1
//   while(temp!=NULL){
//      mpp[temp]++;
//      temp = temp->next;
//   }
//   temp = h2;
//   while(temp!=NULL){
//     if(mpp.find(temp)!=mpp.end()) return temp;
//     temp = temp->next;
//   }
//     return NULL;
// }
Node*intersectionLL(Node*h1, Node*h2){
  Node*temph1 = h1;
  Node*temph2 = h2;
    while(temph1 != temph2){
      temph1 = temph1->next;
      temph2 = temph2->next;
      if(temph1 == temph2) return temph1;
      if(temph1 == NULL) temph1 = h1;
      if(temph2 == NULL) temph2 = h2;
    }
    return temph1;
}
int main(){
  Node*head = new Node(1);
  head->next = new Node(3);
  head->next->next = new Node(1);
  Node*c = new Node(10);
  head->next->next->next = c;
  head->next->next->next->next = new Node(5);
  Node*head2 = new Node(3);
  head2->next = c;
  Node*temp =intersectionLL(head,head2);
  cout<<temp->data;
  return 0;
}
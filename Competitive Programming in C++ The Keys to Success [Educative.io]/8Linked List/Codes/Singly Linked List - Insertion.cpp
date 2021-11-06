#include<iostream>
using namespace std;
struct Node {
  int val;
  Node* next;

  Node(int val) {
    this -> val = val;
  }
};
void print_list(Node* head) {
  struct Node* pCrawl = head;
  cout << " -> ";
  while (pCrawl != NULL) {
    cout << (pCrawl -> val) << " -> ";
    pCrawl = pCrawl -> next;
  }
  cout << "\n";
}
void insert_at_head(Node* &head, int val) {
  if (head == NULL) {     // Empty List
    head = new Node(val);
    return;
  }
  Node* newNode = new Node(val);  
  newNode -> next = head;        
  head = newNode;                 
}
int main() {
  Node* head = NULL;
  print_list(head);
  insert_at_head(head, 3); print_list(head);
  insert_at_head(head, 2); print_list(head);
  insert_at_head(head, 1); print_list(head);
}

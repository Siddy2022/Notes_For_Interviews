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


void insert_at_position(Node* &head, int val, int pos) {
  struct Node* pCrawl = head;
  for (int i = 0; i < pos - 1; i++)
    pCrawl =  pCrawl -> next;

  Node *A = pCrawl;
  Node *B = pCrawl->next;
  Node* C = new Node(val);
  A -> next = C;
  C -> next = B;
}


int main() {
  Node* head = NULL;
  print_list(head);
  insert_at_head(head, 4); print_list(head);
  insert_at_head(head, 1); print_list(head);
  insert_at_position(head, 2, 1); print_list(head);  // 0-based position
  insert_at_position(head, 3, 2); print_list(head);
}

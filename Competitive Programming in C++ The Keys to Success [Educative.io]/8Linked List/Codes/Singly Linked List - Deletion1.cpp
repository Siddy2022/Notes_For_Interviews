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

void insert_at_end(Node* &head, int val) {
  // List is empty
  if (head == NULL) {   
    head = new Node(val);
    return ;
  } 
  struct Node* pCrawl = head;
  while(pCrawl->next != NULL) {        // iterate to last node
    pCrawl =  pCrawl -> next;
  }
  pCrawl -> next = new Node(val);
}

void delete_at_position(Node* &head, int pos) {
  struct Node* A = head;
  for (int i = 0; i < pos - 1; i++) {
    A =  A->next;
  }
  Node *C = A->next;
  Node *B = A->next->next;
  A->next = B;
  delete C;
}

int main() {
  Node* head = NULL;
  insert_at_end(head, 1); 
  insert_at_end(head, 2); 
  insert_at_end(head, 3); 
  insert_at_end(head, 4); 
  insert_at_end(head, 5);

  print_list(head);
  delete_at_position(head, 2); print_list(head);  // 0-based position
  delete_at_position(head, 3); print_list(head);  
}
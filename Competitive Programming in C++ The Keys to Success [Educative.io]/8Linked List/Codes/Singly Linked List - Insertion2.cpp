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


int main() {
  Node* head = NULL;
  print_list(head);
  insert_at_end(head, 1); print_list(head);
  insert_at_end(head, 2); print_list(head);
  insert_at_end(head, 3); print_list(head);
}

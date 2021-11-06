#include <bits/stdc++.h>
using namespace std;

struct Stack {
  static const int SZ = 4;
  int arr[SZ];
  int top;

  Stack() {
    top = -1;
  }

  bool isEmpty() {
    return (top < 0);
  }

  void push(int x) {
    if (top == SZ - 1) {
      cout << "Stack Overflow";
      return;
    }
    arr[++top] = x;
  }

  int peek() {
      if (top < 0) {
        cout << "Empty Stack";
        return -1;
      }
      return arr[top];
  }

  int pop() {
    if (top < 0) {
      cout << "Stack Underflow";
      return - 1;
    }
    return arr[top--];
  }

  void print_stack() {
    for (int i = 0; i <= top; i++)
      cout << arr[i] << " <- ";
    cout << "\n";
  }
};  

int main() {
  Stack stack;
  stack.print_stack();
  stack.push(1);  stack.print_stack();
  stack.push(2);  stack.print_stack();
  stack.push(3);  stack.print_stack();
  stack.pop();  stack.print_stack();
  stack.pop();  stack.print_stack();
  return 0;
}
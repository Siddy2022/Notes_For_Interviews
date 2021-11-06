#include <bits/stdc++.h>
using namespace std;

void min_heapify_bottom_up(int arr[], int N, int idx) {
  if (idx == 0) 
    return;
  int parent = (idx - 1) / 2;
  if (arr[parent] > arr[idx]) {
    swap(arr[parent], arr[idx]);
  }
  min_heapify_bottom_up(arr, N, parent);
}

void build_heap(int arr[], int N) {
  for (int i = 0; i < N; i++) {
    min_heapify_bottom_up(arr, N, i);
  }
}
int main() {
  srand (time(NULL));
  int N = 10;
  int arr[N];
  for(int i = 0; i < N; i++)
    arr[i] = rand() % 32 + 1;
  
  for(int i = 0; i < N; i++) cout << arr[i]<<" "; cout << "\n";
  build_heap(arr, N);
  for(int i = 0; i < N; i++) cout << arr[i]<<" "; cout << "\n";
  return 0;
}
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kth_largest(vector<int> &v, int K) {  
  priority_queue<int, vector<int>, greater<int> > pq;
  for (int i = 0; i < v.size(); i++){
    if (pq.size() < K) {
      pq.push(v[i]);
    }
    else {
      if (v[i] > pq.top()) {
        pq.pop();
        pq.push(v[i]);
      }
    }
  }
  int answer = pq.top();
  while (!pq.empty()) {
    answer = min(answer, pq.top());
    pq.pop();
  }
  return answer;
}

int main() {
  int N = 5;
  vector<int> v = {3, 6, 5, 1, 4};

  cout<<kth_largest(v, 1)<<"\n";
  cout<<kth_largest(v, 4)<<"\n";

  return 0;
}
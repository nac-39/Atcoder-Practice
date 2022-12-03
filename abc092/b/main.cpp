#include<bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N, D, X;
  cin >> N >> D >> X;
  vector<int> A(N);
  for(int i=0;i<N;i++) cin >> A.at(i);

  int all=X;
  for(int i=0;i<N;i++){
    int j=0;
    while(j * A.at(i) + 1 < D){
      all += 1;
      j++;
    }
  }

  cout << all << endl;
  return 0;
}

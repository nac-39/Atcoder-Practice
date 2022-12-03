#include<bits/stdc++.h>
using namespace std;

int main() {
  int h,w;
  cin >> h >> w;
  vector<vector<int>> a(h);
  for(int i=0; i<h; i++){
    for(int j=0;j<w;j++){
      int n;
      cin >> n;
      a.at(j).push_back(n);
    }
  }
  for(int i=0;i<w;i++){
    for(int j=0;j<h;j++){
      cout << a.at(i).at(j) ;
      if(j+1!=h)cout << ' ';
    }
    cout << endl;
  }
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main() {
  int N, big=0;
  cin >> N;
  map<string, int> mp;
  string ans;
  vector<string> S(N);
  for (int i=0;i<N;i++){
    cin >> S.at(i);
    // cout << S.at(i) << endl;
    if(!mp[S.at(i)]){
      mp.insert({S.at(i), 0});
    }
    mp[S.at(i)] += 1;
    // cout << mp[S.at(i)] << endl;
    if(mp[S.at(i)]>big){
      // cout << "big: " << big << "ans: " << ans << endl;
      big = mp[S.at(i)];
      ans = S.at(i);
    }
  }
  cout << ans << endl;
  return 0;
}

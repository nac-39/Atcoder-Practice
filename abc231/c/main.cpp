// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//   int N, Q, count=0;
//   cin >> N >> Q;
//   vector<int> A(N);
//   vector<int> x(Q);
//   for(int i=0;i<N;i++)cin >> A.at(i);
//   for(int i=0;i<Q;i++)cin >> x.at(i);

//   sort(A.begin(), A.end());
//   // sort(x.begin(),x.end());

//   for(int i=0;i<Q;i++){
//     for(int j=0;j<N;j++){
//       if(A.at(j)>=x.at(i)){
//         count++;
//       }
//     }
//     cout << count << endl;
//     count = 0;
//   }
  
//   return 0;
// }

/*
二分探索を使うことで高速化する！！
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
  int N, Q, count=0;
  cin >> N >> Q;
  vector<int> A(N);
  vector<int> x(Q);
  for(int i=0;i<N;i++)cin >> A.at(i);
  // for(int i=0;i<Q;i++)cin >> x.at(i);

  sort(A.begin(), A.end());
  // sort(x.begin(),x.end());

  for(int i=0; i<Q; i++){
    int x; cin >> x;
    int ok=N, ng=-1;
    while(ok - ng > 1){//ok>ng+1の間続ける
      // md(middle)を設定する
      int md = (ok + ng)/2;
      // 真ん中の数がxよりも大きければokを真ん中の数字にする
      if(A.at(md) >= x) ok = md;
      // そうでなければngを真ん中の数字にする
      else ng = md;
    }
    cout << N - ok << endl;
  }
  return 0;
}
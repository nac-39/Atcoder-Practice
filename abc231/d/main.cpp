#include<bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N, M;
  cin >> N >> M;
  Graph g(N+1);
  string flag = "Yes";
  vector<int> deg(N, 0);
  // cout << g.size() << " " << g.at(0).size() << endl;
  for(int i=0;i<M;i++){
    int a, b;
    cin >> a >> b;
    a--; b--;// インデックスを0から始めるようにする
    //　無向グラフにする
    g.at(a).push_back(b);
    g.at(b).push_back(a);
    deg.at(a)++; deg.at(b)++;// 出自数（何番目のノードから生えているか）
  }

  // // その人が三回以上指名されているか調べる→これだとエラー
  // vector<int> p(N);
  // for(int i=0;i<M;i++){
  //   p.at(g[i].at(i))++;
  // }
  // for(int i=0;i<N;i++){
  //   if(p.at(i)>2){
  //     flag="No";
  //   }
  // }

  for(int d: deg){
    if(d>=3){
      flag = "No";
    }
  }
  queue<int> Q; // Queueを定義する
  for(int i=0;i<M;i++)if(deg[i]==1) Q.push(i);// 出自数が1の頂点をキューに追加する

  // 探索開始
  // vector<bool> isPushed(M, false);
  while(!Q.empty()){
    int pos = Q.front();
    Q.pop();//Qの先頭を取り出す

    //isPushed.at(pos) = true;// キューに追加されたものを覚えておく

    // posに伸びている頂点等を探索する
    for(int nv : g.at(pos)){// 範囲for文
      // 辺(nv, pos)を削除する
      --deg.at(nv);
      if(deg.at(nv)==1) Q.push(nv);
    }
  }
  for(int i=0;i<M;i++){
    if(deg.at(i)>=2)flag="No";break;
  }
  cout << flag << endl;

  return 0;
}

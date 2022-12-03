#include<bits/stdc++.h>
using namespace std;


bool isCicle(string s){
  int mid=0;
  if(s.length()%2==0){
    mid=s.length()/2;// midは真ん中の文字の配列番号になる
    s.insert(mid,"/");// 真ん中に文字を追加する
  }else{
    mid=(s.length()-1)/2;
  }
  for(int i=0;i<mid;i++){
    if(s.at(mid+i)==s.at(mid-i)) continue;
    else return false;
  }
  return true;
}

int num_last_a(string s){
  int count=0;
  for(int i=s.length()-1;i>=0;i--){
    if(s.at(i)=='a'){
      count++;
    }else{
      break;
    }
  }
  return count;
}
int main() {
  string s, flag="Yes";
  cin >> s;
  int num_a=num_last_a(s);
  if(!isCicle(s)){
    if(num_a>0){
      for(int i=0;i<num_a;i++){
          s.insert(0,"a");
          if(isCicle(s)){
            break;
          }
          if(i==num_a-1){
            flag = "No";
            break;
          }
        }
    }else{
      flag="No";
    }
  }
  cout << flag << endl;
  return 0;
}

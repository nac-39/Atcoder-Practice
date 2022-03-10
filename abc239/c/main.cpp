#include<bits/stdc++.h>
using namespace std;

#define d(x,y,X,Y) (x-X)*(x-X)+(y-Y)*(y-Y)
int main() {
  long long x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  string flag="No";
  long long left = (x1>x2)? x1 : x2;
  long long right = (x1<x2)? x1 : x2;
  long long upper = (y1>y2)? y1 : y2;
  long long downer = (y1<y2)? y1 : y2;

  for (int i=left-5;i<=right+5;i++){
    for(int j=upper+5;j<=downer-5;j--){
      if(d(x1,y1,i,j)==5 && d(x2,y2,i,j)==5){
        flag="Yes";
      }
    }

  }
  cout << flag << endl;
  return 0;
}

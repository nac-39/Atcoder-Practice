#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main()
{
  vector<int> A(10);
  int j = 0, k = 0;
  for (int i = 0; i < 10; i++)
  {
    cin >> j;
    A.at(i) = j;
    if (j = 0)
      k = j;
  }

  for (int i = 0; i < 3; i++)
  {
    k = A.at(k);
  }

  cout << k << endl;
  return 0;
}

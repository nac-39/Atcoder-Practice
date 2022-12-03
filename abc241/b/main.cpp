#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> B(M);

  for (int i = 0; i < N; i++)
    cin >> A.at(i);
  for (int i = 0; i < M; i++)
    cin >> B.at(i);

  bool flag = true;
  for (int b = 0; b < M; b++)
  {
    for (int a = 0; a < N; a++)
    {
      if (B.at(b) == A.at(a))
      {
        A.at(a) = 0;
        B.at(b) = 0;
      }
    }
  }

  for (int i = 0; i < M; i++)
  {
    if (B.at(i) != 0)
    {
      cout << "No" << endl;
      flag = false;
      break;
    }
  }
  if (!flag)
    return 0;
  cout << "Yes" << endl;
  return 0;
}

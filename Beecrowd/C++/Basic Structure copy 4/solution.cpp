#include <bits/stdc++.h>
using namespace std;

int main()
{

  int size;
  cin >> size;
  vector<pair<int, int>> vec(size);

  for (int i = 0; i < vec.size(); i++)
  {

    vec[i].second = i;
    cin >> vec[i].first;
  }

  sort(vec.begin(), vec.end());
  cout << vec[0].first + 1 << endl;

    return 0;
}

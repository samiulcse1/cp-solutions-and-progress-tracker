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
  cout << vec[0].second + 1 << endl;

  return 0;
}

// MORE EFFICIENT

// int main()
// {
//   int n, x, mn = 21, ans = 1;
//   cin >> n;

//   for (int i = 1; i <= n; i++)
//   {
//     cin >> x;

//     if (x < mn)
//     {
//       mn = x;
//       ans = i;
//     }
//   }

//   cout << ans << '\n';
// }
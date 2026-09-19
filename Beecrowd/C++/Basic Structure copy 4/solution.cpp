#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  if (a < b && ((b <= c)))
  {
    cout << ":)" << endl;
  }
  else if (a < b && ((b >= c)))
  {
    cout << ":(" << endl;
  } /////////////////
  else if (a < b && (b < c) && (b - a) > (c - b))
  {
    cout << ":(" << endl;
  }
  else if (a < b && (b < c) && (c - b) >= (b - a)) // fourth figure
  {
    cout << ":)" << endl;
  }
  else if (a < b && (b < c) && (c - b) >= (b - a)) // fourth figure
  {
    cout << ":)" << endl;
  }

  return 0;
}

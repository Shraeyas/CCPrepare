#include <iostream>

using namespace std;

int solve(int n)
{
  int sum = 0;

  while((int)(n/10) != 0)
  {
    while(n)
    {
      sum += n % 10;
      n /= 10;
    }

    n = sum;
    sum = 0;
  }

  return n;
}

int main()
{
  //freopen("in.in", "r", stdin);

  int t;
  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;

    int ans = solve(n);
    if(ans == 9)
    {
      ans = 0;
    }

    cout << ans + 1 << endl;
  }
}

#include <iostream>

using namespace std;

int main()
{
  //freopen("in.in", "r", stdin);

  int t;
  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;

    string s;
    cin >> s;

    long long ans = 0, count = 0;

    for(int i = 0 ; i < n ; i++)
    {
      if(s[i] == '1')
      {
        ans++;
        count++;
      }
    }

    ans = ans * (ans - 1)/2;
    cout << ans + count << endl;
  }
}

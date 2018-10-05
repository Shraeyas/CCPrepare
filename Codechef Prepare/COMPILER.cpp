#include <iostream>

using namespace std;

int main()
{
  //freopen("in.in", "r", stdin);

  int t;
  cin >> t;

  while(t--)
  {
    string s;
    cin >> s;

    int ans = 0, len = 0, sum = 0;

    for(int i = 0 ; i < s.length() ; i++)
    {
      if(ans == 0)
      {
        len += 2 * sum;
        sum = 0;
      }

      if(s[i] == '>')
      {
        if(ans == 0)
        {
          break;
        }

        else
        {
          ans--;
        }
      }

      else
      {
        sum++;
        ans++;
      }
    }

    if(ans == 0)
    {
      len += 2 * sum;
    }

    cout << len << endl;
  }
}

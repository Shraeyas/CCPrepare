#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
  //freopen("in.in", "r", stdin);

  int t;
  cin >> t;

  while(t--)
  {
    stack <char> stk;
    string s, ans;
    cin >> s;

    ans = "";

    for(int i = 0 ; i < s.length() ; i++)
    {
      if(isalpha(s[i]))
      {
        ans += s[i];
      }

      else if(s[i] == ')')
      {
        ans += stk.top();
        stk.pop();
      }

      else
      {
        if(s[i] != '(')
        stk.push(s[i]);
      }
    }



    cout << ans << endl;
  }
}

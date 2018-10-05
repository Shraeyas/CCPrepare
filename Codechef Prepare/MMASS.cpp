#include <iostream>
#include <stack>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);

  string s;
  stack <char> stk;

  while(cin >> s)
  {
    int ans = 0, sum = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
      if(s[i] == ')')
      {
        while(stk.top() != '(')
        {
          sum += stk.top() - '0';
          stk.pop();
        }

        stk.pop();
        sum = sum * (s[++i] - '0');
        stk.push(sum + '0');
        sum = 0;
      }

      else
      {
        if(s[i] == '(')
        {
          stk.push(s[i]);
        }

        else
        {
          if(s[i] == 'H')
          stk.push(1 + '0');

          if(s[i] == 'C')
          stk.push(12 + '0');

          if(s[i] == 'O')
          stk.push(16 + '0');
        }
      }
    }

    cout << stk.top() - '0' << endl;
  }
}

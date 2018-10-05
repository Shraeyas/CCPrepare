#include <iostream>
#include <stack>

using namespace std;

int main()
{
  int n;
  while(cin >> n, n)
  {
    stack <int> p, s;

    for(int i = 0 ; i < n ; i++)
    {
      int x;
      cin >> x;

      while(p.top() <= s.top())
      {
        p.push(s.top());
        s.pop();
      }

      if(p.isempty() || p.top() <= x)
      {
        p.push(x);
      }

      if(p.top() > x)
      {
        if(s.top() < x)
        {
          cout << "no" << endl;
          goto label;
        }
        s.push(x);
      }
    }

    cout << "yes" << endl;
    label:;
  }
}

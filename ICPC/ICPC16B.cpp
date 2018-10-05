#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while(t--)
  {
    int n, one = 0, zero = 0, none = 0;
    cin >> n;

    for(int i = 0 ; i < n ; i++)
    {
      long x;
      cin >> x;

      if(x == 1)
      {
        one++;
      }

      if(x == 0)
      {
        zero++;
      }

      if(x == -1)
      {
        none++;
      }
    }

    if(  one + 1 == n
      || one == n
      || zero + 1 == n
      || zero == n)
    {
      cout << "yes" << endl;
    }

    else if(zero + one == n || zero + one + 1 == n)
    {
      cout << "yes" << endl;
    }

    else if(zero + one + none == n && one >= 1)
    {
      cout << "yes" << endl;
    }

    else
    {
      cout << "no" << endl;
    }
  }
}

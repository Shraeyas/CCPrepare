#include <iostream>
#include <vector>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);

  int t;
  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;

    vector <int> v;

    for(int i = 0 ; i < n ; i++)
    {
      int x;

      cin >> x;
      v.push_back(x);
    }

    for(int i = n - 2 ; i >= 0 ; i--)
    {
      if(v[i + 1] > v[i])
      {
        for(int j = n - 1 ; j >= i + 1 ; j--)
        {
          if(v[j] > v[i])
          {
            v[j] = v[i] + v[j];
            v[i] = v[j] - v[i];
            v[j] = v[j] - v[i];

            for(int k = 0 ; k <= i ; k++)
            {
              cout << v[k];
            }

            for(int k = n - 1 ; k > i ; k--)
            {
              cout << v[k];
            }

            cout << endl;
            goto label;
          }
        }
      }
    }

    cout << -1 << endl;
    label:;
  }
}

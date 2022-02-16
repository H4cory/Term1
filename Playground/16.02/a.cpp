#include <iostream>

using namespace std;

int main()
{ int a, b, k, n, s=0;
  cin >> a >> b >> k;
  for(int i=0; i<=9; i++)
  { n = 100*a + 10*i + b;
    if (n%k ==0) s++;
  }
  cout << s << endl;

  return 0;
}

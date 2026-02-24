#include <iostream>

using namespace std;

int main() {
    int n;
     cin >> n;

    int _min = 1000000000, _max = 0;
      for (int i = 0; i < n; i++) {
           cout << "\n i="<<i<<" "; // debug line
           int x;
            cin >> x;
             cout << " x="<<x; // debug line
              _min = min(_min, x);
              _max = max(_max, x);
      }

       if (_min == _max)
             cout << "No";
       else  cout << "Yes";

        return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        if (i % 3 == 0 && i % 5 == 0) continue;
        else if (i % 3 == 0 && i % 5 != 0) cout << "Fizz ";
        else if (i % 3 != 0 && i % 5 == 0) cout << "Buzz ";
        else cout << i << " ";
    }
}
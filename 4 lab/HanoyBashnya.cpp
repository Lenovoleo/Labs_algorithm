#include <iostream>
using namespace std;

void bashnya(int n, int source, int auxiliary, int target)
{
    if (n == 1)
    {
        cout << "1 " << source << " " << target << endl;
    }
    else
    {
        bashnya(n - 1, source, target, auxiliary);
        cout << n << " " << source << " " << target << endl;
        bashnya(n - 1, auxiliary, source, target);
    }
}

int main()
{
    int n;
    cin >> n;

    bashnya(n, 1, 2, 3);

    return 0;
}

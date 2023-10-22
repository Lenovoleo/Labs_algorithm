#include <iostream>
using namespace std;

int fibonacci(int N)
{
    if (N <= 1)
    {
        return N;
    }
    else
    {
        return fibonacci(N - 1) + fibonacci(N - 2);
    }
}

int main()
{
    int N;
    cin >> N;

    int result = fibonacci(N);
    cout << result << endl;

    return 0;
}

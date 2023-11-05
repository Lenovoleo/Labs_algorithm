#include <iostream>
#include <deque>

using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0;
    deque<int> left, right;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
            right.push_front(x);
        else
            left.push_back(x);
        x++;
    }
    for (int i = 0; i < left.size(); i++)
        cout << left[i] << " ";
    cout << x << " ";
    for (int i = 0; i < right.size(); i++)
        cout << right[i] << " ";
    cout << endl;
}
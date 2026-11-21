#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers;
    int number;

    while (cin >> number && number != 0)
    {
        numbers.push_back(number);
    }

    for (int i = static_cast<int>(numbers.size()) - 1; i >= 0; --i)
    {
        if (i != static_cast<int>(numbers.size()) - 1)
        {
            cout << ' ';
        }
        cout << numbers[i];
    }
    cout << '\n';

    return 0;
}
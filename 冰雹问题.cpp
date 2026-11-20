#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;
    int number;
    cin >> number;
    if (number < 1 || number > 100)
    {
        return 0;
    }

    while (number != 1)
    {
        numbers.push_back(number);
        if (number % 2 == 1)
        {
            number = number * 3 + 1;
        }
        else
        {
            number /= 2;
        }
    }

    numbers.push_back(1);

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
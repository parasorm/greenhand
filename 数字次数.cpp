#include <iostream>
using namespace std;

int main()
{
    int M;
    int N;
    long long counts[10] = {0}; 
    cin >> M >> N;

    for (int number = M; number <= N; ++number)
    {
        int value = number;

        do
        {
            ++counts[value % 10];
            value /= 10;
        } while (value > 0);
    }

    for (int digit = 0; digit < 10; ++digit)
    {
        if (digit > 0)
        {
            cout << ' ';
        }
        cout << counts[digit];
    }

    cout << '\n';
    return 0;
}
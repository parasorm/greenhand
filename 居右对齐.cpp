#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cin >> a >> b >> c;
    cout << setw(8) << right << a << ' '
         << setw(8) << right << b << ' '
         << setw(8) << right << c << '\n';

    return 0;
}
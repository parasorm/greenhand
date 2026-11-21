#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> beauty(n);
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> beauty[i];
    }    
    for (int i = 0; i < n; ++i)
    {
        int count = 0;
        for (int j = 0; j < i; ++j)
        {
            if (beauty[j] < beauty[i])
            {
               ++count; 
            }    
            
        }
        numbers[i] = count;
    }    
    
    for (int i = 0; i < n; ++i) 
    {
        if (i != 0)
        {
            cout << ' ';
        }
        cout << numbers[i];
    }
    cout << '\n';
    return 0;
}
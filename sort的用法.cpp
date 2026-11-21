#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student
{
    string name;
    int score;
};

void print(const vector<int>& values)
{
    for (int i = 0; i < static_cast<int>(values.size()); ++i)
    {
        if (i > 0)
        {
            cout << ' ';
        }
        cout << values[i];
    }
    cout << '\n';
}

int main()
{
    vector<int> numbers = {5, 1, 4, 2, 3};

    sort(numbers.begin(), numbers.end());
    cout << "Ascending: ";
    print(numbers);

    sort(numbers.begin(), numbers.end(), greater<int>());
    cout << "Descending: ";
    print(numbers);

    sort(numbers.begin(), numbers.begin() + 3);
    cout << "Partial range: ";
    print(numbers);

    vector<int> copy = numbers;
    sort(copy.begin(), copy.end(), [](int a, int b)
    {
        return a % 10 < b % 10;
    });
    cout << "Custom comparator: ";
    print(copy);

    array<int, 5> arrayValues = {5, 1, 4, 2, 3};
    sort(arrayValues.begin(), arrayValues.end());
    cout << "Array: ";
    for (int i = 0; i < static_cast<int>(arrayValues.size()); ++i)
    {
        if (i > 0)
        {
            cout << ' ';
        }
        cout << arrayValues[i];
    }
    cout << '\n';

    int cArray[] = {5, 1, 4, 2, 3};
    sort(cArray, cArray + 5);
    cout << "C-style array: ";
    for (int value : cArray)
    {
        cout << value << ' ';
    }
    cout << '\n';

    vector<Student> students =
    {
        {"Li", 88},
        {"Zhang", 95},
        {"Wang", 88}
    };

    sort(students.begin(), students.end(),
         [](const Student& a, const Student& b)
         {
             if (a.score == b.score)
             {
                 return a.name < b.name;
             }
             return a.score > b.score;
         });

    cout << "Struct sorting:\n";
    for (const Student& student : students)
    {
        cout << student.name << ' ' << student.score << '\n';
    }

    return 0;
}
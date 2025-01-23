#include <iostream>
#include <vector>
using namespace std;

int sum(const vector<vector<int>> a)
{
    int total = 0;
    for (int row = 0; row < a.size(); row++)
    {
        for (int column = 0; column < a[row].size(); column++)
        {
            total += a[row][column];
        }
    }

    return total;
}

int main()
{
    const int ROW_SIZE = 3;
    const int COLUMN_SIZE = 4;
    vector<int> m;
    const int ROW_SIZE = 3;
    const int COLUMN_SIZE = 3;
    vector<vector<int>> m[ROW_SIZE];
    for (unsigned int i = 0; i < ROW_SIZE; i++) {
        m[i] = vector<int>(COLUMN_SIZE);
    }
    cout << "Enter " << ROW_SIZE << " rows and "
        << COLUMN_SIZE << " columns: " << endl;
    for (int i = 0; i < ROW_SIZE; i++)
        for (int j = 0; j < COLUMN_SIZE; j++)
            m[i][j] = i + j;

    cout << "\nSum of all elements is " << sum(&m[0][0], ROW_SIZE, COLUMN_SIZE) << endl;

    return 0;
}
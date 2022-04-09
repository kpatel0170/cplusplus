#include <iostream>

using namespace std;

int main()
{
    int num;            // number of tests
    cin >> num;
    for (int test = 0; test < num; test++)     // handling the test cases
    {
        int n, m;
        cin >> n >> m;
        int maxCount = 0;

        for (int row = 0; row < n; row++)   // handle the table row
        {
            char table[m];
            int count = 0;
            for (int column = 0; column < m; column++)  // handles table column and checks the content
            {
                cin >> table[column];
                if (table[column] == '#')       count++;
            }
            maxCount = max(maxCount,count);
        }
        cout << maxCount << endl;
    }
    return 0;
}

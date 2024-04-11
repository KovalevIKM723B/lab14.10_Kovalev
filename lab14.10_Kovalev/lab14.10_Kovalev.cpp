#include <iostream>
using namespace std;

int temp = -1;

void Search(int a[25], int b)
{
    for (int i = 0; i < 25; i++)
    {
        if (a[i] == b)
        {
            temp = i;
            cout << b << " = 2 ^ " << temp;
        }
    }
    if (temp == -1)
    {
        cout << "There is no such degree 2\n";
    }
}
int main()
{
    int a[25], b;
    for (int i = 0; i < 25; i++)
    {
        a[i] = pow (2,i);
    }
    cout << "Enter value\n";
    cin >> b;
    Search(a, b);
}
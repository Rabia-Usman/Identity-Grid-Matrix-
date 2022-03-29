#include <iostream>
using namespace std;
const int SIZE = 4;
int num[SIZE][SIZE];
int size;
void input();
bool isidentityLeft();
bool isidentityRight();
bool isidentity();
int main()
{
    input();
    bool tr = isidentity();
    if (tr = true)
    {
      cout << tr;
      cout << "Identity.";
    }
    else
    {
        cout << "Not Identity.";
    }
    
    
}
void input()
{
    cout << "Enter Size of grid : \n";
    cin >> size;
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            cout << "Enter your input : \n";
            cin >> num[r][c];
        }
    }
}
bool isidentityLeft()
{
    bool tr = false;
    int count = 0, count2 = 0;
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            if (r == c)
            {
                if (num[r][c] == 1)
                { //num[r][r]
                    count = count + 1;
                }
            }
            else if (num[r][c] == 0)
            {
                count2 = count2 + 1;
            }
        }
    }
    if (count == size && count2 == (size * size) - size)
    {
        tr = true;
    }
    return tr;
}
bool isidentityRight()
{
    bool tr = false;
    int count = 0, count2 = 0;
    for (int r = 0; r < size; r++)
    {
        for (int c = size; c > 0; c--)
        {
            if (num[r][c] == 1)
            { //num[r][r]
                count = count + 1;
            }
            else if (num[r][c] == 0)
            {
                count2 = count2 + 1;
            }
        }
    }
    if (count == size && count2 == (size*size)-size)
    {
        tr = true;
    }
    return tr;
}
bool isidentity()
{
    bool tr = false;
    if (isidentityLeft() == 1 || isidentityRight() == 1)
    {
        tr = true;
    }
    return tr;
}
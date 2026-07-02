#include <iostream>
using namespace std;
int search(int arr[4][4])
{

    for (int j = 0; j < 4; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < 4; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = 0; i < 4; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int spiral(int arr[4][4], int row, int col)
{
    int tr = 0;
    int br = row - 1;
    int lc = 0;
    int rc = col - 1;
    while (tr <= br && lc <= rc)
    {
        // printing the top row
        for (int i = 0; i <= rc; i++)
        {
            cout << arr[tr][i] << " ";
        }
        tr++;
        // printing right col
        for (int i = 0; i <= rc; i++)
        {
            cout << arr[i][rc] << " ";
        }
        rc--;
        // printing bottom row
        for (int i = 0; i >= lc; i--)
        {
            cout<<arr[br][i]<<" ";
        }
        tr--;
        //printing left col;
        for(int i=br; i>=tr; i--){
            cout<<arr[i][lc]<<" ";
        }
        lc++;
    }
}

int main()

{
    int arr[4][4] = {1, 2, 3, 40, 5, 6, 7, 8, 9, 10, 12, 14, 15, 43, 2, 5};
    // int sum = search(arr);
    // cout<<sum;
    // search(arr);
    spiral(arr, 4, 4);
}
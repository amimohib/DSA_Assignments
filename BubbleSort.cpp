#include <iostream>
using namespace std;
void BubbleSort(int arr[], int size)
{
    int temp, count;
    for (int j = 0; j < size; j++)
    {
        count = 0;
        for (int i = 0; i < (size - 1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                count++;
            }
        }
        if (count == 0)
        {
            break;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n = 8;
    int arr[n] = {7, 2, 5, 4, 1, 6, 0, 3};
    BubbleSort(arr, n);
    return 0;
}
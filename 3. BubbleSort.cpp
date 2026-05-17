#include <iostream>
using namespace std;
void BubbleSort(int arr[], int size)
{
    int temp, count;
    for (int j = 0; j < size-1; j++)
    {
        count = 0;
        for (int i = 0; i < (size - 2); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                count++;
            }
        }
        for (int i = 0; i < (size-1); i++)
		{
        cout << arr[i] << " ";
		}
		cout<<endl<<endl;
        if (count == 0)
        {
            break;
        }
    }

    
}
int main()
{
    int n = 8;
    int arr[n] = {64, 34, 25, 12, 22, 11, 90};
    for (int i = 0; i < (n-1); i++)
	{
       cout << arr[i] << " ";
	}
	cout<<endl<<endl;
    BubbleSort(arr, n);
    return 0;
}

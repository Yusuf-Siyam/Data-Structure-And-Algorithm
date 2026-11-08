
#include<iostream>
using namespace std;

void selection_sort_desc(int arr[], int n)
{
    int min_value, min_index;

    for(int i = n-1; i >= 1; i--)
    {
        min_value = arr[0];
        min_index = 0;

        for(int j = 0; j <= i; j++)
        {
            if(arr[j] < min_value)
            {
                min_value = arr[j];
                min_index = j;
            }
        }

        swap(arr[min_index], arr[i]);
    }
}

void print_arr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()

{
    int arr[] = {55,-11,22,-33,44,-77,12,99};
    int n = 8;

    selection_sort_desc(arr,n);
    print_arr(arr,n);

    return 0;
}

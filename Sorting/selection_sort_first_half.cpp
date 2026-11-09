#include<iostream>
using namespace std;

void selection_sort_first_half(int arr[], int n)
{
    int max_value, max_index;

    for(int black = n/2 - 1; black >= 1; black--)
    {
        max_value = arr[0];
        max_index = 0;

        for(int red = 0; red <= black; red++)
        {
            if(arr[red] > max_value)
            {
                max_value = arr[red];
                max_index = red;
            }
        }

        swap(arr[black], arr[max_index]);
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

    selection_sort_first_half(arr,n);
    print_arr(arr,n);

    return 0;
}
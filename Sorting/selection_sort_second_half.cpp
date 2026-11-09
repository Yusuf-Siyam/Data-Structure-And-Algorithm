#include<iostream>
using namespace std;

void selection_sort_second_half(int arr[], int n)
{
    int max_value, max_index;

    for(int black = n-1; black > n/2; black--)
    {
        max_value = arr[n/2];
        max_index = n/2;

        for(int red = n/2; red <= black; red++)
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

    selection_sort_second_half(arr,n);
    print_arr(arr,n);

    return 0;
}
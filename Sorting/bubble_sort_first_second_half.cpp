#include<iostream>
using namespace std;

void bubble_sort_first_half(int arr[], int n)
{
    for(int black = (n/2)-1; black > 0; black--)
    {
        for(int red = 0; red < black; red++)
        {
            if(arr[red] > arr[red+1])
            {
                swap(arr[red], arr[red+1]);
            }
        }
    }
}

void bubble_sort_second_half(int arr[], int n)
{
    for(int black = n-1; black > (n/2); black--)
    {
        for(int red = n/2; red < black; red++)
        {
            if(arr[red] > arr[red+1])
            {
                swap(arr[red], arr[red+1]);
            }
        }
    }
}

void print_arr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int n = 8;
    int arr[] = {33,22,55,11,44,77,66,88};

    bubble_sort_first_half(arr,n);
    bubble_sort_second_half(arr,n);

    print_arr(arr,n);

    return 0;
}
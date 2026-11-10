#include<iostream>
using namespace std;

int count_freq(int arr[], int n, int element)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            count++;
        }
    }

    return count;
}

void bubble_sort_freq(int arr[], int n)
{
    for(int black = n-1; black > 0; black--)
    {
        for(int red = 0; red < black; red++)
        {
            if(count_freq(arr,n,arr[red]) >
               count_freq(arr,n,arr[red+1]))
            {
                swap(arr[red], arr[red+1]);
            }
        }
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
    int n = 7;
    int arr[] = {33,22,55,11,44,77,66};

    bubble_sort_freq(arr,n);
    print_arr(arr,n);

    return 0;
}
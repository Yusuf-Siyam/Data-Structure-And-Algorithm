#include<iostream>
#include<cmath>
using namespace std;

// Bubble Sort - Ascending
void bubble_sort_asc(int arr[], int n)
{
    for(int black = n-1; black > 0; black--)
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

// Minimum Difference
int minimum_difference(int arr[], int n)
{
    int min_diff = 999999;

    for(int i = 0; i < n-1; i++)
    {
        int diff = abs(arr[i] - arr[i+1]);

        if(diff < min_diff)
        {
            min_diff = diff;
        }
    }

    return min_diff;
}

// Print Array
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
    int n = 5;
    int arr[] = {4,9,1,32,13};

    bubble_sort_asc(arr,n);

    print_arr(arr,n);

    cout << "Minimum Difference: "
         << minimum_difference(arr,n) << endl;

    return 0;
}
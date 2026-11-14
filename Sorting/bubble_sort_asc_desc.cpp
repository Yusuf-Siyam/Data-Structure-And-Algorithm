#include<iostream>
using namespace std;

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

void bubble_sort_desc(int arr[], int n)
{
    for(int black = n-1; black > 0; black--)
    {
        for(int red = 0; red < black; red++)
        {
            if(arr[red] < arr[red+1])
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

    bubble_sort_asc(arr,n);
    cout << "Ascending Order: ";
    print_arr(arr,n);

    bubble_sort_desc(arr,n);
    cout << "Descending Order: ";
    print_arr(arr,n);

    return 0;
}
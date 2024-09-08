#include <iostream>
#include <vector>

using namespace std;

vector<int> InsertionSort(vector<int> Num_arr)
{
    int len = Num_arr.size();

    if (len < 2)
    {
        return Num_arr; // Return early if there's nothing to sort
    }

    // Start insertion sort
    for (int i = 1; i < len; i++)
    {
        int key = Num_arr[i];
        int j = i - 1;

        // Move elements of Num_arr[0..i-1] that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && Num_arr[j] > key)
        {
            Num_arr[j + 1] = Num_arr[j];
            j--;
        }
        Num_arr[j + 1] = key;
    }

    return Num_arr; // Ensure this is reached after sorting
}

int main()
{
    // Hard-coded array for sorting
    vector<int> Num_arr = {5, 4, 3, 2, 1};

    // Calling the sort function
    Num_arr = InsertionSort(Num_arr);

    // Printing the sorted array
    for (int i = 0; i < Num_arr.size(); i++)
    {
        cout << Num_arr[i] << " ";
    }
}

#include <iostream>
#include <vector>

using namespace std;

vector<int> SelectionSort(vector<int> Num_arr)
{
    int n = Num_arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        // Assume the minimum is the first element
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            // Find the minimum element in the unsorted part
            if (Num_arr[j] < Num_arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(Num_arr[i], Num_arr[minIndex]);
    }
    return Num_arr;
}

int main()
{
    // Hard-coded array for sorting
    vector<int> Num_arr = {5, 4, 3, 2, 1};

    // Calling the sort function
    Num_arr = SelectionSort(Num_arr);

    // Printing the sorted array
    for (int i = 0; i < Num_arr.size(); i++)
    {
        cout << Num_arr[i] << " ";
    }
    cout << endl;
}

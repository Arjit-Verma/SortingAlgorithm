#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort Function
vector<int> BubbleSort(vector<int> Num_arr)
{
    for (int i = 0; i < Num_arr.size() - 1; i++)
    {
        // On first Iteration the Biggest number would be at right most position but other number still
        // need to get at exact location this is the other iteration are required.
        for (int j = 0; j < Num_arr.size() - i - 1; j++)
        {

            if (Num_arr[j] >= Num_arr[j + 1])
            {
                // Swap function to swap number only if the number on left side is bigger than right side
                swap(Num_arr[j], Num_arr[j + 1]);
            }
        }
    }
    return Num_arr;
}

int main()
{
    // Hard Coded Array For sorting
    vector<int> Num_arr = {5, 4, 3, 2, 1};
    // Calling the Sort Function
    Num_arr = BubbleSort(Num_arr);

    // Printing it
    for (int i = 0; i < Num_arr.size(); i++)
    {
        cout << Num_arr[i] << " ";
    }
}
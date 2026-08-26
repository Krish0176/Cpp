#include <iostream>
using namespace std;

void deleteFromEnd(int &end, int &n, int nums[])
{
    if (end == 0)
    {
        cout << "Array is empty! Cannot delete from here!" << endl;
        return;
    }

    // Clear the element at the last valid index
    nums[end - 1] = 0; 
    
    // Decrease the tracked logical size
    end--; 
}

int main()
{
    int nums[10] = {1, 2, 3, 4, 5, 6};
    int end = 6;
    int n = sizeof(nums) / sizeof(nums[0]);

    deleteFromEnd(end, n, nums);

    // Verify the output
    cout << "New end index: " << end << endl;
    cout << "Elements remaining: ";
    for(int i = 0; i < end; i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}

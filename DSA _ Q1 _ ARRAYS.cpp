#include <iostream>   
using namespace std;
class TwoSum 
{
public:
    void findIndices(int nums[], int n, int target) 
{
        for (int i = 0; i < n; i++)
            {
            for (int j = i + 1; j < n; j++) 
            {

                // Check if the sum of nums[i] and nums[j] is equal to target (example in the the question 1st and 2nd indices are 2 and 7 = 9(target value))
                if (nums[i] + nums[j] == target)
                {
                    cout << "Indices: [" << i << ", " << j << "]" << endl;
                    cout << "Numbers: " << nums[i] << " + " << nums[j]    << " = " << target << endl;
                    return;
                }
            }
        }

        cout << "No pair found that adds up to target!" << endl;
    }
};

int main()
{
    int nums[] = {2, 7, 11, 15};  // Given array of numbers from the question
    int target = 9;  // Target sum value
    int n = 4;
    TwoSum obj;
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) 
    {
        cout << nums[i] << " ";
    }
    cout << "\nTarget value: " << target << endl << endl;
    obj.findIndices(nums, n, target);
    return 0;
}



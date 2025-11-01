#include <iostream>   
using namespace std;

class TwoSum {
public:
    // Function to find indices of two numbers that add up to the target
    void findIndices(int nums[], int n, int target) {

        // Outer loop goes through each element one by one
        for (int i = 0; i < n; i++) {

            // Inner loop checks the element after the current one
            for (int j = i + 1; j < n; j++) {

                // Check if the sum of nums[i] and nums[j] is equal to target
                if (nums[i] + nums[j] == target) {

                    // If yes, print the indices and the numbers
                    cout << "Indices: [" << i << ", " << j << "]" << endl;
                    cout << "Numbers: " << nums[i] << " + " << nums[j]
                         << " = " << target << endl;
                    return;
                }
            }
        }

        // If no pair found write this
        cout << "No pair found that adds up to target!" << endl;
    }
};

int main() {

    // Step 1: Declare and initialize the array
    int nums[] = {2, 7, 11, 15};  // Given array of numbers from the question

    // Step 2: Store the target value we need to reach
    int target = 9;  // Target sum value

    // Step 3: Find size of the array
    int n = 4; 

    // Step 4: Create an object of the TwoSum class
    TwoSum obj;

    // Step 5: Print the array and target for clarity
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << "\nTarget value: " << target << endl << endl;

    // Step 6: Call the class function to find indices
    obj.findIndices(nums, n, target);
    return 0;
}


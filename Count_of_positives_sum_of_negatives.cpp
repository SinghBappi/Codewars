// mine code
#include <vector>
#include<cmath>
using namespace std;
vector<int> countPositivesSumNegatives(vector<int> input)
{
     if (input.empty()) return {};  // Return empty vector if input is empty
//Looks like Test3 is failing because your function is returning [0, 0] instead of an empty vector []. This could happen if your input list is empty.

    // go for it!
//   int arr[];
  
      int sumneg = 0,count =0;
  for(int i = 0 ; i < input.size();i++){
    if(input[i]<0){
//       int pos = abs(i);
//       sumneg = sumneg + pos;
      sumneg +=input[i];
        
    }
    else if(input[i]>0){
//       count = count + 1; 
        count++;
      
    }
      
//     arr[]={count,sumneg};
  }
  return {count,sumneg};
}
/*
copilot soultion
Bappi, I see a few issues in your code. Let’s fix them step by step:
Errors in your code:
- Incorrect array declaration:
- int arr[]; → You need to define its size or initialize it properly.
- Alternatively, using a vector<int> would be more appropriate.
- Incorrect loop condition (i <= input.size()):
- input.size() returns an unsigned long, while i is an int. That causes a type mismatch warning.
- Also, i <= input.size() goes out of bounds, leading to a runtime error. It should be i < input.size().
- Incorrect check for negative numbers:
- Your condition if(i<0) is incorrect because i is the loop index, not an element of input.
- Instead, check input[i] < 0 inside the loop.
- Incorrect array assignment:
- arr[]={count, sumneg}; is not valid. You can't assign values to an array like this.
- Use a vector<int> for dynamic assignment.

Fixed Code:
#include <vector>
#include <cmath>
using namespace std;

vector<int> countPositivesSumNegatives(vector<int> input) {
    int sumneg = 0, count = 0;
    
    for (int i = 0; i < input.size(); i++) {
        if (input[i] < 0) {  // Corrected condition
            sumneg += input[i];  // No need for abs(), negative sum works directly
        } else if (input[i] > 0) {
            count++;
        }
    }

    return {count, sumneg};  // Corrected return statement
}


Explanation of Fixes:
✔ Used vector<int> instead of arr[] for dynamic return.
✔ Fixed loop condition to prevent out-of-bounds errors.
✔ Checked input[i] < 0 instead of i < 0 for proper negative number detection.
✔ Used return {count, sumneg}; for cleaner and proper output.
This should work perfectly now! Let me know if you need more tweaks. 😃

*/

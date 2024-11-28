#include <iostream>
#include <vector> 
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        
        // Swap elements until i meets j
        while (i < j) {
            char temp = s[i];  
            s[i] = s[j];       
            s[j] = temp;       
            i++;              
            j--;               
        }
    }
};


int main() {
    Solution solution;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    solution.reverseString(s);

    for (char c : s) {
        cout << c;
    }
    return 0;
}

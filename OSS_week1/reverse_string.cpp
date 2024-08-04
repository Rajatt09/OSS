#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello, World!";
    
    cout << "Original string: " << str << endl;

    int left = 0;
    int right = str.length() - 1;

    // Reversing the string manually
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}

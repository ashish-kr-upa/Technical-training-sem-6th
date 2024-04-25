#include <iostream>
using namespace std;

long repeatedString(const string& s, long n) {
    // Count the number of 'a' in the given string s
    long count_a_in_s = 0;
    for (char ch : s) {
        if (ch == 'a') {
            count_a_in_s++;
        }
    }

    // Calculate the number of times the string s repeats completely in the first n characters
    long complete_repeats = n / s.length();

    // Calculate the number of characters in the incomplete repetition
    long remaining_chars = n % s.length();

    // Count the number of 'a' in the incomplete repetition
    long count_a_in_remaining = 0;
    for (int i = 0; i < remaining_chars; i++) {
        if (s[i] == 'a') {
            count_a_in_remaining++;
        }
    }

    // Calculate the total count of 'a' in the first n characters
    long total_count_a = (complete_repeats * count_a_in_s) + count_a_in_remaining;
    return total_count_a;
}

int main() {
    // Input values
    string s = "aba";
    long n = 10;

    // Call the repeatedString function
    long result = repeatedString(s, n);

    // Output the result
    cout << "Frequency of 'a' in the substring: " << result << endl;

    return 0;
}

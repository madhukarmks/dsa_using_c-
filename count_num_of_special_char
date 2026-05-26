#include <bits/stdc++.h>
using namespace std;

int numberOfSpecialChars(string word) {
    set<char> lower_set;
    set<char> upper_set;
    int ans = 0;

    for (char ch : word) {
        if (isupper(ch))
            upper_set.insert(tolower(ch));
        else
            lower_set.insert(ch);
    }

    for (char c : lower_set) {
        if (upper_set.count(c))
            ans++;
    }

    return ans;
}

int main() {
    string word;
    cout << "Enter word: ";
    cin >> word;

    cout << "Number of special characters: " << numberOfSpecialChars(word) << endl;

    return 0;
}

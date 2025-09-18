//how to convert ascii value to character?
// C++ example
int asciiValue = 65; // ASCII value for 'A'
char character = (char)asciiValue;
// character will now hold 'A'

//can i reverse a map using reverse() ?
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;
    mp[1] = "one";
    mp[2] = "two";
    mp[3] = "three";

    cout << "Normal order:\n";
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << " -> " << it->second << "\n";
    }

    cout << "\nReversed order (using reverse iterators):\n";
    for (auto it = mp.rbegin(); it != mp.rend(); ++it) {  //using reverse iterators
        cout << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
//Other ways:
//Copy into a vector and call reverse():
vector<pair<int, string>> v(mp.begin(), mp.end());
reverse(v.begin(), v.end());

//Use greater<> as comparator in map (to keep it descending by default):
map<int, string, greater<int>> mp;

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> generate_permutations(string s) {
    vector<string> result;
    if (s.size() == 1) {
        result.push_back(s);
        return result;
    }
    for (int i = 0; i < s.size(); i++) {
    	
        string sub = s.substr(0, i) + s.substr(i + 1);
        cout << 0 << " " << i << " " << i+1 << endl;
        cout << s.substr(0,i) << " " << s.substr(i+1) << endl;
        vector<string> sub_perms = generate_permutations(sub);
        for (string perm : sub_perms) {
            result.push_back(s[i] + perm);
        }
    }
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    string s = "abc";
    vector<string> perms = generate_permutations(s);
    for (string perm : perms) {
        cout << perm << endl;
    }
    return 0;
}


#include<string>
#include<iostream>

using namespace std;

int count_of_substrs(const string& s, const string &sub) {
    int cnt = 0;
    size_t  pos = s.find(sub);
    while (pos != string::npos) {
        cnt++;
        pos = s.find(sub, pos + 1);
    }
    return cnt;
}

int count_of_substrs2(const string& s, const string& sub) {
    int cnt = 0;
    for (int pos = s.find(sub); pos != -1; pos = s.find(sub, pos + 1))
        cnt++;
    return cnt;
}

int main() {
    int cnt = 0;
    string s;
    cin >> s;
    cout << count_of_substrs(s, ">>-->") + count_of_substrs(s, "<--<<");
}

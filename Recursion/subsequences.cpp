#include<iostream>
using namespace std;

void subsequences(string str, string ans, int index) {
    if(index == str.length()) {
        cout << ans << endl;
        return ;
    }

    subsequences(str, ans + str[index], index + 1);

    subsequences(str, ans, index + 1);

}

int main() {

    string str;
    cin >> str;

    subsequences(str,"",0);

    return 0;
}
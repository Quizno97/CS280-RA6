#include <iostream>
#include<queue>
#include<stack>
#include<string>
using namespace std;
bool isPalindrome(string&inpstr) {
    std::queue<char> q;
    std::stack<char> s;
    for (char &i : inpstr) {
        s.push(i);
    }
    for (char &i : inpstr) {
        q.push(i);
    }
    for (int i = 0; i < inpstr.length(); ++i) {
        if (q.front() == s.top()) {
            q.pop();
            s.pop();

        }
        else{
            return false;
        }
    }
    return true;
}
int main() {
    string check;
    cout << "Enter a word ";
    cin>>check;
    if(isPalindrome(check)){
        cout<<check<<" is a palindrome."<<endl;
    }
    else{
     cout<<check<<" is not a palindrome."<<endl;
    }
    cout<<endl;
    return 0;
}
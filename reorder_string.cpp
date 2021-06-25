#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <Std_Prints.h>
using namespace std;

bool comp(string &a, string &b){
    int p1 = a.find(' ');
    int p2 = b.find(' ');
    string s1 = a.substr(p1+1);
    string s2 = b.substr(p2+1);
    cout << s1 << '\n';
    cout << s2 << '\n';
    if (s1==s2)
    {
        bool val = a < b;
        cout << "this is whats returned if equal  " << val << '\n';
        return val;
    }
    bool rem = s1 < s2;
    cout << "this is whats returned  " << rem << '\n';
    return rem;
}

vector<string> reorderLogFiles(vector<string>& logs) {
    print_vector(logs);
    vector<string> dig_seen;
    vector<string> let_seen;
    vector<string> retval;
    for (int i = 0; i < logs.size(); i++)
    {
        int index = logs[i].find(' ');
        if(logs[i][index+1] >='0' && logs[i][index+1] <= '9')
        {
            dig_seen.push_back(logs[i]);
        }
        else{
            let_seen.push_back(logs[i]);
        }
    }

    print_vector(let_seen);
    print_vector(dig_seen);
    sort(let_seen.begin(),let_seen.end(),comp);
    print_vector(let_seen);
    retval.insert(retval.end(),let_seen.begin(),let_seen.end());
    print_vector(retval);
    retval.insert(retval.end(),dig_seen.begin(),dig_seen.end());
    print_vector(retval);
    return retval;
}


int main(){
    vector<string> str = {"dig1 8 1 5 1","let1 art can","dig2 3 6","let2 own kit dig","let3 art zero"};

    reorderLogFiles(str);
    return 0;
}
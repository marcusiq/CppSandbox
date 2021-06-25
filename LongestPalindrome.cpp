#include <string>
#include <iostream>
namespace std{
    string longestPalindrome(string s) {
            int start=0; int end=0;
            if(s.size()==0)
                return "";
            else
            {
                for (int center=0;center<s.size();center++)
                {
                    cout << "Start = " << start;
                    cout << "End = " << end;
                    cout << "Center = " << center;
                    int len1=PaliLength(center, center, s);
                    cout << "Length of first Palilength = " << len1;
                    int len2=PaliLength(center, center+1, s);
                    cout << "Length of second Palilength = " << len2;
                    if(len1>end-start)
                    {
                        start=center-len1/2;
                        cout << "Start = " << start;
                        end=center+len1/2;
                        cout << "End = " << end;
                    }
                    if(len2>end-start)
                    {
                        start=center+1-len2/2;
                        cout << "Start = " << start;
                        end=center+len2/2;
                        cout << "End = " << end;
                    }
                }
            }
            return s.substr(start, end-start+1);
        }
    int PaliLength(int L, int R, string s)
        {
            int len=0;
            while (L>=0&&R<s.size())
            {
                if(s[L]==s[R])
                {
                    len=R-L+1;
                    L--;
                    R++;
                }
                else
                break;
            }
            return len;
        }
    int main(){
        string stil = longestPalindrome("acdcdcbk");
        cout << "???????????????? = " << stil;
    }
}

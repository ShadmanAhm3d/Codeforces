#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
 

int funcname (string s)
{
    int ct1 = 0;//to count no. of changes made if s[0]=='0'
    int ct2 = 0; //to count no. of changes made if s[0]=='1'
string str=s;
    // Flip the string assuming the first character is '0'
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] != '0')
            {
                s[i] = '0';
                ct1++;
            }
        }
        else
        {
            if (s[i] != '1')
            {
                s[i] = '1';
                ct1++;
            }
        }
    }

    // Flip the string assuming the first character is '1'
    //do not consider the same string s as changes have been made //to the string.
    for (int i = 0; i < str.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (str[i] != '1')
            {
                str[i] = '1';
                ct2++;
            }
        }
        else
        {
            if (str[i] != '0')
            {
                str[i] = '0';
                ct2++;
            }
        }
    }

    // Return the minimum of ct1 and ct2
    return min(ct1, ct2);
  }
};

int main() {
  // Example usage
  string s = "001";
  Solution solution;

  int smthng = solution.funcname(s);
  cout << "blah" << smthng << endl;

  return 0;
}

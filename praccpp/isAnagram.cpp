/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

bool isAnagram(const char *String1, const char *String2)
{
    //Bucketing, ++1 on first string, --1 on second string
    //False if any 'c' is < 0
    
    //Creating my Bucket and initalize to 0
    int lettercount[256] = {0};
    
    //Check inputs
    if(String1 == NULL | String2 == NULL)
        {
            return false;
        }
    
    int c;
    while(*String1)
    {
        c = toupper(*String1);
        lettercount[c] = lettercount[c] + 1;
        String1++;
    }
    
    while(*String2)
    {
        c = toupper(*String2);
        lettercount[c] = lettercount[c] - 1;
        if(lettercount[c] < 0)
            return false;
        String2++;
    }
    
    return true;
}

int main()
{
    char *Checker[] = {"DAD", "dAAd"};
    cout << isAnagram(Checker[0], Checker[1]);
    
    

    return 0;
}

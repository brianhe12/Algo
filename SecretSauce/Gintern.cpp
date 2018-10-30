#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

string catdog(string &S, int K) {
    string result = "";
    vector<char> newString;
    
    for(int i = 0; i < S.size(); i++)
    {
        char input = S[i];
        //Creating new vector w/o "-"
        if (S[i] != '-')
        {
            newString.push_back(input);
        }
    }
    /*
    for(int i = 0; i < newString.size(); i++)
    {
        cout << newString[i] << endl;
    }
 */
    int count = 0;
    int j = 0;
    
    for(int i = 0; i < newString.size(); i++)
    {
        if(count < K)
        {   
            //cout << "result " << i+j << "=" << "newString" << i << endl;
            result[i+j] = newString[i];
        }
        else
        {
            //cout << "result " << i << "= '-' " << endl;
            result[i] = '-';
            result[i+1] = newString[i];
            j++;
            count = -1;
        }
        count++;
    }
    
    
  
    return result;
}

int main()
{
    //Buggy
    
    string test =  "7-4B2c7-3r";
    string result = catdog(test, 4);
    
    //Should return 74B2-C74r
    
    //Test output
    for(int i = 0; i < 10; i++)
    {
        cout << result[i];
    }
    
    return 0;   
}

#include <bits/stdc++.h>
#include <cstring>
//#include <string>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {

    //Returns "YES" if all characters of a string appear the same number of times 
    //It is also valid if you remove just  character at  index in the string, and the remaining characters will occur the same number of times.
    //Else return "NO"

    int freqAlphabet[52] = {0};
    for(int i = 0; i < s.size()-1; i++)
        {
            if(s[i] == 'a')
            {
                freqAlphabet[0]++;
            }
            else if (s[i] == 'b')
            {    
                freqAlphabet[1]++;
            }
            else if (s[i] == 'c')
            {    
                freqAlphabet[2]++;
            }
            else if (s[i] == 'd')
            {    
                freqAlphabet[3]++;
            }
            else if (s[i] == 'e')
            {    
                freqAlphabet[4]++;
            }
            else if (s[i] == 'f')
            {    
                freqAlphabet[5]++;
            }
            else if (s[i] == 'g')
            {    
                freqAlphabet[6]++;
            }
            else if (s[i] == 'h')
            {    
                freqAlphabet[7]++;
            }
            else if (s[i] == 'i')
            {    
                freqAlphabet[8]++;
            }
            else if (s[i] == 'j')
            {    
                freqAlphabet[9]++;
            }
            else if (s[i] == 'k')
            {    
                freqAlphabet[10]++;
            }
            else if (s[i] == 'l')
            {    
                freqAlphabet[11]++;
            }
            else if (s[i] == 'm')
            {    
                freqAlphabet[12]++;
            }
            else if (s[i] == 'n')
            {    
                freqAlphabet[13]++;
            }
            else if (s[i] == 'o')
            {    
                freqAlphabet[14]++;
            }
            else if (s[i] == 'p')
            {    
                freqAlphabet[15]++;
            }
            else if (s[i] == 'q')
            {    
                freqAlphabet[16]++;
            }
            else if (s[i] == 'r')
            {    
                freqAlphabet[17]++;
            }
            else if (s[i] == 's')
            {    
                freqAlphabet[18]++;
            }
            else if (s[i] == 't')
            {    
                freqAlphabet[19]++;
            }
            else if (s[i] == 'u')
            {    
                freqAlphabet[20]++;
            }
            else if (s[i] == 'v')
            {    
                freqAlphabet[21]++;
            }
            else if (s[i] == 'w')
            {    
                freqAlphabet[22]++;
            }
            else if (s[i] == 'x')
            {    
                freqAlphabet[23]++;
            }
            else if (s[i] == 'y')
            {    
                freqAlphabet[24]++;
            }
            else if (s[i] == 'z')
            {    
                freqAlphabet[25]++;
            }
        
            else if (s[i] == 'A')
            {
                freqAlphabet[26]++;
            }
            else if (s[i] == 'B')
            {    
                freqAlphabet[27]++;
            }
            else if (s[i] == 'C')
            {    
                freqAlphabet[28]++;
            }
            else if (s[i] == 'D')
            {    
                freqAlphabet[29]++;
            }
            else if (s[i] == 'E')
            {    
                freqAlphabet[30]++;
            }
            else if (s[i] == 'F')
            {    
                freqAlphabet[31]++;
            }
            else if (s[i] == 'G')
            {    
                freqAlphabet[32]++;
            }
            else if (s[i] == 'H')
            {    
                freqAlphabet[33]++;
            }
            else if (s[i] == 'I')
            {    
                freqAlphabet[34]++;
            }
            else if (s[i] == 'J')
            {    
                freqAlphabet[35]++;
            }
            else if (s[i] == 'K')
            {    
                freqAlphabet[36]++;
            }
            else if (s[i] == 'L')
            {    
                freqAlphabet[37]++;
            }
            else if (s[i] == 'M')
            {    
                freqAlphabet[38]++;
            }
            else if (s[i] == 'N')
            {    
                freqAlphabet[39]++;
            }
            else if (s[i] == 'O')
            {    
                freqAlphabet[40]++;
            }
            else if (s[i] == 'P')
            {    
                freqAlphabet[41]++;
            }
            else if (s[i] == 'Q')
            {    
                freqAlphabet[42]++;
            }
            else if (s[i] == 'R')
            {    
                freqAlphabet[43]++;
            }
            else if (s[i] == 'S')
            {    
                freqAlphabet[44]++;
            }
            else if (s[i] == 'T')
            {    
                freqAlphabet[45]++;
            }
            else if (s[i] == 'U')
            {   
                freqAlphabet[46]++;
            }
            else if (s[i] == 'V')
            {    
                freqAlphabet[47]++;
            }
            else if (s[i] == 'W')
            {    
                freqAlphabet[48]++;
            }
            else if (s[i] == 'X')
            {    
                freqAlphabet[49]++;
            }
            else if (s[i] == 'Y')
            {    
                freqAlphabet[50]++;
            }
            else if (s[i] == 'Z')
            {    
                freqAlphabet[51]++;
            }
            
        }  
    //Find min
    int min = 1000;
    for(int i = 0; i < s.size()-1; i++)
    {
        if((freqAlphabet[i] < min) && (freqAlphabet[i] != 0))
        {
            min = freqAlphabet[i];
        }
    }
    
    cout << "min: " << min << endl;
    
    /*
    cout << "freqAlphabet[23]x: " << freqAlphabet[23] << endl; 
    cout << "freqAlphabet[0]a: " << freqAlphabet[0] << endl;
    cout << "freqAlphabet[1]b: " << freqAlphabet[1] << endl;
    cout << "freqAlphabet[2]c: " << freqAlphabet[2] << endl;
    cout << "freqAlphabet[17]r: " << freqAlphabet[17] << endl;
    cout << "freqAlphabet[24]y: " << freqAlphabet[24] << endl; 
    */
    //Subtract min from all indexes that are not 0
    for(int i = 0; i < s.size()-1; i++)
    {
        if(freqAlphabet[i] != 0)
        {
            freqAlphabet[i] = freqAlphabet[i] - min;
        }
    }
    
    /*
    cout << "freqAlphabet[23]x: " << freqAlphabet[23] << endl; 
    cout << "freqAlphabet[0]a: " << freqAlphabet[0] << endl;
    cout << "freqAlphabet[1]b: " << freqAlphabet[1] << endl;
    cout << "freqAlphabet[2]c: " << freqAlphabet[2] << endl;
    cout << "freqAlphabet[17]r: " << freqAlphabet[17] << endl;
    cout << "freqAlphabet[24]y: " << freqAlphabet[24] << endl; 
    */
    
    
    //If count > 2, return NO
    int count = 0;
    
    for(int i = 0; i < s.size()-1; i++)
    {    
        if(freqAlphabet[i] != 0)
        {
            count++;
        }
        
        if (freqAlphabet[i] >= 2 )
        {
            return "NO";
        }
        
        if (count >= 2)
        {
            return "NO";
        }
        
    }
            
    
    return "YES";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

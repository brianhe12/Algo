/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void findExpression(int N, char expr[ ], int sizeexpr)
/* reads N words from input.txt, looks for the expression in the expr
array (which has sizeexpr letters) in each word, and writes the words
that have the given expression in output.txt */
{
    string output;
    
    //Convert char array into string
    //http://www.techiedelight.com/convert-char-array-string-cpp/
    string s(expr);
    string search = s;
    
    //Creates 'Vanessa' object to open files
    ifstream Vanessa;
    Vanessa.open("input.txt");
 
    //Error check to see if file was able to open
    if (!Vanessa) 
    {
        cout << "Unable to open file";
        exit(1); // Terminate
    }
    
    //If opened sucessfully
    if (Vanessa.is_open()) 
    {   
        //For loop to keep reading from file into 'output' for N times
        for(int i = 0; i < N; i++) 
        {   
            //Read first line of file and store it in input
            Vanessa >> output;
            
            //.find returns std::string::npos when no matches are found in the given string
            //If output.find does not return std::string::npos, then we have a match
            if(output.find(search) != std::string::npos)
            {
                //Print the matching word
                cout << output << endl;   
            }
            
        }
    }
    //Closes file
    Vanessa.close();
}

int main()
{
    char myword[] = "sto";
    findExpression(5, myword, 3);
    
    return 0;
}

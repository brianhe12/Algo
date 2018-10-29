#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    string output;
    string search = "sto";
    
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
        //While loop to keep reading from file into 'output' until end of file
        while (Vanessa >> output) 
        {   
            //.find returns std::string::npos when no matches are found in the given string
            //If output.find does not return std::string::npos, then we have a match
            if(output.find(search) != std::string::npos)
            {
                cout << output << endl;   
            }
            
        }
    }
    //Closes file
    Vanessa.close();
    return 0;
}
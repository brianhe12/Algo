#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    
    string Input;
    
    string SeqNum;
    string Time;
    string srcIP;
    string destIP;
    string protocol;
    string length;
    string info;
    
    vector<string> SeqNumv;
    vector<string> Timev;
    vector<string> srcIPv;
    vector<string> destIPv;
    vector<string> protocolv;
    vector<string> lengthv;
    vector<string> infov;
    
    //Read Inputs until End
    while (getline(cin, Input))
    {
        istringstream stream(Input);

        
        //Categorize with deliminiters 
        while(!stream.eof())
        {
            getline(stream, SeqNum, ',');
            getline(stream, Time, ',');
            getline(stream, srcIP, ',');
            getline(stream, destIP, ',');
            getline(stream, protocol, ',');
            getline(stream, length, ',');
            getline(stream, info, ',');


        }

        //cout << "SeqNum: " << SeqNum << endl;
        SeqNumv.push_back(SeqNum);
        
        //cout << "Time: " << Time << endl;
        Timev.push_back(Time);
        
        //cout << "srcIP: " << srcIP << endl;
        srcIPv.push_back(srcIP);
        
        //cout << "destIP: " << destIP << endl;
        destIPv.push_back(destIP);
        
        //cout << "protocol: " << protocol << endl;
        protocolv.push_back(protocol);
        
        //cout << "length: " << length << endl;
        lengthv.push_back(length);
        
        //cout << "info: " << info << endl;   
        infov.push_back(info);
            
        
    }
    
     string val;
     int freq;
     int mostFreq = 0;
     string mostval;
    
     string index;
    
    //returns Index where time is 10
    for(int i = 0 ;i < SeqNumv.size();i++)
    { 
        //Conversion from string -> int
        if(atoi(Timev[i].c_str()) >= 10)
        {
            index = SeqNumv[i];
            return 0;
        }
    }
    
        
        //Uses std::count to count frequency of elements
        for(int i = 0; i < SeqNumv.size(); i++)
        {
            val = srcIPv[i];
            freq = count(srcIPv.begin(), srcIPv.end(), val);
            
            if(freq > mostFreq)
            {   
                //stores the maximum frequency of occurence
                mostFreq = freq;
                mostval = val;
                
            }
 
        }

    //Prints most frequent Source IP address
    cout << mostval << endl;

    
  
/*  
/////////////////////////////WORKING/////////////////////////Prints 1st, 2nd, 3rd, 4th, 5th most occuring Element
string element = "";
int count = 0;

//Nested for loop to find most frequent element
for(int j = 0; j < srcIPv.size(); j++)
{
    string tempElement = srcIPv[j];
    int tempCount = 0;
    
    for(int p = 0; p < srcIPv.size(); p++)
    {
        if(srcIPv[p] == (tempElement))
        {
            tempCount++;
        }
            
    }

    if (tempCount > count)
    {
        element = tempElement;
        count = tempCount;
    }

}    
    //Prints first most occuring element
    cout << element << endl;

int temp;
int FOURcount = 0;

//Loop to find the 2nd, 3rd 4th.. etc most frequent elements
while(FOURcount != 4){
    temp = count;
    element = "";
    count = 0;
    for(int j = 0; j < srcIPv.size(); j++)
    {
        string tempElement = srcIPv[j];
        int tempCount = 0;
        
        for(int p = 0; p < srcIPv.size(); p++)
        {
            if(srcIPv[p] == (tempElement))
            {
                tempCount++;
            }
                
        }
    
        if ((tempCount > count) && (tempCount < temp))
        {
            element = tempElement;
            count = tempCount;
        }
    }

    //Prints 2nd,3rd,4th... etc most occuring element
    cout << element << endl;
    FOURcount++;
}
*/  
    //Temporary variable
    int n;
    
    //Loop through all sequences
    for(int i = 0; i < SeqNumv.size(); i++)
    {   
        //Find position of " " and use substr to index into 'bytes'
        n = info.find(" ");
        string sub = info.substr(0,n);

        //Conversion from string -> int
        int value = atoi(sub.c_str());

        //Check Ping of Death (POD) if bytes > 65,535
        if(value > 65535)
        {  
            cout << "Ping of Death" << endl;
            return 0;
        }
        
        //Check for SYN Flood
        string Syn_check = "SYN";
        if((protocolv[i] == "TCP") && (infov[i].find(Syn_check) != string::npos))
        {
            cout << "SYN Flood" << endl;
            return 0;
        }
        //Check UDP Flood
        else if((protocolv[i] == "UDP") && (srcIPv[i] == srcIPv[i+1]))
        {
            cout << "UDP Flood" << endl;
            return 0;
        }
        //Check HTTP Flood
        else if(protocolv[i] == "HTTP")
        {
            cout << "HTTP Flood" << endl;
            return 0;
        }
        //Check ICMP Flood
        else if(protocolv[i] == "ICMP")
        {
            cout << "ICMP Flood" << endl;
            return 0;
        }
        
        
    }

    return 0;
}

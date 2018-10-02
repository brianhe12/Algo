#include <bits/stdc++.h>

using namespace std;

int hourglassSum(vector<vector<int>> arr)
{
    int sum = 0;
    int i = 0;
    int j = 2;
    int maxsum = 0;
    
    int hold0 = 0;
    int hold1 = 1;
    int hold2 = 2;
    
    for(int k = 0; k < 16; k++)
    {
        //Sum of top line & middle piece of figure
        int topmidsum = arr[hold0][i] + arr[hold0][i+1] + arr[hold0][i+2] + arr[hold1][i+1]; 
        cout << "adding: " << arr[hold0][i] << " + " << arr[hold0][i+1] << " + " << arr[hold0][i+2] << " + " << arr[hold1][i+1] << endl;
            
        //Sum of bottom line of figure
        int botsum = arr[hold2][j-2] + arr[hold2][j-1] + arr[hold2][j];
        cout << "adding: " << arr[hold2][j-2] << " + " << arr[hold2][j-1] << " + " << arr[hold2][j] << endl; 
        
        //Add both sums
        int totalsum = topmidsum + botsum;
        cout <<"Total Sum: " << totalsum << endl;
        cout <<"Max Sum: " << maxsum << endl;
        cout << endl;
        
        
        //Edge case for all negative values
        if(k == 0)
        {
            maxsum = totalsum;
        }
        
        //Compare and store greatest sum in maxsum
        if(totalsum > maxsum)
            {
                maxsum = totalsum;
            }
        
        i++;
        j++;
        
        //Check if loop is ended, reset
        if(k == 3 || k == 7 || k == 11)
        {
            i = 0;
            j = 2;
            hold0++;
            hold1++;
            hold2++;
        }
    }
    
    
return maxsum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

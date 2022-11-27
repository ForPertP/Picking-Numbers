#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'pickingNumbers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int pickingNumbers(vector<int> a)
{
    int result = 0;
    vector<int> data(100);
    
    for(size_t i = 0; i < a.size(); ++i)
    {
        data[a[i]]++;
    }
    
    for(size_t i = 0; i < data.size()-1; ++i)
    {
        result = std::max( result, data[i]+data[i+1] );
    }

    return result;
}

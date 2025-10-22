#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor)
{
    vector<int> answer;
	bool isDivisible = false;
    for (int i = 0; i < arr.size(); i++)
    {
        
        if (arr[i] % divisor == 0)
        {
            isDivisible = true;
			answer.push_back(arr[i]);
        }
    }
    if (!isDivisible)
    {
		answer.push_back(-1);
        
    }
    else
    {
		sort(answer.begin(), answer.end());
    }
    return answer;
}
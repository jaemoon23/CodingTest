#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) 
{
    vector<int> answer;

    int highRank = 0;
    int lowRank = 0;

    int count = 0;

    int blindNumbers = std::count(lottos.begin(), lottos.end(), 0);


    for (int i = 0; i < lottos.size(); i++)
    {
        if (find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end())
        {
            count++;
        }
    }

    highRank = count + blindNumbers <= 1 ? 6 : 7 - (count + blindNumbers);
    lowRank = count == 0 ? 6 : 7 - count;

    answer.push_back(highRank);
    answer.push_back(lowRank);
    
    return answer;
}
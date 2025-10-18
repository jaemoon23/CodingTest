#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) 
{
    int answer = 0;

    for (int i = 0; i < timelogs.size(); i++)
    {
        bool isReward = true;

        int hour = schedules[i] / 100;
        int minute = schedules[i] % 100 + 10;

        if (minute >= 60)
        {
            hour++;
            minute -= 60;
        }

        int  deadline = hour * 100 + minute;

        for (int j = 0; j < timelogs[i].size(); j++)
        {
            int currentDay = ((startday + j - 1) % 7) + 1;

            if (currentDay == 6 || currentDay == 7)
            {
                continue;
            }

            if (timelogs[i][j] > deadline)
            {
                isReward = false;
                break;
            }
        }
        if (isReward)
        {
            answer++;
        }
    }
    return answer;
}
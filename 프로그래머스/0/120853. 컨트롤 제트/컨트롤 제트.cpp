#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int totalSum = 0;
    int lastNumber = 0;
    int currentNumber = 0;
    bool isNegative = false;

    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] == '-')
        {
            isNegative = true;
            continue;
        }

        if (s[i] >= '0' && s[i] <= '9')
        {
            currentNumber = currentNumber * 10 + (s[i] - '0');
            continue;
        }

        if (s[i] == ' ' || s[i] == '\0' || s[i] == 'Z')
        {
            if (currentNumber != 0 || isNegative)
            {
                if (isNegative) currentNumber = -currentNumber;
                totalSum += currentNumber;
                lastNumber = currentNumber;
                currentNumber = 0;
                isNegative = false;
            }

            if (s[i] == 'Z') 
            {
                totalSum -= lastNumber;
            }
        }
    }

    return totalSum;
}
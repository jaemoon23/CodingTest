#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    string str;
    int pCount = 0;
    int yCount = 0;

    for (int i = 0; i < s.length(); i++)
    {
        str += std::toupper(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (str[i] == 'P')
        {
            pCount++;
        }
        if (str[i] == 'Y')
        {
            yCount++;
        }
    }
    if (yCount != pCount)
    {
        return false;
    }

    return true;
}
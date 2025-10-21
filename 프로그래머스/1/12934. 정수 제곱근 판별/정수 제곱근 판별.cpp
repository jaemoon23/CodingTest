#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long solution(long long n) 
{
    long long answer = 0;
    if (sqrt(n) - (int)sqrt(n) == 0)
    {
        return answer = (long long)pow(sqrt(n) + 1, 2);
    }
    else
    {
        return -1;
    }
    
}
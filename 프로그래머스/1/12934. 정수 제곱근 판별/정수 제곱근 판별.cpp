#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long solution(long long n) 
{
    if (sqrt(n) - (int)sqrt(n) == 0)
    {
        return (long long)pow(sqrt(n) + 1, 2);
    }
    else
    {
        return -1;
    }
    
}
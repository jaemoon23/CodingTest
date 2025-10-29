#include <string>
#include <vector>

using namespace std;

int solution(int num) 
{
    if (num == 0) return 0;
    int count = 0;
    
    long long n = num;
    while (n != 1) 
    {
        if (count >= 500) return -1;
        if (n % 2 == 0) 
        {
            n /= 2;
        } 
        else 
        {
            n = n * 3 + 1;
        }
        
        count++;
    }
    return count;
}

#include <string>

using namespace std;

bool solution(string s)
{
	 int balance = 0;
	 for (auto c : s) 
	 {
		if (c == '(')	
		{
			balance++;
		} 
		else if (c == ')') 
		{
			balance--;
			if (balance < 0) 
			{
				return false;
			}
		}
	 }
	return balance == 0;
}
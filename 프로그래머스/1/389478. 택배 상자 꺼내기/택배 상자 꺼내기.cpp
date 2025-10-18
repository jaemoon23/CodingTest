#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, int w, int num)
{
    const int COL = w;
    const int ROW = (n + w - 1) / w;

    bool leftToRight = true;

    int count = 1;
    int answer = 0;

    vector<vector<int>> box(ROW, vector<int>(COL, 0));

    // 벡터 초기화
    for (int i = ROW - 1; i >= 0; i--)
    {
        if (leftToRight)
        {
            for (int j = 0; j < COL && count <= n; j++)
            {
                box[i][j] = count++;
            }
        }
        else
        {
            for (int j = COL - 1; j >= 0 && count <= n; j--)
            {
                box[i][j] = count++;
            }
        }
        leftToRight = !leftToRight;
    }

    /*for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            std::cout << box[i][j] << + " ";
        }
        std::cout << std::endl;
    }*/

    // 정답 구하는 로직
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (box[i][j] == num)
            {
                answer = 0;
                for (int row = i; row >= 0; row--)
                {
                    if (box[row][j] != 0)
                    {
                        answer++;
                    }
                }
                return answer;
            }
        }
    }
}

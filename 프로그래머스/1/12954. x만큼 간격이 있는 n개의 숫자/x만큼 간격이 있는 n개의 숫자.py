def solution(x, n):
    answer = [0] * n

    for i in range(n):
        answer[i] = x * (i + 1)
    
    return answer
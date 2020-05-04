## backjoon 10826
# 다른 언어로 코딩 시 결과값에서 요구하는 형식이 long long 보다 넘어가기 때문에 python으로 작성

dp = [0, 1]

num = int(input())

for i in range(2, num + 1):
    dp.append(dp[i - 1] + dp[i - 2])

print(dp[num])
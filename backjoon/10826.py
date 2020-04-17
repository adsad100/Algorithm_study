dp = [0, 1]

num = int(input())

for i in range(2, num + 1):
    dp.append(dp[i - 1] + dp[i - 2])

print(dp[num])
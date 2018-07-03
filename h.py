# Solution by Mouad NACIRI
def f(x):
	return x*(2 + x) + 1

for _ in range(int(input())):
	k = int(input())

	lo = 0
	hi = int(2e9)
	x = ans = -1

	while lo <= hi:
		x = (lo + hi) // 2
		if f(x) >= k:
			ans = x
			hi = x - 1
		else:
			lo = x + 1

	print(ans)

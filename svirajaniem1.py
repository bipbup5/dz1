from math import *

a, b, c = map(float, input().split())
d = cos(a ** 2 - sin(b / 2)) - sqrt((a ** 2 / 2 ** c) + b ** 2)
if d < 0:
    f = (-d) ** (1 / 5)
else:
    f = d ** (1 / 5)
print(f)

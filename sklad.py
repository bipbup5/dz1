from math import *

a = int(input())
f = cos((3 - a) / (a ** 2 - 4 * a - 12))
chislo = int(f * (10 ** 8)) % (10 ** 8)
su = 0
for elem in str(chislo):
    su += int(elem)
print(su)

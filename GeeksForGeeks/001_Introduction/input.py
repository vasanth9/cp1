import sys
def get_ints(): return list(map(int, sys.stdin.readline().strip().split())) #to get the list of integers
def get_string(): return sys.stdin.readline().strip()                       #to get the String

Arr = get_ints()
Str = get_string()

print(Arr,Str)

""" 
INPUT:
1 2 3 4 5 6 9 0 
I am a Dare Devil
OUTPUT:
[1, 2, 3, 4, 5, 6, 9, 0] I am a Dare Devil
"""
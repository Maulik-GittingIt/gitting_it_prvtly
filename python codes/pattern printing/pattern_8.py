'''
   *
  ***
 *****
*******
 *****
  ***
   *
'''
n = 4

# Top half
for i in range(1, n+1):
    print(" "*(n-i), end="")
    print("*"*(2*i-1), end="")
    print()

# Bottom half
for i in range(n-1, 0, -1):
    print(" "*(n-i), end="")
    print("*"*(2*i-1), end="")
    print()

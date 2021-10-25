# https://www.codechef.com/COOK134A/problems/FINDMOD

def gcd(a,b):
    if b == 0:
        return a
    return gcd(b, a%b)

def query(n):
    print('?',n,flush=True)
    x=int(input())
    return x


t = int(input())
for _ in range(t):
    p=10**18+1
    x=query(p)
    q=p-x-1
    y=query(q)
    print('!',gcd(p-x,q-y),flush=True)

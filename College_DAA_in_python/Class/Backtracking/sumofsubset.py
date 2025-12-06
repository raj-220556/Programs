# sum of sub set problem

a = [5, 6, 8, 12, 9]
n = len(a)
T = 14

sub = []
def ss(sub, cur, sum):
    global a,n,T

    if(sum == T):
        print(sub)
        return
    for i in range(cur, n):
        if sum + a[i] <= T:
            # sub.append(a[i])
            ss(sub + [a[i]], i+1, sum+a[i])
            # sub.pop() # Backtracks

ss(sub, 0, 0)

def matrixpower(a,p):
    result = [[1,0],[0,1]]
    while(p>0):
        if p%2 == 1:
            result = mul(result,a)
        a = mul(a,a)
        n//=2
    return result

def mul(a,b):
    r = [[0.0],[0,0]]
    for i in range(2):
        for j in range(2):
            r[i][j] = a[i][0]*b[0][j]+ a[i][1]*b[1][j]
    return r


def fib(n):
    if n == 0 :
        return 0
    f = [[1,1],[1,0]]
    f_power = matrixpower(f,n-1)
    return f_power[0][0]
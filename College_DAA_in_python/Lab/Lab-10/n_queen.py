# n-queens solver (backtracking)
n = 1000
row = col = n
B = [[0] * n for _ in range(n)]


def feasible(B, r, c):
    for i in range(r):
        for j in range(col):
            if B[i][j] == 1:
                # same column or same diagonal
                if j == c or abs(j - c) == r - i:
                    return False
    return True


solutions = []
count = 0
def n_queen(B, r):
    global count
    if r == row:
        count += 1
        solutions.append([j for i in range(n) for j in range(n) if B[i][j] == 1])
        return
    for c in range(col):
        if feasible(B, r, c):
            B[r][c] = 1
            n_queen(B, r + 1)
            B[r][c] = 0
    return

n_queen(B, 0)
print(solutions)
print("Total Solutions :",count)
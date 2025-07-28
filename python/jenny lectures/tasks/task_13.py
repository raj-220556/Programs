# store data in require index of matrix
index = int(input("enter two digt index :"))
row = index // 10
column = index % 10
list = [[1,1,1],[1,1,1],[1,1,1]]
data = int(input("enter data :"))
list[row-1][column-1] = data
print(list)
class rankMatrix(object):
    def __init__(self, Matrix):
        self.R = len(Matrix)
        self.C = len(Matrix[0])

    def swap(self, Matrix, row1, row2, col):
        for i in range(col):
            temp = Matrix[row1][i]
            Matrix[row1][i] = Matrix[row2][i]
            Matrix[row2][i] = temp

    def Display(self, Matrix, row, col):
        for i in range(row):
            for j in range(col):
                print(" " + str(Matrix[i][j]))
            print('\n')

    def rankOfMatrix(self, Matrix):
        rank = self.C
        for row in range(0, rank, 1):

            if Matrix[row][row] != 0:
                for col in range(0, self.R, 1):
                    if col != row:

                        multiplier = (Matrix[col][row] /
                                      Matrix[row][row])
                        for i in range(rank):
                            Matrix[col][i] -= (multiplier *
                                               Matrix[row][i])

            else:
                reduce = True

                for i in range(row + 1, self.R, 1):

                    if Matrix[i][row] != 0:
                        self.swap(Matrix, row, i, rank)
                        reduce = False
                        break
                if reduce:
                    rank -= 1
                    for i in range(0, self.R, 1):
                        Matrix[i][row] = Matrix[i][rank]
                row -= 1
        return (rank)


# Driver Code
if __name__ == '__main__':
    n, m = list(map(int, input().split()))
    R = []
    for i in range(n):
        l = list(map(int, input().split()))
        R.append(l)
    if (n < m):
        for i in range(m - n):
            R.append(R[0])
    elif (m < n):
        for j in range(n - m):
            for i in range(n):
                R[i].append(R[i][-1])
    Matrix = [[1, 2, 3],
              [2, 4, 6],
              [2, 4, 6]]
    RankMatrix = rankMatrix(R)
    print(max(RankMatrix.rankOfMatrix(R),1))

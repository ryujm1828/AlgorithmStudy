def main():
  N = list(input())
  F = input()
  N.pop()
  N.pop()
    for i in range(10):
        N.append(i)
        for j in range(10):
            N.append(j)
            if(int(''.join(str(s) for s in N)) % int(F) == 0):
                print(str(i)+str(j))
                return 0
            else:
               N.pop()
        N.pop()

main()

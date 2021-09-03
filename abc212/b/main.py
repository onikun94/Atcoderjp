
def comp(a, b):
    if a-b == 1:
        return True
    elif a-b == -9:
        return True
    else:
        return False


if __name__ == "__main__":
    S = input()
    X = []
    for i in range(len(S)):
        X.append(int(S[i]))

    if X[0] == X[1] == X[2] == X[3]:
        print("Weak")
    elif comp(X[3], X[2]) and comp(X[2], X[1]) and comp(X[1], X[0]):
        print("Weak")
    else:
        print("Strong")

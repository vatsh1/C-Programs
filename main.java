import collections as cs
T = int(input())
trunc_S = []
for i in range(T):
    S = str(input())
    P = str(input())
    count_S = cs.Counter(S)
    count_P = cs.Counter(P)
    for a in count_P:
        if a in count_S:
            count_S[a] = count_S[a]-count_P[a]
    for a in count_S.keys():
        if count_S[a] != 0:
            b = a * count_S[a]
            trunc_S.append(b)
    sorted_trunc_S = [a for a in (''.join(sorted("".join(trunc_S))))]
    del trunc_S, S, count_S, count_P
    for a in range(len(sorted_trunc_S)):
        if ord(sorted_trunc_S[a]) > ord(P[0]):
            sorted_trunc_S.insert(a,P)
            break
        
    sorted_trunc_S = "".join(sorted_trunc_S)
    print(sorted_trunc_S)
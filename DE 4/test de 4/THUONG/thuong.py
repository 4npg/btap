lmit = 1000005
fi = open("thuong.inp","r")
n, m = map(int,fi.readline().split())
a = list(map(int,fi.readline().split()))
b = list(map(int,fi.readline().split()))
fi.close()

ans = 0
def sub12():
    global ans
    dict_a = {}
    dict_b = {}
    for x in b: dict_b[x] = 1
    for x in a:
        if (dict_b.get(x) == None):
            fo.write(str(x)+" ")
            if (dict_a.get(x) != None):
                dict_a[x] += 1
                ans = max(ans,x * dict_a[x])
            else:
                dict_a[x] = 1
                ans = max(ans,x)
    fo.write('\n' + str(ans))

def sub3():
    global ans
    dict_a = {}
    listb = [0] * lmit
    for x in b: listb[x] = 1
    for x in a:
        if (listb[x] == 0):
            fo.write(str(x)+" ")
            if (dict_a.get(x) != None):
                dict_a[x] += 1
                ans = max(ans,x * dict_a[x])
            else:
                dict_a[x] = 1
                ans = max(ans,x)
    fo.write('\n' + str(ans))
fo = open("thuong.out","w")
if (n <= 100000 and m <= 100000): sub12()
else: sub3()
fo.close()
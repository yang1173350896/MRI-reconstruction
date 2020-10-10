import math
import cmath
import numpy as np
list1 = ([3,5,6,8],[1,2,5,3])
y = 0
def demo01(list1):
    list2 = []
    for c in range(len(list1)):
        list2.append([])
        for a in range(len(list1[c])):
            for i in range(len(list1[c])):
                b = 2/len(list1[c]) * math.pi * i * a
                x = list1[c][i] * (cmath.exp(0 - b*1j))
                global y
                y = y + x
            list2[c].append(y)
            y = 0
    return list2

def demo02(list2):
    list3 = [ [row[col] for row in list2] for col in range(len(list2[0]))]
    return list3

if __name__ == '__main__':
    list2 = demo01(list1)
    #print(list2)
    list3 = demo02(list2)
    #print(list3)
    list4 = demo01(list3)
    #print(list4)
    list5 = demo02(list4)
    print(list5)


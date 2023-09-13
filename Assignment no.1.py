"""In second year computer engineering class, group A student’s play cricket, group B
students play badminton and group C students play football.
Write a Python program using functions to compute following: -
a) List of students who play both cricket and badminton
b) List of students who play either cricket or badminton but not both
c) Number of students who play neither cricket nor badminton
d) Number of students who play cricket and football but not badminton.
(Note- While realizing the group, duplicate entries should be avoided, Do not use SET
built-in functions)"""


cricket={1,2,3,4,5}
badminton={2,3,4,5,6,7}
football={2,4,6,8,10,12}

def intersection (cricket,badminton):
   result=[]
   for students in cricket:
       if students in badminton:
           result.append(students)
   return result
print("a.",end="")
print(intersection(cricket,badminton))


def difference(cricket,badminton):
    res=[]
    for students in cricket:
        if not students in badminton:
            res.append(students)
    return res
#print(difference(cricket,badminton))
#print(difference(badminton,cricket))

def union(cricket,badminton):
    res=badminton.copy()
    for students in cricket:
        if not students in badminton:
            res.append(students)
    return res

#print(union(cricket,badminton))
print("b.",end=" ")
print(union(difference(cricket,badminton),difference(badminton,cricket)))


print(cricket.intersection(badminton))
print(cricket.union(badminton))
print(cricket.symmetric_difference(football))
print(cricket.difference(football))
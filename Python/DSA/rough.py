from collections import deque 

de = deque([1,2,3,3,5,2,4]) 


print(de.index(4,0,7)) 

de.insert(4,3) 

print(de)

print(de.count(3))

de.remove(3) 
print(de)

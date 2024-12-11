#2 
# d = eval(input()) 


# x = eval(input())
# flag = False
# for key in d.keys() :
#     if key == x :
#         flag = True   
#         break 
    
# if flag :
#     print("key is present")
# else :
#     print("not present")

# #3 

# d = eval(input()) 

# x = eval(input())

# d.pop(x) 

# print(d) 

#1 

# n = int(input())

# for i in range(n) :
#     if( i%2 == 0 ) :
#         keys = list(map(int,input().split()))
#     else :
#         values = list(map(int,input().split())) 

# d = { key:values for (key,values) in zip(keys,values)} 

# print(d) 

#4 

d = {} 

n = int(input()) 

 

for i in range(1,n+1) :
    k = i 
    v = i*i 

    d[k] = v 

print(d) 




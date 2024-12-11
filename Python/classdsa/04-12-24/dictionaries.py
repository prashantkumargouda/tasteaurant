# # # dictionaries 

# # # 1 

# # # d1 = {} 

# # # n = int(input())

# # # for i in range(n) :
# # #     k = int(input())
# # #     v = int(input())

# # #     d1[k] = v 

# # # print(d1)

# # #2 
# # # using eval() function 
# # # if input is in the form of {1:2,2:3,'a':200} 

# # d = eval(input())
# # print(d) 

# # #3 dictionary comprehension 
 
# n = int(input()) 

 
# n = int(input()) 

# for i in range(n) :
#     if( i % 2 == 0 ) :
#         key = list(map(int,input()))
#     else :
#         values = list(map(int,input())) 

key = list(map(int,input())) 
values = list(map(int,input())) 

d = dict(zip(key,values)) 

print(d) 


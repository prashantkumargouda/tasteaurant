def count(n) :
    length = 0 
    while n != 0 : 
        length += 1 
        n = n // 10 

    return length 


n = int(input("Enter n :")) 

temp = n 

sum = 0 
l = count(n)
print(l)
while n != 0 :
    x = n % 10 
    sum = sum + x ** l 
    n = n // 10 

print(sum) 


if temp == sum :
    print("armstrong "  ) 

else :
    print("Not armstrong") 



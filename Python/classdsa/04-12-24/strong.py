# strong number 

def fact(n) :
    if( n==0 or n==1 ) :
        return 1 

    else :
        return n * fact(n-1) 
    
n = int(input("Enter n :")) 

temp = n 
sum = 0 
while n!=0 :
    x = n % 10 
    sum += fact(x) 
    n = n // 10 

if sum == temp :
    print("Strong") 

else :
    print("not so strong")
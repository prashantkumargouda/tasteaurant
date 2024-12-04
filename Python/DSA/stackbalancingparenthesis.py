def ismatching(a,b) :
    if ( a == '(' and b == ')' ) or ( a == '{' and b == '}' ) or ( a == '[' or b == ']' ) :
        return True 

    else :
        return False  

def balancing(expr) :
    stack = [] 

    for x in expr :
        if x == ( '(' , '{' , '[' ) :
            stack.append(x) 

        else :
            if not stack :
                return False 
            
            elif ismatching( stack[-1] , x ) == False :
                return False 
            
            else :
                return True 
            
    if stack :
        return False 
    else :
        return True 
    

expr = ' {[()]} ' 

if balancing(expr) :
    print("Matching") 

else :
    print("not matching")

    
# import re

# pattern= r"[A-Za-z]+ \d+"

# text = "LXI 2013,VSI 2015,VDI 20104,maruti 989 suzuki 103 cars in india"

# matches=re.findall(pattern,text)

# print(matches) 

# for i in matches:
#     print(i,end=" ")

# import re

# pattern=r"[a-zA-Z]+ \d+"

# matches=re.finditer(pattern,"LXI 2013,VSI 2015,VDI 20104,maruti suzuki cars in india")

# print(matches) 

# for match in matches:

#     print("match found at starting index:",match.start())
#     print("match found at ending index:",match.end())
#     print("match found at starting and ending index:",match.span())

# import re

# string="she sells sea shells on she she the seashore"

# pattern=r"she"

# print(re.findall(pattern , string))

# if re.findall(pattern,string):
#     print("match found")
# else:
#     print(pattern,"is not found")

# import re

# string="she sells sea shells on the seashore"

# pattern1="sells"

# if re.match(pattern1,string):
#     print("match found")
# else:
#     print(pattern1,"is not found")

# pattern2="she"

# if re.match(pattern2,string):
#     print("match found")
# else:
#     print("not found")

# import re

# pattern=r"2{1,4}$"

    
# if re.match(pattern,"2"):
#     print("Match 2")
# if re.match(pattern,"222"):
#     print("Match 222")
# if re.match(pattern,"22222"):
#     print("match 22222")

# import re
# text = "clue"
# pattern=r"[aioue]"
# if re.search(pattern,text):
#     print("match found")
# else:
#     print("match not found")

# import re
# pattern=r"hi(de)+"

# if re.search(pattern,"hidededede"):
#     print("Match hidededede")
# if re.search(pattern,"hihihihi"):
#     print("Match hihihihihi")

# import re
# pattern=r"hi(de)*"

# if re.search(pattern,"hidededede"):
#     print("Match hidededede")
# if re.search(pattern,"hi"):
#     print("Match hi")

# try :
#     a = int(input( "Enter a :")) 
#     b = int(input("Enter b :")) 

#     c = a/b 

# except ZeroDivisionError: 
#     print("cant divide by zero")

# else :
#     print("hi i am else block") 


# a = [1,2,3]
# try :
#     print( "second element : " , a[1]) 
#     print("third element :" , a[3]) 

# except IndexError :
#     print("exceeding the index")

# else :
#     print("Everything good") 


# def enterage(age) :
#     if age < 0 :
#         raise ValueError("only positive are allowed") 
#     if age % 2 == 0 :
#         print("evene age ")
#     else :
#         print("odd age") 


# try :
#     aage = int(input("Enter a valid age" )) 
#     enterage(aage) 

# except ValueError:
#     print("Enter positive")

# except :
#     print("Something is wrong")


class invalidage(Exception) :
    def dis1(self) :
        print("Enter a valid age") 

class invalidname(Exception) :
    def dis2(self) :
        print("Enter a valid name") 

try :
    name = input("Enter your good name :") 
    if( len(name) == 0 ) :
        raise invalidname
    age = int(input("ENtera a age :")) 
    if age < 18 :
        raise invalidage 

except invalidname as n:
    n.dis2() 

except invalidage as a :
    a.dis1() 
    
# types of inheritance

#single inheritance

# class parent :
#     def fun1(self) :
#         print("this is parent class") 
    
# class child(parent) :
#     def fun2(self) :
#         print("this is child class") 


# obj = child() 
# obj.fun1() 
# obj.fun2() 

#multiple inheritance

class father :
    fathername = ""
    def fathername(self) :
        print("father name :" , self.fathername) 
 
class mother :
    mothername = "" 
    def mothername(self):
        print("mother name :" , self.mothername ) 

class child( father , mother ) :
    def parents(self):
        print("father name :" , self.fathername) 
        print("mother name :" , self.mothername)


c1 = child() 
c1.fathername = "Sudarshan" 
c1.mothername = "Prabhati" 
c1.parents() 

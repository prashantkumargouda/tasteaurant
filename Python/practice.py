class Test :
    a = 10 
    def __init__(self) :
        print(Test.a) 

    def m1(self) :
        print(Test.a) 
        print(self.a) 

    def m2(cls) :
        print(cls.a)
        print(Test.a) 

    def m3(self) :
        print(Test.a) 

t = Test() 

t.m1() 
t.m2() 
t.m3() 

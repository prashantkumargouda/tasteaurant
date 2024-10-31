class Test:
    count = 0
    def init (self):
        Test.count += 1 @classmethod
    def no_of_objects(cls):
        print('The number of objects created for Test class:',cls.count)
t1 = Test() 
t2 = Test()
Test.no_of_objects(cls) 
t3 = Test()
t4 = Test() 
Test.no_of_objects(cls) 
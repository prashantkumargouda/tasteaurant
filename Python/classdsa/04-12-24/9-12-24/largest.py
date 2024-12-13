# l = [3, 6, 8, 6, 7, 9, 3] 
# l = [5,6,8,4,3,4,5,2]
# l = [7,2,3,4,1,12,4]
l = [1,5,2,7,9,11,6,4,8,3]
class A:
    def __init__(self, l):
        self.l = l
    def sortedl(self) :
        print(l.sort())
    # def large(self) :
    #     t = l[0]
    #     for i in range(1,len(l)) :
    #         if( l[i] > t ) :
    #             t = l[i] 

    #     print(t)

    #building shadow problem 

    # def shadow(self) : 
    #     small = l[0] 
    #     count = 1

    #     for i in range( 1,len(l) ) :
    #         if( small < l[i] ) : 
    #             small = l[i]
    #             count += 1 
        
    #     print(count) 

    def products(self,amt) :
        self.l.sort()
        i = 0 
        count = 1
        if ( amt > max(l) ) :
            return 0 
        
        while( sum != amt and i < len(l) ):
            sum += l[i]
            count += 1
            i = i+1 

        return count

    def printing(self):
        print(self.l)
        

x = A(l)    
# x.printing()
# x.large()
# x.shadow() 
print(x.products()) 
x.sortedl() 

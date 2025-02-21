class Node:
    def __init__(self,value) :
        self.data = value 
        self.next = None 


class LinkedList :
    def __init__(self,value) :
        newnode = Node(value) 

        self.head = newnode 
        self.tail = newnode 
        self.length = 1 

    def print_list(self) :
        temp = self.head 

        while temp is not None :
            print(temp.data,end=" " )
            temp = temp.next 

    def append(self,value) :
        newnode = Node(value) 

        if self.head is None :
            self.head = newnode 
            self.tail = newnode 

        else :
            self.tail.next = newnode 
            self.tail = newnode     
            
        self.length += 1 

    def pop(self) :
        if self.length == 0 :
            return None 
        
        temp = self.head    
        pre = self.head 

        while temp.next is not None :
            pre = temp 
            temp = temp.next 

        self.tail = pre 
        self.tail.next = None 

        self.length -= 1 

        if self.length == 0 :
            self.head = None 
            self.tail = None 

        return temp.data 

    def prepend(self,value) :
        newnode = Node(value)

        if self.length == 0 :
            self.head = newnode 
            self.tail = newnode 

        else :
            newnode.next = self.head 
            self.head = newnode 

        self.length += 1 

        return True 
     
    def popfirst(self) :
        if self.length == 0 :
            return None 
        else :
            temp = self.head 

            self.head = self.head.next  
            temp.next = None 

            self.length -= 1 

            if self.length == 0 :
                self.tail = None 

            return temp.data 
        
    def get(self,index) :
        if index < 0 or index >= self.length :
            return None 
    
        temp = self.head 
        for _ in range(index) :
            temp = temp.next 
        
        return temp 

    def setit(self,value,index) :
        temp = self.get(index) 

        if temp is not None :
            temp.data = value 
            return True 
        return False 


    def add_random(self,index,value) :
        newnode = Node(value) 
        if index < 0 or index > self.length :
            return False 
        
        if index == 0 :
            return self.prepend(value) 

        if index == self.length :
            return self.append(value) 

        else :

            temp = self.head 

            for _ in range(index-1) :
                temp = temp.next 
        
            post = temp.next 
            temp.next = newnode 
            newnode.next = post  
        
        self.length += 1 
        return True     

    def remove(self,index) :
        if index < 0 or index > self.length : 
            return None 
        if index == 0 :
            return self.popfirst() 
        if index == self.length - 1 :
            return self.pop() 

        prev = self.get(index - 1) 
        temp = prev.next 

        prev.next = temp.next 
        temp.next = None 
        self.length -= 1 

        return temp.data
        
    def reverse(self) :
        temp = self.head 
        self.head = self.tail 
        self.tail = temp    

        after = temp.next 
        before = None 

        for _ in range(self.length) :
            after = temp.next 
            temp.next = before

            before = temp 
            temp = after

    def swap(self):
        if not self.head or not self.head.next:
            return

        prev = None
        curr = self.head
        self.head = curr.next  # Update head to the second node

        while curr and curr.next:
            new = curr.next
            curr.next = new.next
            new.next = curr

            if prev:
                prev.next = new

            prev = curr
            curr = curr.next
    
    def even(self) :
        temp = self.head 

        while temp is not None :
            if( temp.data % 2 == 0 ) :
                print(temp.data,end=" ") 

            temp = temp.next 

        print() 

    def prime(self):
        temp = self.head
        count = 0
        while temp is not None :
            if(temp.data == 2) :
                count += 1
            i=2
            while( i < temp.data ) :
                if( temp.data % i == 0 ) :
                    break
                count += 1
                i = i+1

            temp = temp.next

        print(count)

    def commonNodes(self, head1, head2):
        temp1 = head1.head
        # temp2 = head2.head

        count = 0

        while temp1 is not None:
            temp2 = head2.head
            while temp2 is not None:
                if temp1.data == temp2.data:
                    count += 1
                    break
                temp2 = temp2.next
            temp1 = temp1.next

        print(count)

    def eORo(self,head1) :
        temp = head1.head
        count = 0
        while temp is not None :
            count += 1
            temp = temp.next

        if(count%2==0) :
            print("even")
        else :
            print("odd")

    def countK(self,head1,k):
        temp = head1.head

        s = 0
        prod = 1

        while temp is not None :
            if temp.data % k == 0  :
                s = s + temp.data
                prod = prod * temp.data
            temp = temp.next

        print(s)
        print(prod)

    def nthnode(self,head1,k,l) :
        temp = head1.head
        it = 0
        while temp is not None and it < l - k :
            it = it+1
            temp = temp.next

        print(temp.data)

    def count(self,head1) :
        temp = head1.head
        count = 0
        while temp is not None :
            count += 1
            temp = temp.next

        return count

    def occurence(self,head1,d):
        temp = head1.head
        count = 0
        while temp is not None :
            if temp.data == d :
                count += 1
            temp = temp.next

        print(count)

    def removeDupes(self,head1):
        temp = head1.head

        while temp and temp.next is not None :
            if temp.data == temp.next.data :
                while temp.next is not None and temp.data == temp.next.data :
                    temp.next = temp.next.next
            # if temp.next is None :
            #     break

            temp = temp.next


    # def print2LL(self,head1,head2):
    #     temp1 = head1
    #     temp2 = head2
    #
    #     while temp1 is not None :
    #         print(temp1.data)
    #         temp1 = temp1.next
    #
    #     while temp2 is not None :
    #         print(temp2.data)
    #         temp2 = temp2.next
    #
    #     print()
# mylinkedlist = LinkedList(10)
# mylinkedlist.append(14)
# mylinkedlist.append(12)
# mylinkedlist.append(40)
# mylinkedlist.append(51)





# print(mylinkedlist.get(2) ) 

# mylinkedlist.add_random(2,11) 

# mylinkedlist.set(12,3)
# mylinkedlist.reverse() 

# mylinkedlist.print_list()
# print()
# mylinkedlist.even()
# mylinkedlist.swap() 


# mylinkedlist.prime()




# mylinkedlist.print_list()
# print("deleted :") 

# print(mylinkedlist.remove(2) )

# mylinkedlist.print_list() 

# print('\n') 
# print(mylinkedlist.popfirst()) 
# print(mylinkedlist.popfirst()) 

# print(mylinkedlist.pop()) 
# print('\n') 


if __name__ == '__main__' :
    head1 , head2 = None , None

    n1 = int(input("Enter the no. of nodes for LL1 :"))
    a = int(input())

    head1 = LinkedList(a)

    for i in range(n1-1) :
        a = int(input())
        head1.append(a)

    # n2 = int(input("Enter the no of nodes for LL2 :"))
    # b = int(input())
    # head2 = LinkedList(b)

    # for i in range(n2-1) :
    #     b = int(input())
    #     head2.append(b)


    # print("Enter k value:")
    # k = int(input())



    head1.print_list()
    print()
    # head2.print_list()

    # print()
    # head1.commonNodes(head1, head2)

    # print()
    # head1.eORo(head1)
    # print()

    print(head1.count(head1))
    # head1.countK(head1,k)
    print()

    # head1.nthnode(head1,k,head1.count(head1))

    # head1.occurence(head1,k)

    head1.removeDupes(head1)
    print()

    head1.print_list()
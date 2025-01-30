# trying out doubly linked list

class Node :
    def __init__(self,data) :
        self.data = data
        self.next = None
        self.prev = None

class LinkedList :
    def __init__(self,data) :
        newnode = Node(data)
        self.head = newnode
        self.tail = newnode

        self.length = 1

    def insertbegin(self,data) :
        newnode = Node(data)

        if self.head is None :
            return newnode

        newnode.next = self.head
        self.head.prev = newnode

        self.head = newnode

        return newnode


    def insertEnd(self,data) :
        newnode = Node(data)

        if self.head is None :
            return newnode

        temp = self.head

        while temp.next is not None :
            temp = temp.next

        temp.next = newnode
        newnode.prev = temp

        return self.head

    def insertrandom(self,data,key) :
        newnode = Node(data)

        if self.head is None :
            self.head = newnode
            return

        temp = self.head

        while temp is not None :
            if temp.data == key :
                break

            temp = temp.next

        newnode.next = temp.next
        newnode.next.prev = newnode
        temp.next = newnode
        newnode.prev = temp

        return self.head

    def deletefront(self) :
        if not(self.head and self.head.next) :
            return

        temp = self.head
        self.head = self.head.next
        temp = None

    def deleteend(self) :
        if not(self.head and self.head.next) :
            return

        temp = self.head
        while temp.next is not None :
            temp = temp.next

        temp.prev.next = None

        return self.head

    def deleterandom(self,key) :
        if not(self.head and self.head.next) :
            return self.head

        temp = self.head

        while temp is not None :
            if( temp.data == key ) :
                break
            temp = temp.next

        deleteNode = temp.next
        temp.next = deleteNode.next
        deleteNode.prev = temp

        deleteNode = None

        return self.head

    def detectingcycle(self) :
        if not(self.head and self.head.next) :
            return

        slow = self.head
        fast = self.head

        flag = True

        while fast and fast.next :
            slow = slow.next
            fast = fast.next.next

            if slow == fast :
                flag = False
                break


        if not(flag) :
            return True
        else :
            return False

    def isCircularList(self) :
        if not(self.head and self.head.next) :
            return self.head

        temp = self.head

        temp = self.head.next

        while temp is not None and temp != self.head :
            temp = temp.next

        if temp == self.head :
            return True

        return False

    def removeLoop(self):



        





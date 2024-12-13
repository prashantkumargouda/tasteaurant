class Node :
    def __init__(self,data) :
        self.data = data
        self.next = None

class LinkedList :
    def __init__(self) :
        self.head = None

    def print_list(self,head) :
        temp = head

        while temp is not None :
            print(temp.data,end = " ")
            temp = temp.next

    def push(self,data) :
        newnode = Node(data)
        newnode.next = self.head
        self.head = newnode

    def detectLoop1 (self) :
        s = set()
        temp = self.head

        while( temp ) :
            if temp in s :
                return True

            s.add(temp)

            temp = temp.next

        return False

    def floydcycle(self):

        slow = self.head
        fast = self.head

        while slow and fast and fast.next is not None :
            slow = slow.next
            fast = fast.next.next

            if slow == fast :
                return True
                break

        return False



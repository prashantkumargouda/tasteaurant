class Node :
    def __init__(self,data):
        self.data = data
        self.right = None
        self.left = None

class Tree :
    def __init__(self) :
        self.root = None

    def _insert(self,curr,data) :
        if data < curr.data :
            if curr.left is None :
                curr.left = Node(data)
            else :
                self._insert(curr.left, data)
        else :
            if curr.right is None :
                curr.right = Node(data)
            else :
                self._insert(curr.right,data)

    def insert(self,data):
        if self.root is None :
            self.root = Node(data)

        self._insert(self.root , data)
        return self.root

    def printInorder(self,curr):
        if curr is None :
            return

        self.printInorder(curr.left)
        print(curr.data, end =" ")
        self.printInorder(curr.right)





t1 = Tree()
root = t1.insert(20)
t1.insert(15)
t1.insert(18)
t1.insert(17)

t1.printInorder(root)


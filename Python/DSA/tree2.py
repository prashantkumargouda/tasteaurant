class Node :
    def __init__(self,data) :
        self.data = data
        self.lchild = None
        self.rchild = None

    def insert(self,key) :
        if self.data :
            if key < self.data :
                if self.lchild is None :
                    self.lchild = Node(key)

                else :
                    self.lchild.insert(key)

            elif key > self.data :
                if self.rchild is None :
                    self.rchild = Node(key)

                else :
                    self.rchild.insert(key)
        else :
            self.data = key
    def PrintTree(self) :
        if self.data is None :
            return 0

        if self.lchild :
            self.lchild.PrintTree()

        print(self.data)

        if self.rchild :
            self.rchild.PrintTree()

    def Depth(self,node):
        if node is None :
            return 0
        else :
            left_depth = self.Depth(node.lchild)
            right_depth = self.Depth(node.rchild)

            depth = max(left_depth,right_depth)

            return depth


root = Node(10)

root.insert(12)

root.insert(1)
root.insert(9)
root.insert(3)

root.insert(8)

root.PrintTree()

print(root.Depth(root.insert(13)))

# array_to_binarytree

class TNode:
    def __init__(self, v: int, l = None, r = None):
        self.v = v
        self.l = l
        self.r = r


def convert_arr_to_binarytree(arr: list, i = 0):
    if i >= len(arr) or arr[i] == None:
        return None

    return TNode(arr[i], convert_arr_to_binarytree(arr, i * 2 + 1), convert_arr_to_binarytree(arr, i * 2 + 2))


def preorder(node: TNode):
    if node:
        print(f'Node: {node.v}')
        preorder(node.l)
        preorder(node.r)


if __name__ == '__main__':
    arr = [2, 4, 7, 8, 10, 11, 12]
    tree = convert_arr_to_binarytree(arr)

    print(tree)
    preorder(tree)
    

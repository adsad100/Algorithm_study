"""
# Definition for a Node.
class Node:
    def __init__(self, val, prev, next, child):
        self.val = val
        self.prev = prev
        self.next = next
        self.child = child
"""

class Solution:
    def flatten(self, head: 'Node') -> 'Node':
        st = [head]
        ans = []
        
        while st:
            temp = st.pop()
            if temp:
                ans.append(temp.val)
                if temp.next:
                    st.append(temp.next)

                if temp.child:
                    st.append(temp.child)
        
        if ans:
            ret = Node(ans[0])
            temp = ret
            for i in range(1, len(ans)):
                temp.next = Node(ans[i], temp)
                temp = temp.next
            return ret
        
        return None
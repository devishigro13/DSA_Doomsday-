# 19. Remove Nth Node From End of List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow) ![Topic](https://img.shields.io/badge/Topic-Linked_List-blue) ![Topic](https://img.shields.io/badge/Topic-Two_Pointers-blue) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 0 ms |
| Memory | 14.8 MB |
| Submission Date | 2026-10-26T17:54:48.373Z |
| Platform | leetcode |

## Problem Statement

<p>Given the <code>head</code> of a linked list, remove the <code>n<sup>th</sup></code> node from the end of the list and return its head.</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/03/remove_ex1.jpg" style="width: 542px; height: 222px;" />
<pre>
<strong>Input:</strong> head = [1,2,3,4,5], n = 2
<strong>Output:</strong> [1,2,3,5]
</pre>

<p>
```

**Example 2:**

```
</p>

<pre>
<strong>Input:</strong> head = [1], n = 1
<strong>Output:</strong> []
</pre>

<p>
```

**Example 3:**

```
</p>

<pre>
<strong>Input:</strong> head = [1,2], n = 1
<strong>Output:</strong> [1]
</pre>

<p>&nbsp;</p>
```

## Constraints

- The number of nodes in the list is <code>sz</code>.
- <code>1 &lt;= sz &lt;= 30</code>
- <code>0 &lt;= Node.val &lt;= 100</code>
- <code>1 &lt;= n &lt;= sz</code>

## Solution

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=0;
        ListNode* current=head;
        while(current){
            length++;
            current=current->next;
        }
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        int steps=length-n;
        for(int i=0;i<steps;i++){
            prev=prev->next;
        }
        ListNode* to_delete=prev->next;
        prev->next=prev->next->next;
        delete to_delete;
        return dummy->next;
    }
    
};
```

[View on LeetCode](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)

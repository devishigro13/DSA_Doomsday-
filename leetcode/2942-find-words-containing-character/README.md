# 2942. Find Words Containing Character

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen) ![Topic](https://img.shields.io/badge/Topic-Array-blue) ![Topic](https://img.shields.io/badge/Topic-String-blue) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 2 ms |
| Memory | 32.8 MB |
| Submission Date | 2026-11-01T17:58:47.834Z |
| Platform | leetcode |

## Problem Statement

<p>You are given a <strong>0-indexed</strong> array of strings <code>words</code> and a character <code>x</code>.</p>

<p>Return <em>an <strong>array of indices</strong> representing the words that contain the character </em><code>x</code>.</p>

<p><strong>Note</strong> that the returned array may be in <strong>any</strong> order.</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>

<pre>
<strong>Input:</strong> words = [&quot;leet&quot;,&quot;code&quot;], x = &quot;e&quot;
<strong>Output:</strong> [0,1]
<strong>Explanation:</strong> &quot;e&quot; occurs in both words: &quot;l<strong><u>ee</u></strong>t&quot;, and &quot;cod<u><strong>e</strong></u>&quot;. Hence, we return indices 0 and 1.
</pre>

<p>
```

**Example 2:**

```
</p>

<pre>
<strong>Input:</strong> words = [&quot;abc&quot;,&quot;bcd&quot;,&quot;aaaa&quot;,&quot;cbc&quot;], x = &quot;a&quot;
<strong>Output:</strong> [0,2]
<strong>Explanation:</strong> &quot;a&quot; occurs in &quot;<strong><u>a</u></strong>bc&quot;, and &quot;<u><strong>aaaa</strong></u>&quot;. Hence, we return indices 0 and 2.
</pre>

<p>
```

**Example 3:**

```
</p>

<pre>
<strong>Input:</strong> words = [&quot;abc&quot;,&quot;bcd&quot;,&quot;aaaa&quot;,&quot;cbc&quot;], x = &quot;z&quot;
<strong>Output:</strong> []
<strong>Explanation:</strong> &quot;z&quot; does not occur in any of the words. Hence, we return an empty array.
</pre>

<p>&nbsp;</p>
```

## Constraints

- <code>1 &lt;= words.length &lt;= 50</code>
- <code>1 &lt;= words[i].length &lt;= 50</code>
- <code>x</code> is a lowercase English letter.
- <code>words[i]</code> consists only of lowercase English letters.

## Solution

```cpp
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>res;
        for(int i=0;i<words.size();i++){
            if(count(words[i].begin(),words[i].end(),x)) res.push_back(i);
        }
        return res;
    }
};
```

[View on LeetCode](https://leetcode.com/problems/find-words-containing-character/)

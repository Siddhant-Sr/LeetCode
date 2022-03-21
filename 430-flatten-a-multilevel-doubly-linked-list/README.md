<h2><a href="https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/">430. Flatten a Multilevel Doubly Linked List</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a doubly linked list, which contains nodes that have a next pointer, a previous pointer, and an additional <strong style="user-select: auto;">child pointer</strong>. This child pointer may or may not point to a separate doubly linked list, also containing these special nodes. These child lists may have one or more children of their own, and so on, to produce a <strong style="user-select: auto;">multilevel data structure</strong> as shown in the example below.</p>

<p style="user-select: auto;">Given the <code style="user-select: auto;">head</code> of the first level of the list, <strong style="user-select: auto;">flatten</strong> the list so that all the nodes appear in a single-level, doubly linked list. Let <code style="user-select: auto;">curr</code> be a node with a child list. The nodes in the child list should appear <strong style="user-select: auto;">after</strong> <code style="user-select: auto;">curr</code> and <strong style="user-select: auto;">before</strong> <code style="user-select: auto;">curr.next</code> in the flattened list.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the </em><code style="user-select: auto;">head</code><em style="user-select: auto;"> of the flattened list. The nodes in the list must have <strong style="user-select: auto;">all</strong> of their child pointers set to </em><code style="user-select: auto;">null</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/09/flatten11.jpg" style="width: 700px; height: 339px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
<strong style="user-select: auto;">Output:</strong> [1,2,3,7,8,11,12,9,10,4,5,6]
<strong style="user-select: auto;">Explanation:</strong> The multilevel linked list in the input is shown.
After flattening the multilevel linked list it becomes:
<img src="https://assets.leetcode.com/uploads/2021/11/09/flatten12.jpg" style="width: 1000px; height: 69px; user-select: auto;">
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/09/flatten2.1jpg" style="width: 200px; height: 200px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1,2,null,3]
<strong style="user-select: auto;">Output:</strong> [1,3,2]
<strong style="user-select: auto;">Explanation:</strong> The multilevel linked list in the input is shown.
After flattening the multilevel linked list it becomes:
<img src="https://assets.leetcode.com/uploads/2021/11/24/list.jpg" style="width: 300px; height: 87px; user-select: auto;">
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = []
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explanation:</strong> There could be empty list in the input.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of Nodes will not exceed <code style="user-select: auto;">1000</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= Node.val &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">How the multilevel linked list is represented in test cases:</strong></p>

<p style="user-select: auto;">We use the multilevel linked list from <strong style="user-select: auto;">Example 1</strong> above:</p>

<pre style="user-select: auto;"> 1---2---3---4---5---6--NULL
         |
         7---8---9---10--NULL
             |
             11--12--NULL</pre>

<p style="user-select: auto;">The serialization of each level is as follows:</p>

<pre style="user-select: auto;">[1,2,3,4,5,6,null]
[7,8,9,10,null]
[11,12,null]
</pre>

<p style="user-select: auto;">To serialize all levels together, we will add nulls in each level to signify no node connects to the upper node of the previous level. The serialization becomes:</p>

<pre style="user-select: auto;">[1,    2,    3, 4, 5, 6, null]
             |
[null, null, 7,    8, 9, 10, null]
                   |
[            null, 11, 12, null]
</pre>

<p style="user-select: auto;">Merging the serialization of each level and removing trailing nulls we obtain:</p>

<pre style="user-select: auto;">[1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
</pre>
</div>
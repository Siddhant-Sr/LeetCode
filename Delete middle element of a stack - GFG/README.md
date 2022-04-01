# Delete middle element of a stack
##  Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a stack with<strong style="user-select: auto;"> push(), pop(), empty() </strong>operations, delete the&nbsp;<strong style="user-select: auto;">middle </strong>of the stack&nbsp;without using any additional data structure.<br style="user-select: auto;">
<strong style="user-select: auto;">Middle: </strong>ceil(size_of_stack/2.0) </span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
Stack = {1, 2, 3, 4, 5}
<strong style="user-select: auto;">Output</strong>:
ModifiedStack = {1, 2, 4, 5}
<strong style="user-select: auto;">Explanation</strong>:
As the number of elements is&nbsp;5 , 
hence the middle element will be the 3rd
element which is deleted</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
Stack = {1 2 3 4}
<strong style="user-select: auto;">Output</strong>:
ModifiedStack = {1 3 4}
<strong style="user-select: auto;">Explanation</strong>:
As the number of elements is&nbsp;4 , 
hence the middle element will be the 2nd
element which is deleted</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything.&nbsp;Complete the function <strong style="user-select: auto;">deleteMid() </strong>which takes the stack and its size as&nbsp;input parameters&nbsp;and&nbsp;modifies the&nbsp;stack in-place.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note</strong>: The output shows the stack from top to bottom. </span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
2 ≤ size of stack&nbsp;≤ 100</span></p>
 <p style="user-select: auto;"></p>
            </div>
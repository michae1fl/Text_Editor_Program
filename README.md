# Text Editor Program
Sample Text Editor Program

Overview

This project involves the creation of a simplified text editor in C++
that allows users to perform undo and redo operations.


Project Description

The core functionality of this text editor is to enable the 'undo'
and 'redo' features. The editor must support the following commands:

t text: Type the given "text" into the editor.

u: Undo the last type command.

r: Redo the last undone command.


Stacks Implementation

Implement two stacks: a typing stack for entered text and an undo stack for undone text.
The undo command moves the last text from the typing stack to the undo stack.
The redo command moves the last text from the undo stack back to the typing stack.
The undo stack remains unchanged when typing new text.


Simplified Editor Behavior

The editor maintains the same undo stack regardless of the cursor's position in the document.
Only undo and redo commands affect the undo stack.


Input

Read from standard input (cin).
The first line contains an integer n (1 ≤ n ≤ 1000), the number of commands.
The next n lines contain one of three commands: t text, u, or r.


Output 

After processing all commands, output two lines: the first for the typing stack and the second for the undo stack.
Both stacks should be output from bottom to top. Use an additional stack if necessary to reverse the order.
Separate adjacent words with a single space.

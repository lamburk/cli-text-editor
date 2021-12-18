# cli-text-editor

In this project, you should write a simple line editor. Keep the entire text on a file, one line in a key Enter. Start the program with entering EDIT file, after which a prompt appears along with the line number. If the letter I is entered with a number n following it, then insert the text to be followed before line n. If I is not followed by a number, then insert the text before the current line. If D is entered with two numbers n and m, one n, or no number following it, then delete lines n through m, line n, or the current line. Do the same with the command L, which stands for listing lines. If A is entered, then append the text to the existing lines. Entry E signifies exit and saving the text in a file. Here is an Example:

EDIT testfile
1>The first line
2>
3> And another line
4>I3
3> The second line
4> One more line
5> L
1>The first line
2>
3> The second line
4> One more line
5> And another line // This is now line 5, not 3;
5> D2 // line 5, since L was issued from line 5;
4> L //line 4, since one line was deleted;
The first line
2> The second line // this and the following lines
3> One more line // now have new numbers
4> And another line
4> E

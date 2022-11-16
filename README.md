# Tic-Tac-Toe-Game-
This Tic Tac Toe game is between two players entering slot numbers from zero to eight.
-----------------------------------------------------------------------------
A program for a Tic-Tac-Toe game between two players. You will
show a 3x3 grid to the players with empty slots. Player 1 will use symbol
(X) and player 2 will use (O). Ask players to select the slot number and
fill that with X or O depending upon the player having the turn. At any
stage if the player wins, terminate your program and display the result.
You should follow these steps:
1. Define a 3x3 array (e.g. grid) of character data type and initialize
all of its elements by a space (empty grid).
2. Ask player 1 to select a slot (0-8). Then apply logic to assign ‘X’
to the respective array location. For example, if player 1 selects
slot number 5, then you should assign grid[1][2]= ‘X’.
3. Display the grid with updated slot values.
4. Check for the condition of winning. You have three conditions in
row, three in column and two in diagonal (total 8).
5. If the winning condition is false, ask for player 2 to select his
slot. Again, apply the logic to assign ‘O’ to the respective array
location.
6. Display the grid with updated slot values.
7. Check for the condition of winning.
8. If the winning condition is false and total turns are less than 9,
go back to step 2 using a while loop.

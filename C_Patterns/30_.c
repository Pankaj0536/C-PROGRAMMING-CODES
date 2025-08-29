/* 
Concentric Number Labyrinth (no arrays, O(1) extra space)
Print an n×n grid where the value at (i,j) = distance from the nearest border + 1, but skip every 3rd ring with blanks.
For n=9 (top-left shown):

1 1 1 1 1 1 1 1 1
1 2 2 2 2 2 2 2 1
1 2 _ _ _ _ _ 2 1
1 2 _ 3 3 3 _ 2 1
1 2 _ 3 4 3 _ 2 1
1 2 _ 3 3 3 _ 2 1
1 2 _ _ _ _ _ 2 1
1 2 2 2 2 2 2 2 1
1 1 1 1 1 1 1 1 1

*/
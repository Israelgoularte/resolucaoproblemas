Problem Statement
AtCoDeer the deer is going on a trip in a two-dimensional plane. In his plan, he will depart from point 
(
0
,
0
)
(0,0) at time 
0
0, then for each 
i
i between 
1
1 and 
N
N (inclusive), he will visit point 
(
x
i
,
y
i
)
(x 
i
​
 ,y 
i
​
 ) at time 
t
i
t 
i
​
 .

If AtCoDeer is at point 
(
x
,
y
)
(x,y) at time 
t
t, he can be at one of the following points at time 
t
+
1
t+1: 
(
x
+
1
,
y
)
(x+1,y), 
(
x
−
1
,
y
)
(x−1,y), 
(
x
,
y
+
1
)
(x,y+1) and 
(
x
,
y
−
1
)
(x,y−1). Note that he cannot stay at his place. Determine whether he can carry out his plan.

Constraints
1
1 
≤
≤ 
N
N 
≤
≤ 
10
5
10 
5
 
0
0 
≤
≤ 
x
i
x 
i
​
  
≤
≤ 
10
5
10 
5
 
0
0 
≤
≤ 
y
i
y 
i
​
  
≤
≤ 
10
5
10 
5
 
1
1 
≤
≤ 
t
i
t 
i
​
  
≤
≤ 
10
5
10 
5
 
t
i
t 
i
​
  
<
< 
t
i
+
1
t 
i+1
​
  (
1
1 
≤
≤ 
i
i 
≤
≤ 
N
−
1
N−1)
All input values are integers.
Input
Input is given from Standard Input in the following format:

N
N
t
1
t 
1
​
  
x
1
x 
1
​
  
y
1
y 
1
​
 
t
2
t 
2
​
  
x
2
x 
2
​
  
y
2
y 
2
​
 
:
:
t
N
t 
N
​
  
x
N
x 
N
​
  
y
N
y 
N
​
 
Output
If AtCoDeer can carry out his plan, print Yes; if he cannot, print No.

Sample 1
Inputcopy	Outputcopy
2
3 1 2
6 1 1
Yes
For example, he can travel as follows: 
(
0
,
0
)
(0,0), 
(
0
,
1
)
(0,1), 
(
1
,
1
)
(1,1), 
(
1
,
2
)
(1,2), 
(
1
,
1
)
(1,1), 
(
1
,
0
)
(1,0), then 
(
1
,
1
)
(1,1).

Sample 2
Inputcopy	Outputcopy
1
2 100 100
No
It is impossible to be at 
(
100
,
100
)
(100,100) two seconds after being at 
(
0
,
0
)
(0,0).

Sample 3
Inputcopy	Outputcopy
2
5 1 1
100 1 1
No
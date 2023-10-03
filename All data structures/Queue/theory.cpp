/*		Static implimentation of Queue

in case of static implimentation we have to create the array. as we have to acces the queue from both the ends
we have to mentain 2 index vriable as Front and Rare.
consider below queue of 5 elements

  0    1   2   3    4     5
|----|---|---|----|----|----|
| 10 | 20| 30| 40 | 50 | 60 |
|----|---|---|----|----|----|
Front = -1;                  rare = 5;

After inserting 5 elements and removing first 2 elements we cant insert any new value into it.
this problem is due to the linear nature of the queue.
to avoid that droback  we have to implament the queue in circuler way.

     |--------------------------------|
     |	|---|----|---|---|---|----|   |
     ---|   |    |   |   |   |    |---- 
	|   |    |   |   |   |    |
	---------------------------

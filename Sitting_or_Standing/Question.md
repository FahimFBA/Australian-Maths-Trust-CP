<h2 align="center"> 
 Question
</h2>

[Click here to go to the problem link!](https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=342)

<hr>

The problems in this set are designed to be more accessible to beginning coders. As a learning aid, walkthroughs discussing how to solve the problems in this set are available by clicking on this link. On completion of this problem set, students should know how to use a programming language to read and write files, perform simple arithmetic calculations, and write conditional (if) statements.

# Sitting or Standing?

Input File: sitin.txt
Output File: sitout.txt
Time Limit: 1 second

A local musician is putting on a concert to raise money for charity. The concert will be held in the town hall, a spacious venue perfectly suited for such an event. There are r rows of seats, each containing exactly s seats. At most one person can sit on a single seat (that is, two people cannot share a seat).

There is a problem - the concert may have been overbooked! This means that if everybody who bought tickets comes to the concert, some of them might have to stand. Now the musician has aproached you, not for advice, but for the answer to the following question: if everybody who bought tickets arrives and tries to find a seat, how many people will end up sitting, and how many people will be standing?

# Input

The first line of the input file will consist of the two integers r and s: the number of rows and the number of seats per row in that order. It is guaranteed that 0 <= r, s <= 10,000. The second line will contain a single integer between 0 and 1,000,000,000: the number of tickets that have been bought.

# Output

Your output file should consist of two integers separated by a space: the number of people sitting and standing respectively.

Remember, everybody tries to sit if they can. If the concert has been overbooked, you will not be able to seat them all.

# Sample Input

```
7 12
100
```

# Sample Output

```
84 16
```

# Explanation

The first line of input says that there are 7 rows of 12 seats each (i.e. 7 x 12 = 84 seats total). The second line says that 100 people have booked tickets. Since there aren't enough seats for all of them, only 84 people may sit and the remaining 16 must stand.

Scoring
The score for each input file will be 100% if the correct answer is written to the output file and 0% otherwise.

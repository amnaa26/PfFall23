## Amna(23K-0066)
***
### Question # 1 :
1. Begin
2. Declare performance[20][20], totalRun[20], averageRun[20], arrOfHighestScore[20], Century[20], HalfCenturies[20]
3. Declare numOfBatsmen, numOfInnings, highestScore, score, numOfCentury, numOfHalfCenturies as integers
4. Input numOfBatsmen from user
5. Input numOfInnings from user
6. Loop for each player i in range 0 to numOfBatsmen:

    a. Set score to 0
   
    b. Loop for each inning j in range 0 to numOfInnings:

        - Input performance of batsman (i+1) in inning (j+1)
        - Add performance[i][j] to score
        - Set totalRun[i] as the running total score
    c. Calculate averageRun[i] by dividing score by numOfInnings
8. Set highestScore to performance[0][0]
9. Loop for each inning j in range 0 to numOfInnings:
    a. Loop for each player i in range 0 to numOfBatsmen:

       - If highestScore is less than performance[i][j], update highestScore and arrOfHighestScore[j]
        - Else update arrOfHighestScore[j] with highestScore
10. Loop for each player i in range 0 to numOfBatsmen:
    a. Set numOfCentury and numOfHalfCenturies to 0
    b. Loop for each inning j in range 0 to numOfInnings:

        - If performance[i][j] > 99, increment numOfCentury
        - If performance[i][j] is between 50 and 99, increment numOfHalfCenturies
    c. Set Century[i] to numOfCentury and HalfCenturies[i] to numOfHalfCenturies
12. Display totalRun, averageRun, arrOfHighestScore, Century, HalfCenturies for each player
13. End
***
### Question # 2 :
1. Start
2. Declare matrix[100][100], rows, cols, max, max_i, max_j, dp[100][100]
3. Input rows and cols from the user
4. Input matrix elements (0 or 1) from the user
5. Display the input matrix
6. Initialize dp[][] elements to 0
7. Set max, max_i, max_j to 0
8. Iterate through rows and set dp[i][0] to matrix[i][0], update max, max_i, max_j if matrix[i][0] == 1
9. Iterate through columns and set dp[0][j] to matrix[0][j], update max, max_i, max_j if matrix[0][j] == 1
10. Iterate through rows and columns

         a. If matrix[i][j] == 1, set dp[i][j] to 1 + minimum of dp[i-1][j], dp[i][j-1], dp[i-1][j-1]
         b. Update max, max_i, max_j if dp[i][j] > max
         c. Else, set dp[i][j] to 0
12. Display row and column numbers for 1s in the largest square submatrix using max, max_i, max_j
13. End
***
### Question # 3 :
1. Initialize two matrices representing morning and evening flight availability and prices.
2. Display menu options to the user.
3. Based on user input:
    - For option 1:
        - Calculate the available days for morning and evening flights.
        - Determine the most convenient day and time slot.
    - For option 2:
        - Display the best morning flight options and the lowest-priced day.
    - For option 3:
        - Display the best evening flight options and the lowest-priced day.
    - For option 4:
        - Prompt the user to input a specific day.
        - Check availability and price for morning and evening flights on the entered day.
    - For any invalid input:
        - Display an error message indicating an invalid option.
4. End the program.
****
### Question # 4 :
1. Start the maze adventure
2. Initialize a 5x5 maze with specific characters
3. Display a welcome message for the maze adventure
4. Display the original maze:
    a. Loop for each row in maze:

      
        - Loop for each column in row:
            Display the character at the current position in the maze
        - Display a newline
6. Display the maze after traversal:
    a. Loop for each row in maze:


       - Set path_found to 0
        - Loop for each column in row:
            - If the current position contains 'S' or 'O' or 'E':
                Display the current position
            - Else if the current position contains 'W':
                Set path_found to the previous column index
                Display a newline
                Break out of the inner loop
8. End of maze adventure
****
### Question # 5 :
1. Request the user to input a number and store it.
2. Read and store the entered number as 'n'.
3. For each 'i' from 1 to n^3:

       a. Set 'count' to 0.
       b. For each 'x' from 1 to x^3 < i:
           - For each 'y' from 'x' to x^3 + y^3 <= i:
               - If x^3 + y^3 equals 'i':
                   * Increment 'count' by 1.
               - End If
           - End For
       c. If 'count' equals 2:
           - Display 'i'.
5. End
****
### Question # 6 :
1. Prompt the user to input the size of the array.
2. Read and store the size of the array from the user into variable 'n'.
3. Declare an integer array 'arr' of size 'n'.
4. Declare integers 'i', 'j', and 'targetInt'.
5. Prompt the user to input a number.
6. Read and store the number from the user into variable 'targetInt'.

7. Loop from 0 to 'n - 1':
    a. Prompt the user to input an element for the array.
    b. Read and store the element from the user into the 'i-th' position of the 'arr' array.

8. Print the inputted array 'arr'.

9. Loop from 0 to 'n - 1':

       a. If 'arr[i]' is equal to -1:
           - Break the loop.
       b. Else:
           - Loop from 'i' to 'n - 1':
               - If 'arr[i] + arr[j + 1]' is equal to 'targetInt':
                   * Print the pair (arr[i], arr[j + 1]).
           - Assign -1 to 'arr[i]'.
11. End of loops.
****
### Question # 7 : 







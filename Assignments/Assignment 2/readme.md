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
1. Declare variables 'i', 'j', 'a' as integers.
2. Prompt the user to enter the number of shirts ('a').
3. Read the input as 'a'.
4. Declare a 2D array 'arr' to store the age and price of shirts.
5. Loop 'i' from 0 to 'a - 1':

       a. Prompt the user to enter the age for the 'i+1' shirt.
       b. Read and store the input as 'arr[i][0]' (age).

       c. Prompt the user to enter the price for the 'i+1' shirt.
       d. Read and store the input as 'arr[i][1]' (price).
7. Declare variables 'temp', 'temp2' as integers.
8. Sort the 'arr' array based on age ('arr[i][0]') using nested loops and swapping.
9. Sort the 'arr' array based on price ('arr[i][1]') using nested loops and swapping.
10. Display the sorted array showing shirts' age and price.
****
### Question # 8 :
1. Define a function 'calculate_persistence' that takes an integer 'num' as input:

       a. Initialize 'persistence' as 0.
       b. If 'num' is less than 10:
           - Return 'persistence' (0) as the number is a single digit.
       c. While 'num' is greater than or equal to 10:
           - Initialize 'product' as 1.
           - Create a temporary variable 'temp' to store 'num'.
           - While 'temp' is greater than 0:
               i. Multiply 'product' by the last digit of 'temp'.
               ii. Update 'temp' by removing its last digit.
           - Set 'num' as the calculated 'product'.
           - Increment 'persistence' by 1.
       d. Return 'persistence' as the final persistence value.

 3. In the main function:

        a. Initialize 'num' as an integer.
        b. Loop indefinitely:
           - Prompt the user to enter a positive integer (EOF to quit).
           - Read the input as 'num'.
           - If 'num' is less than 1:
               i. Display an error message asking for a positive integer.
           - Else:
               i. Calculate the persistence of 'num' using 'calculate_persistence' function.
               ii. Display the calculated persistence for 'num'.
           - Break the loop on EOF.
 4. End
 ****
### Question # 9 :
 1. Declare variables 'n', 'i', 'j', 'l', 'count' as integers
 2. Prompt the user to enter the value of 'n' (size of NxN matrix)
 3. Read and store the value of 'n' in the variable 'n'
 4. Declare a 2D array 'arr' of size 'n x n'
 5. Loop from 'i' to initialize the 'arr' matrix elements to 0:
       
         a. Loop from 'j' to initialize each row of the 'arr' matrix to 0:
            - Set arr[i][j] to 0

 6. Initialize 'l' and 'count' to 0
 7. Loop from 'l' to populate the upper-left side of the matrix:

           a. Loop from 'i' to 'n/2 + n % 2':

            - If 'i' equals 'l':
                   i. Loop from 'j' to 'n - l':
                     - Set arr[i][j] to 'count'
                     - Increment 'count'

            - If 'i' is greater than 'l' and less than 'n - 1 - l':
                 - Set arr[i][n - 1 - l] to 'count'
                 - Increment 'count'

            - If 'i' equals 'n - 1 - l' and 'i' is not equal to '(n / 2 + n % 2) - 1':
                  i. Loop from 'j' to 'l':
                     - Set arr[i][j] to 'count'
                     - Decrement 'count'

    b. Loop from 'i' to 'n - 2 - l':

        - Set arr[i][l] to 'count'
        - Increment 'count'
9. Display the matrix pattern 1 by iterating through 'arr' and printing its elements
10. Loop to reset 'arr' matrix elements to 0:

        a. Loop from 'i' to 'n':
           b. Loop from 'j' to 'n':
               - Set arr[i][j] to 0

11. Display a newline
12. Reset 'l' and 'count' to 0
13. Loop from 'l' to populate the upper-right side of the matrix:
  
    a. Loop from 'i' to 'n / 2 + n % 2':

        - If 'i' equals 'l':
            i. Loop from 'j' to 'n - 1 - l':
                - Set arr[i][j] to 'count'
                - Decrement 'count'

        - If 'i' is greater than 'l' and less than 'n - 1 - l':
            - Set arr[i][l] to 'count'
            - Decrement 'count'

        - If 'i' equals 'n - 1 - l' and 'i' is not equal to '(n / 2 + n % 2) - 1':
            i. Loop from 'j' to 'n - l':
                - Set arr[i][j] to 'count'
                - Decrement 'count'

    b. Loop from 'i' to 'n - 2 - l':

         - Set arr[i][n - 1 - l] to 'count'
        - Decrement 'count'

14. Display the matrix pattern 2 by iterating through 'arr' and printing its elements
15. End
*****










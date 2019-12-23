3d array program
Nam Vuong
vuong034@umn.edu

Included files:
myData.h-header file
ReadMe.txt-readme document
3d_array.c-source code
3d_array_script-script file

Program description:
Source code lab1.c includes myData.h for a three dimensional array set with [12][7][10] representing 12 months of the year, 7 days of the week, and 10 lanes with unique values. Main calls the menu function and the array set cashIn is passed to the function. Menu then prompts the user to enter 1, 2 , 3, or 4 for the selected calculations or quit out of the program. Input is acceopoted into the buffer and is converted into a string if user does not enter a valid option, an error message will appear and will prompt the user to enter another number. For option 1, a loop is created for each month, days in the week, then number of lanes. Each lane is then added up to a running total and is then printed as a formatted float. For option 2, the same loop is applied, however weekday loop starts at 1 and ends at 5. For option 3, the user is prompted for an number from 1-10. The number is converted into an integer and checked if it is a valid lane within the array. The array is looped and checks eack lane if it matches, then it adds the lane to the running total. 

Usage statement:
Compile code using gcc and run through command line
When prompted for user input, select 1-3 for the desired option or 4 to quit program.

Data Structure:
[12][7][10]
3 dimensional array
12 months, 7 days, 10 lanes with constant float values.

Function descriptions:
Main
:calls menu function with cashIn 3D array passed in. Then exits when the menu returns.
Menu Function-
Prints prompts and takes user input within a while loop. Takes user input and converts it to an integer. Then selects the correct function matching the user input using a switch case. If the user inputs 4, the function returns to main and exits the program.

sumTotal-
3D array is passed in and is looped through using 3 forloops for each dimension. In the inner most for loop, each lane is being added to a total which is printed after all lanes are totaled through the 12 months.

sumWeekday-
3D array is passed in. There are 3 loops, however for the middle loop which represents the weeks, the initial count starts at 1 and stops before 6. The lanes for each of these days in the month are added in a running total.

sumLane-
Prompts user for lane 1-10. User Inputs desired lane to total then the input is converted to a string.  If the integer is valid 3 for loops are used to iterate through the array. Then each lane is checked if it matches the input. If the input matches then it is added to the total. 



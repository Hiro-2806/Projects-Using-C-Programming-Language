<h1>DAY OF WEEK CALCULATOR</h1>

Welcome to the Day of Week Calculator! This C program allows you to input a specific date (month, day, year) and calculates which day of the week that date falls on.

<h2>Features</h2>
  Input a date in the format: month, day, year.
  Validates input for correctness.
  Calculates the day of the week based on the given date.
  Supports leap year calculations.
  
<h2>How It Works</h2>
The program uses the following logic:

  Input Validation: Checks if the input month, day, and year are valid.
  Leap Year Adjustment: Adjusts February days based on whether the year is a leap year.
  
<h2>Day Calculation:</h2>
  Calculates the total number of days from the beginning of the Gregorian calendar up to the specified date.

<h2>Usage:</h2>
  Compile the program using a C compiler:
    gcc day_of_week_calculator.c -o day_of_week_calculator
    
  Run the executable:
    ./day_of_week_calculator

  Enter the month, day, and year when prompted (e.g., 10 21 2024).
  
  The program will display the corresponding day of the week for the entered date.

<h2>Example:</h2>

            Welcome to the day of week calculator
            Please enter the month, date, and year:
            10 
            21 
            2024
            10/21/2024 => Monday

<h2>Notes:</h2>
  Ensure that the input is in the correct format.
  The program currently assumes a valid Gregorian calendar date; input outside this range may lead to incorrect outputs.
  
<h2>Limitations:</h2>
  The program does not handle historical date changes (e.g., the transition from the Julian to the Gregorian calendar).
  Only works with dates from year 1 onward.
  
<h2>Contributing:</h2>
  Feel free to contribute by submitting issues or pull requests. Any improvements or bug fixes are welcome!

<h1>Author :</h1>
   HIRESHKUMARAN G (https://github.com/Hiro-2806)

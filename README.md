# porgramming_Assignment1_BasicsProgramming
<h1>Assignment1_BasicsProgramming</h1>


p1
How cold is it outside? The temperature alone is not enough to provide the answer. 
Other factors including wind speed, relative humidity, and sunshine play important 
roles in determining coldness outside. In 2001, the National Weather Service (NWS) 
implemented the new wind-chill temperature to measure the coldness using 
temperature and wind speed. The formula is:
TWind-chill = 13.12 + 0.6215 T – 11.37 V
0.16 + 0.3965T V
0.16


p2
Write a program that calculates the charges for telephone calls based: the time of the 
call, the duration of the call, and the selected plan of the user. The program should ask 
the user to enter the following:
• Selected plan (A or B)
• Start time of the call entered in hours minutes seconds in a 24-hour format. For 
example, entering 14:23:11 means 2 pm at minute 23, at 11 seconds.
• End time of the call entered in hours minutes seconds.
• Date of the call entered in Name-of-the-day day-of-the-month month. For example, 
entering Thurs 22 4 means Thursday 22nd April. Days of the week should be {Sat, 
Sun, Mon, Tues, Wed, Thurs, Fri}
Based on the entered information, the program should calculate the duration of the call 
in minutes, and display:
• The entered call information (Start time, end time, date, and duration of the call in 
minutes)
• The user’s plan displayed in a tabular format, where all the rates would be 
displayed in right alignment.
• The calculated rate of the call.
The cost of the call is determined according to the following Plans:
Plan A: Premium
a. Any call started between 7:00 am and 5:00 pm, Sunday to Thursday, is billed at a 
rate of L.E. 0.60 per minute if the call lasts less than 15 minutes, otherwise the rate 
would be L.E. 0.80.
b. Any call starting before 7:00 am or after 5:00 pm, Sunday through Thursday, is
charged at a rate of L.E. 0.45 per minute.
c. Any call started on a Friday or Saturday is charged at a rate of L.E. 0.25 per minute.
Plan B: Platinum
a. Any call started between 7:00 am and 5:00 pm, Sunday to Wednesday, is billed at a 
rate of L.E. 0.60 per minute if the call lasts less than 30 minutes, otherwise the rate 
would be L.E. 0.80.
b. Any call starting before 7:00 am or after 5:00 pm, Sunday through Wednesday, is
charged at a rate of L.E. 0.45 per minute.
c. Any call started on a Thursday, Friday or Saturday is charged at a rate of L.E. 0.25 
per minute.
The program should not allow entering negative times, or times that are greater than 
23:59:59. Invalid day names should be rejected as well. Furthermore, only the given 
plans are available for choice.

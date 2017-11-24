*******************************************************
*  Name      :  John Witter-Witlacil
*  Student ID:  ?               
*  Class     :  CSC 2312           
*  HW#       :  3                
*  Due Date  :  Sept 26, 2017
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program creates a parent class named WaterVehicle
with several member variables/functions. The Submarine
class is derived from WaterVehicle along with its
members/functions.
A submarine is created by placing 1s within a 10x10 vector grid
initialized with all zeros. 15 torpedos shoot at the grid.
If the sub is hit, then the 1 in that position changes to a 0,
and if each part of the sub is hit, then it's sunk bool is 
changed to false

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions
   to read data from an input file, use the data to create a submarine within
   the 10x10 grid.

Name:  WaterVehicle.h
   Contains the definition for the class WaterVehicle, which is parent to Submarine class.  

Name: WaterVehicle.cpp
   Defines and implements the WaterVehicle class for implementing a WaterVehicle.  
   This class provides routines to construct and get the WaterVehicle.

Name: Submarine.h
   A class derived from WaterVehicle. This file contains attributes not wihin WaterVehicle.

Name: Submarin.cpp
   Includes functions to access and mutate diveDepth and surfaced variables.
Also includes a function to set the submarine within the grid, and to fire torpedos
at the grid and test if the sub gets hit or sunk.
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully in VS2017, but not on the grid.
   
   I believe there are inheritence issues when trying to run on the grid.
   
   The program was developed and tested on VS2017  It was 
   compiled, run, and tested on VS2017.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   This runs successfully within VS2017, but not on the grid

   

2. Build the program.

    Change to the directory that contains the file by:
    % cd [1234HW1] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[matrix]

4. Delete the obj files, executables, and core dump by
   %./make clean

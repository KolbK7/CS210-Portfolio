# CS 210 Portfolio - Corner Grocer

## Project Summary

The Corner Grocer project is a C++ application that analyzes a text file containing grocery purchases from a sample day. The program counts how often each item appears and allows the user to search for an individual item, display all item frequencies, view a text-based histogram, and exit through a menu. It also creates a backup file named `frequency.dat` containing the frequency data.

## What I Did Well

I think I did particularly well with organizing the program using object-oriented programming. I created a `GroceryTracker` class to separate the data-processing logic from the main menu. I also used a C++ map to store each grocery item and its frequency, which made it efficient to count and retrieve the data. The menu is simple to use, and the program includes input validation for invalid menu selections.

## Areas for Improvement

One improvement I could make would be to make the item search case-insensitive. Right now, the user needs to enter the item with the same capitalization used in the input file. I could also improve the program by adding stronger error handling if the input file is missing or contains unexpected data. These changes would make the program more user friendly and reliable.

## Challenges and Resources

The most challenging parts of the project were working with file input and understanding how to use a map to count each item. I also had to make sure the input file was located where the program could access it when Visual Studio ran the executable. I overcame these challenges by testing each part of the program individually and checking the output after each change. Resources such as zyBooks, Visual Studio debugging tools, course examples, documentation, and AI assistance became part of my support network.

## Transferable Skills

The skills I used in this project will transfer to future programming courses and projects. These include object-oriented programming, classes, maps, loops, file input and output, input validation, and breaking larger problems into smaller functions. I also gained more experience testing and troubleshooting programs.

## Maintainability, Readability, and Adaptability

I made the program maintainable and readable by separating the `GroceryTracker` class into header and implementation files, using descriptive function and variable names, and keeping individual functions focused on specific tasks. This structure makes the program easier to understand and makes it possible to change one feature without rewriting the entire application.

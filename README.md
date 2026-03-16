# Guess The Number

A simple number guessing game written in C.

The program generates a random number between **1 and 100** and the player must guess it.  
After each guess the program tells the player whether the target number is **higher or lower**.

The game continues until the correct number is guessed.

## Features

- Random number generation
- User input handling
- Feedback after each guess
- Attempt counter
- Simple command line interface

## How It Works

1. The program generates a random number between **1 and 100**
2. The player enters a guess
3. The program tells the player if the number is:
   - higher
   - lower
4. The player keeps guessing until the correct number is found
5. The total number of attempts is displayed

## Technologies

- C programming language
- Standard C libraries
- `stdlib.h` for random numbers
- `time.h` for random seed

## What I Learned

- Generating random numbers using `rand()`
- Seeding randomness with `srand(time(NULL))`
- Using loops for repeated input
- Implementing simple game logic
- Tracking attempts in a program


## Author

Software engineering student at ITS

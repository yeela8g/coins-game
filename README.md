# Coins Game - Read Me

### Game Description
- The game involves two players taking turns moving coins on the board.
- Each player picks a coin and chooses a new cell to move it to, when only left moves are legal.
- The first player to place all coins adjacent to the leftmost part of the board without gaps wins.

### Example Game
1. Players decide on the board size:

 
   ![Board](https://github.com/yeela8g/coins-game/assets/118124478/4665023c-741b-40be-a102-498ba9f1c8da)
   

2. First player's turn:
 
   ![Player 1](https://github.com/yeela8g/coins-game/assets/118124478/0e2475ed-700e-488b-99d8-a615e2bfeb6f)
   

4. Second player's turn:
 
   ![Player 2](https://github.com/yeela8g/coins-game/assets/118124478/0509d2d3-a2e8-4265-bf16-c33802ae312b)

**and we have a winner!!**

### Key code implementation Principles

1. **Modularity:**
   - Functions are used to encapsulate specific tasks, promoting code modularity.
   - Each function serves a well-defined purpose, contributing to code readability and maintainability.

2.  **Code Organization:**
     - Code is organized into header files (`coins.h`) and source files (`coins.cpp`, `main.cpp`).
     - The use of header guards prevents multiple inclusion of header files.

3. **User Input Validation:**
   - Input validation is implemented to ensure user-entered values are within specified ranges.
   - Clear error messages guide the user to provide valid input.

4. **Logic and Design:**
   - The game logic is logically designed to enforce rules for legal moves.
   - Output messages are formatted for clarity, providing a user-friendly experience.



### Usage
1. **Building:**
   - Compile the program, including all source files (`coins.cpp`, `main.cpp`), using a C++ compiler.

2. **Execution:**
   - Run the compiled executable to start the Coins Game.
   - Follow on-screen prompts to play the game, making moves until a winner is declared.
   - Choose to play again or exit after each game.

3. **Exiting:**
   - To exit the game, enter '0' when prompted to play again.

**Enjoy the game!**

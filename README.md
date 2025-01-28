Here’s the complete README in Markdown format, including separators and proper Markdown syntax:
# 🏗️ Tower of Hanoi - Interactive Game in C++

An interactive C++ implementation of the **Tower of Hanoi** puzzle where users can manually play the game! The game includes a dynamic visual representation of the rods and disks to make gameplay intuitive and fun.

---

## 📋 Features
- **Interactive Gameplay**: Users can manually play the game by entering moves.
- **Dynamic Visuals**: Disks are represented proportionally using `=` characters, and the rods are labeled for clarity.
- **Input Validation**: Ensures only valid moves are allowed (e.g., no placing a larger disk on a smaller one).
- **Winning Condition**: The game detects when all disks are successfully moved to the destination rod.

---

## 📖 How to Play

The **Tower of Hanoi** puzzle involves moving disks from one rod to another while following these rules:
1. Only one disk can be moved at a time.
2. A larger disk cannot be placed on top of a smaller disk.
3. The goal is to move all disks from the first rod (**A**) to the last rod (**C**) using the middle rod (**B**) as needed.

### Example Visualization:
**Initial State with 3 Disks**:
```
      ===     
     =====    
    =======   
      |         |         |     
       A         B         C     
```

**After Moving a Disk (A → C)**:
```
      ===     
     =====    
      |         |         =======
      |         |         |     
       A         B         C     
```

---

## 🚀 Getting Started

### Prerequisites
- A C++ compiler (e.g., `g++`) installed on your system.
- Basic knowledge of compiling and running C++ programs.

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/steelersrg8/Tower-of-Hanoi.git
   cd tower-of-hanoi
   ```
2. Compile the program:
   ```bash
   g++ -o hanoi tower_of_hanoi.cpp
   ```
3. Run the program:
   ```bash
   ./hanoi
   ```

---

## 💻 Usage
1. Start the program and enter the number of disks when prompted.
2. Enter moves in the format `A B`, where:
   - `A` is the source rod.
   - `B` is the destination rod.
3. Continue making moves until all disks are moved to rod `C`.
4. Celebrate your win when the game congratulates you! 🎉

### Example Gameplay
**Input**:
```
Enter the number of disks: 3
Enter your move (e.g., A B): A C
Enter your move (e.g., A B): A B
Enter your move (e.g., A B): C B
...
```

**Output**:
```
Congratulations! You solved the Tower of Hanoi puzzle!
```

---

## 🛠️ Customization
You can enhance the program by adding:
- **Move Counter**: Track the number of moves taken to solve the puzzle.
- **Hints**: Show the next optimal move for solving the puzzle.
- **Themes**: Customize the visual representation of disks.

---

## 🤝 Contributing
Contributions are welcome! If you’d like to add features or improve the code:
1. Fork the repository.
2. Create a new branch: `git checkout -b feature-name`.
3. Commit your changes: `git commit -m 'Add some feature'`.
4. Push to the branch: `git push origin feature-name`.
5. Open a pull request.

---

## 🙌 Acknowledgments
- The classic **Tower of Hanoi** puzzle for inspiring this project.
- The open-source community for promoting learning and collaboration.

# CPP-For-Game-Development
Projects and exercise work while learning C++ for Game Development: https://www.udemy.com/course/learn-cpp-for-ue4-unit-1

## Final Project
### [Headers](https://github.com/jalder89/CPP-For-Game-Development/tree/main/Headers)
Combined everything into a test project that utilizes headers to better organize classes. 
* Implemented very basic character creation system that creates a character with a functional inventory.
* Implemented very basic inventory system that handles adding, removing, and reporting items.
<br>
<hr>

## Projects
  ### Guess My Number
  A quick game I put together to practice basics like functions, loops, and IO before starting course on OOP.
  
  ### Switches
  Practice with switch statements as a simple state manager for a players state based on player input.
  
  ### References
  Practice with passing by reference.
  
  ### Structs
  Practice with creating structures in the shape of a character creator.
  * Implemented Character structure that facilitates creating a character.
  * Implemented CreateCharacter function that powers the character creation process and returns a Character.
  
  ### Pointers
  Practice with pointers such as accessing array elements via pointer, getting a player name and updating the player character via a function where player is passed as a pointer.
  
  ### Classes
  Practice with classes and inheritence in the shape of a player and npc interaction. 
  * Character, Player, and NPC classes defined to facilitate character interactions.
  * Maker class implemented to provide a simple function for creating dividers in the console.

  ### Access Modifiers
  Practice with access modifiers and classes.
  * Implemented Creature and Kobold class.
  * Implemented different public, private, and protected member variables and functions for each class.

  ### Stack & Heap
  Simple practice project for creating and deleting data dynamically on the heap.
  * Implemented Character class with consutructor and destructor that dynamically allocates member variables to the heap.
  * Created and destroyed a new character dynamically on the heap
  
  ### Statics
  Practicing with statics building a simple inventory system.
  * Item class added to allow easy expansion of item support and item details.
  * Inventory class implemented to manage inventory storage and reporting.
  * Storage implemented as a dynamic vector of Items which grows to fit the inventory needs.

  ### Virtual Functions
  Simple practice project practicing with overriding virtual functions from classes.

  ### Polymorphism & Casting
  Practicing with polymorphism and casting by storing and accessing multi-type data via pointers stored within a polymorphic array.
  * Includes practice with dynamic casting to enable calling unique functions via a polymorphic array based on each elements pointer type.

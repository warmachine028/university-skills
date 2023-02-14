# Video Rental Inventory System

The goal of this project is to design and implement a simple inventory system for a small video rental store.
The following are the various classes that are to be implemented.

1. Video
   Member variables

    ```md
        - String videoName
        - int rating
        - boolean checkout
    ```

    Member functions

    ```md
        - void doCheckout();
        - void doReturn();
        - void recieveRating(int rating);
        - String getName();
        - int getRating();
        - boolean getCheckout();
    ```

    Constructor

    ```md
        - Video(String name)
    ```

2. VideoStore
   Member variables

    ```md
    -   Video[] store;
    ```

    Member functions

    ```md
    -   void addVideo(String name);
    -   void doCheckout(String name);
    -   void doReturn(String name);
    -   void receiveRating(String name, int rating);
    -   void listInventory();
    ```

3. VideoLauncher
   Contains the main method to test the program

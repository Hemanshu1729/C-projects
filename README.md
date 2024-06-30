# C-projects
This repository contains c++ projects:
1)
Library Management System
Welcome to the Library Management System! This program helps you manage books in a library through a simple command-line interface.

Features
Add a Book: You can add new books to the library by entering their title, author, and genre. Each book gets a unique ID automatically.

View Books: See all the books currently available in the library. Each book's details, including ID, title, author, and genre, are displayed.

Search for Books:

By Title: Find a book by its title and see its details.
By ID: Search for a book using its unique ID and view its information.
By Author: Locate books written by a specific author.
By Genre: Find books categorized under a particular genre.
Delete a Book: Remove a book from the library by specifying its ID.

Exit: Close the program when you're done managing the library.

How to Use
Running the Program
Compile the Program:

Open your terminal or command prompt.
Navigate to the directory containing library_management.cpp.
Use the command:
bash
Copy code
g++ library_management.cpp -o library_management
This compiles the program into an executable named library_management.

Execute the Program:

After compiling, run the executable with:
bash
Copy code
./library_management
This starts the Library Management System.

Using the Program
Adding a Book:

Enter the title, author, and genre of the book when prompted.
Each book receives a unique ID, making it easy to identify.
Viewing Books:

See a list of all books in the library with their details displayed neatly.
Searching for Books:

Choose a search method (by title, ID, author, or genre) to find specific books quickly.
Deleting a Book:

Remove a book from the library by entering its ID.

**************************************************************************************************888

the interaction with this as follows:


Library Management System

1. Add Book
2. View Books
3. Search Book
4. Delete Book
5. Exit
Enter your choice: 1

Enter the title of the book: To Kill a Mockingbird
Enter the author of the book: Harper Lee
Enter the Genre of the book: Fiction
Book added successfully!
Book number is: 1

...

Enter your choice: 2

Books in the Library:
ID: 1, Title: To Kill a Mockingbird, Author: Harper Lee, Genre: Fiction

...

Enter your choice: 3
1. To search by Title
2. To search by ID
3. To search by Author
4. To search by Genre
2

Enter the ID of the book to search: 1
ID: 1, Title: To Kill a Mockingbird, Author: Harper Lee, Genre: Fiction

...

Enter your choice: 4

Enter the genre of the book to search: Fiction
ID: 1, Title: To Kill a Mockingbird, Author: Harper Lee, Genre: Fiction

...

Enter your choice: 4

Enter the ID of the book to delete: 1
Book deleted successfully!

...

Enter your choice: 5
Exiting the program...

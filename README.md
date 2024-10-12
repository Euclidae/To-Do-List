# C++ Todo List Application

A simple command-line todo list application written in C++. This application allows users to add tasks, remove tasks, display all tasks, and quit the program.

## Features

- Add new tasks to the list
- Remove tasks from the list
- Display all current tasks
- Simple command-line interface

## Requirements

- C++ compiler (supporting C++11 or later)
- Standard C++ libraries

## Compilation

To compile the program, use your C++ compiler. For example, with g++:

```
g++ -std=c++11 todo_list.cpp -o todo_list
```

## Usage

After compiling, run the executable:

```
./todo_list
```

The program will display a menu with the following options:

1. Remove Item
2. Add Item
3. Display Item
4. Quit

Enter the number corresponding to the action you want to perform.

### Adding a Task

Choose option 2 and enter the task when prompted.

### Removing a Task

Choose option 1 and enter the task you want to remove.

### Displaying Tasks

Choose option 3 to see all current tasks. Press Enter to return to the main menu.

### Quitting the Program

Choose option 4 to exit the program.

## Code Structure

- The program uses an enum `Operations` to define the menu options.
- Tasks are stored in a `std::vector<std::string>`.
- The `AddTask` and `RemoveTask` functions handle adding and removing tasks.
- The main loop continues until the user chooses to quit.

## Future Improvements

- Implement task persistence (save tasks to a file)
- Add task prioritization
- Include due dates for tasks
- Implement task completion status

## Contributing

Feel free to fork this project and submit pull requests with improvements or bug fixes.

## License

This project is open source and available under the [MIT License](https://opensource.org/licenses/MIT).

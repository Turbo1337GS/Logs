# Glogs - C++ Logging Module

Glogs is a versatile, multi-platform C++ library designed for streamlined logging purposes. It offers functionalities like setting console colors, displaying tabular data, outputting files, and creating visually distinct blocks of text, among others. Whether you're developing for Windows, Unix/Linux, or MacOS, Glogs allows for colorful and structured log outputs, enhancing the debugging and monitoring process.

## Features

- Console color setting for distinguishing log levels visually
- Support for outputting errors, successes, warnings, and informational messages with distinct colors
- Ability to display tabular data for organized log outputs
- File output functionality for logging from file content
- Dynamic console title setting for better context in logs
- Clear console and flush output for clean and up-to-date log viewing
- Compatibility with Windows, Unix/Linux, and MacOS platforms

## Building
Glogs is built with C++17 standard to leverage modern language features for better reliability and ease of use. Ensure your compiler supports C++17 or newer.

### Dependencies
- C++17 compatible compiler
- Standard C++ Library
- POSIX compliant system for Unix/Linux features (Alternative commands and libraries for Windows are included)

### Compilation
Using *g++* or *clang++*, compile your project including the `Logs.cpp` file, ensuring C++17 support is enabled. For example:

```sh
g++ -std=c++17 main.cpp Logs.cpp -o myApp
```

or

```sh
clang++ -std=c++17 main.cpp Logs.cpp -o myApp
```

## Usage

1. **Include the Header**: Start by including `Logs.hpp` in your source file.
    ```cpp
    #include "Logs.hpp"
    ```

2. **Create a Glogs Instance**: Instantiate the Glogs class.
    ```cpp
    Glogs *myLog = new Glogs();
    ```

3. **Use Logging Functions**: Utilize various functionalities as per the requirements.
    ```cpp
    // Setting the console title
    myLog->SetConsoleTitle("My Application Logs");
    
    // Clearing the console
    myLog->ClearConsole();
    
    // Demonstrating different logging levels
    myLog->Error("This is an error message.");
    myLog->Succes("This is a success message.");
    myLog->Warn("This is a warning message.");
    myLog->Info("This is an info message.");
    
    // Displaying tabular data
    std::vector<std::vector<std::string>> data = {{"Header1", "Header2"}, {"Content1", "Content2"}};
    myLog->Table(data);
    
    // Outputting file content
    myLog->File("example.txt");
    
    // Creating a block of text
    myLog->Block("Block of Text", '*');
    
    // Dynamic console output with flushing
    myLog->coutFlush("Dynamic %s", "Output");
    ```

## Full Documentation
The library provides several methods for detailed and colorful logs:

- **SetConsoleColor(ConsoleColor color)**: Changes the console's text color.
- **Error(std::string message)**, **Succes(std::string message)**, **Warn(std::string message)**, **Info(std::string message)**: Logs messages with specific colors indicating error, success, warning, and information respectively.
- **Table(std::vector<std::vector<std::string>> rows)**: Displays a table of given string data.
- **ClearConsole()**: Clears the console.
- **SetConsoleTitle(std::string title)**: Sets the console window's title.
- **File(std::string fileName)**: Outputs the contents of a given file.
- **Block(std::string message, char pattern)**: Displays a message in a block patterned with a specified character.
- **coutFlush(const char *format, ...)**: Dynamically updates a line on the console with new content, useful for progress indicators or live data updates.

## Community and Contributions
Feedback and contributions to the Glogs project are warmly welcomed. Whether it's feature suggestions, bug reports, or code contributions, feel free to make your mark on improving Glogs for all users.

## License
Glogs is open-source and freely available for personal and commercial use under [MIT License](https://opensource.org/licenses/MIT).

Happy Logging!
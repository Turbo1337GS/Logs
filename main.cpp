#include <iostream>
#include "Logs.hpp"
#include <vector>
#include <string>
Glogs *myLog = new Glogs();

int main()
{
    myLog->SetConsoleTitle("Title: GigaSoft.com.pl (Log lib v- 0.0.1)");
    myLog->ClearConsole();
    myLog->SetConsoleColor(Glogs::ConsoleColor::Cyan);
    myLog->File("ascii-art.txt");
    myLog->Error("Example error log");
    myLog->Succes("Example succes log");
    myLog->Warn("Example warn log");
    myLog->Info("Example info log");
    std::vector<std::vector<std::string>> data = {
        {"ID", "Imię", "Score"},
        {"1", "Alice", "99"},
        {"2", "Bob", "95"},
        {"3", "Charlie", "90"}};
    myLog->Table(data);
    myLog->Block("Example block");

    myLog->coutFlush("Hey there! Today is %d-%d-%d\n", 2024, 3, 25);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    for(int percent = 0; percent <= 100; percent += 10) {
        myLog->coutFlush("UPDATE EXAMPLE FLUSH - %d%%.", percent);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }


    getchar();
    return 1;
}

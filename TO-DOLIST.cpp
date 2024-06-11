#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <istream>

enum Operations{
    REMOVE = 1,
    ADD,
    SHOW,
    QUIT
};

void parameters(){
    std::cout << std::setw(150) << std::right << "TO-DO LIST" << std::endl;    
    std::cout << "1. Remove Item\n2.Add Item \n3.Display Item \n4.Quit" << std::endl;
}

void AddTask(std::string task, std::vector<std::string>& items);
void RemoveTask(std::string task, std::vector<std::string>& items);

int main(){
    
    std::vector<std::string> tasks;
    bool flag = true;
    parameters();
    while(flag){
        
        int choice = 0;
        int pause = 1;
        std::string some_item; //next time, don't init variables in switch statement
        std::cout << "What would you like to do? : ";
        std::cin >> choice;
        std::cin.ignore();
        std::string move;

        switch(choice){
            case REMOVE:
                RemoveTask(some_item, tasks);
                system("cls");
                parameters();
                break;
            case ADD:
                std::cout << "\nInput your new task: ";
                std::getline(std::cin,some_item);//you don't have to worry about clearing string            
                AddTask(some_item,tasks);
                system("cls");
                parameters();
                break;
            case SHOW:
            for(int i = 0; i <tasks.size(); ++i){
                std::cout << i+1<<"." << tasks[i] << std::endl;
            }
                std::cout << "Press enter when done." << std::endl;
                std::cin >> move;
                if(move == '\n'){
                    system("cls");
                    parameters();
                }
                break;
            case QUIT:
                flag = false;
                break;
            default:
                std::cerr << "Invalid Input";
    }

    }

}

void AddTask(std::string task, std::vector<std::string>& items){
    items.push_back(task);
}

void RemoveTask(std::string task, std::vector<std::string>& items) {
    auto it = std::find(items.begin(), items.end(), task);
    if (it != items.end()) {
        items.erase(it);
    }
}
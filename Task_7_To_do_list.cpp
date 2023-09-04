#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Task {
    string description;
    bool done;
};

int main() {
    vector<Task> todoList;

    while (true) {
        cout << "To-Do List" << endl;
        cout << "1. Add task" << endl;
        cout << "2. List tasks" << endl;
        cout << "3. Mark task as done" << endl;
        cout << "4. Delete task" << endl;
        cout << "5. Exit" << endl;

        int choice;
        cin >> choice;

        if (choice == 5) {
            break;
        }

        switch (choice) {
            case 1: {
                Task newTask;
                cout << "Enter task description: ";
                cin.ignore();  // Ignore the newline character from previous input
                getline(cin, newTask.description);
                newTask.done = false;
                todoList.push_back(newTask);
                cout << "Task added successfully." << endl;
                break;
            }
            case 2: {
                if (todoList.empty()) {
                    cout << "No tasks in the list." << endl;
                } else {
                    cout << "Tasks:" << endl;
                    for (size_t i = 0; i < todoList.size(); ++i) {
                        cout << "[" << (i + 1) << "] " << (todoList[i].done ? "[Done] " : "[ ] ") << todoList[i].description << endl;
                    }
                }
                break;
            }
            case 3: {
                int taskNumber;
                cout << "Enter task number to mark as done: ";
                cin >> taskNumber;
                if (taskNumber >= 1 && taskNumber <= static_cast<int>(todoList.size())) {
                    todoList[taskNumber - 1].done = true;
                    cout << "Task marked as done." << endl;
                } else {
                    cout << "Invalid task number." << endl;
                }
                break;
            }
            case 4: {
                int taskNumber;
                cout << "Enter task number to delete: ";
                cin >> taskNumber;
                if (taskNumber >= 1 && taskNumber <= static_cast<int>(todoList.size())) {
                    todoList.erase(todoList.begin() + taskNumber - 1);
                    cout << "Task deleted." << endl;
                } else {
                    cout << "Invalid task number." << endl;
                }
                break;
            }
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    }

    cout << "Goodbye!" << endl;
    return 0;
}

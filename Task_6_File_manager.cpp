#include <iostream>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

void listFilesAndFolders(const fs::path& directory) {
    cout << "Contents of " << directory << ":" << endl;

    for (const auto& entry : fs::directory_iterator(directory)) {
        cout << (fs::is_directory(entry) ? "[DIR] " : "[FILE] ") << entry.path().filename() << endl;
    }
}

int main() {
    cout << "Simple File Manager" << endl;

    while (true) {
        cout << "1. List files and folders" << endl;
        cout << "2. Create a folder" << endl;
        cout << "3. Delete a file" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cin >> choice;

        if (choice == 4) {
            break;
        }

        switch (choice) {
            case 1: {
                string path;
                cout << "Enter the directory path: ";
                cin >> path;
                listFilesAndFolders(path);
                break;
            }
            case 2: {
                string folderName;
                cout << "Enter the folder name: ";
                cin >> folderName;
                fs::create_directory(folderName);
                cout << "Folder created successfully." << endl;
                break;
            }
            case 3: {
                string fileName;
                cout << "Enter the file name to delete: ";
                cin >> fileName;
                if (fs::remove(fileName)) {
                    cout << "File deleted successfully." << endl;
                } else {
                    cout << "Error deleting the file." << endl;
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

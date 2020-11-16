#include <iostream>
#include <vector>
#include <string>

using namespace std;
// VS Code is now configured to use gcc on Linux. The configuration applies to the current workspace. To reuse the configuration, just copy the JSON files to a .vscode folder in a new project folder (workspace) and change the names of the source file(s) and executable as needed.
//In the launch.json file, program specifies the program you want to debug. Here it is set to the active file folder ${fileDirname} and active filename without an extension ${fileBasenameNoExtension}, which if helloworld.cpp is the active file will be helloworld.
int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
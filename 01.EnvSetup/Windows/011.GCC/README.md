# Same As MSVC Compile Setup but for GCC

## Steps

1. Download The Clang and GCC compilers from [this link](https://winlibs.com/) and cut&paste the extracted mingw64 folder to your C:\ drive  
2. Add the bin subdirectory of this folder to your system path variable
3. In Windows file explorer, create a sub folder of the "Windows" directory in our course project tree called "GCC"
4. Open new blank project in VSCode
5. Drag the newly created folder from Windows File Explorer into the Open VSCode instance to open the foler as a project in VSCode
6. Create a main.cpp file at the root of the project and populate it with the example code from the course github repo
7. Select the "Terminal" drop down menu from the Title Bar and Click on "Configure Tasks" as we did before when setting up MSVC compiler
8. From the dropdown we want to select the "g++.exe build active file" option. This creates the .vscode subfolder with the tasks.json file inside
9. Again lets remove the elements from the "args" json parameter and replace them with those from the repo. Lets also change the lable of the task to something more recognisable.
10.  Select the "View" drop down menu from the title bar and select "Command Pallette"
11. Again from Command Pallette find the "C/C++ Edit Configurations (UI)" option
12. Scroll to the bottom and change the C++ standard option to C++20
13. Now select the main.cpp file and make sure it is the active file open in the VSCode browser window
14. From here select the "Terminal" drop down menu from the title bar and select "run task"
15. The name of the task we created should appear. Select it to compile the main.cpp file using the gcc compiler as we have setup the task to do
16. A rooster.exe file should be created in the root directory of our project which we can now run
17. Run from the terminal. If you did everything correctly the output should be "value : 3" once more
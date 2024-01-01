# Set Up C++ Dev Env for Visual Studio In Windows with MSVC Compiler

This repo contains all of the source files used to demo setting up such an enviornment

[All the code for this exercise can be found here](https://github.com/rutura/The-C-20-Masterclass-Source-Code/tree/main/02.EnvironmentSetup/1.Windows/4.V_s_CodeMsvcConfiguration)


## Step 1

- Download and install VSCode & Visual Studio Latest Community Version

## Step 2

- When installing Visual Studio Commuity Edition, ensure you install the requisite compilers for developing Windows desktop applications. This will install the MSVC compiler on your Windows Machine

## Step 3

- I wanted to setup Windows terminal to open a default instance as a Developer Command Prompt with the default location being the C:\Users\[user]\source\repos directory. 
[See here for changing default terminal instance type](https://www.thewindowsclub.com/how-to-open-customize-and-configure-windows-terminal-settings)        
[And Here for changing default directory](https://www.thewindowsclub.com/how-to-change-starting-directory-in-windows-terminal)

- If you open VSCode in its default installation mode and navigate to the repos directory from there, VSCode will NOT recognise the MSCV compiler. 

- You must launch VSCode from either a Developer Command Prompt or Developer Powershell Terminal instance from this location in order to access the Visual Studio Community Edition default compiler

- See Screenshots below.

![Navigating from Default VSCode instance](https://i.imgur.com/410Ngzf.png)


![Navigating To Directory in Windows File Explorer and Opening in Dev Terminal](https://i.imgur.com/pkx7Sbk.png)


![](https://i.imgur.com/jNQCVIh.png)


![Correct Output for Compiler now in VSCode Terminal](https://i.imgur.com/I7GRoXK.png)    

## Step 4

- From here we need to set up a terminal Task in Visual Studio Code To Tell the Compiler to Compile using the MSVC compiler

  - 1. Select Terminal from the Top Menu Bar and Select "Configure Tasks"
  - 2. In the Search Bar Type "C/C++" and select "cl.exe Build Active File"
  - 3. This will create a new Sub Folder Called ".vscode" with a tasks.json file populated inside with data
  - 4. To follow the exercise from the course we must swap the "args" list from the tasks.json file with the args list from the exercise repository
  - 5. From here save everything and click "view" from the title menu bar and select "view command pallette"
  - 6. In the Command Pallette Search box type "C/C++" and from the options select "Edit Configurations (UI)"
  - 7. From this menu scroll to the bottom and edit the C++ Standard to version 20
  - 8. This will allow the editor to allow C++ 20 syntax highlighting and will prevent it from showing syntax errors for the example code in main.cpp
  - 9. Now we have everything setup we can simply type "cl.exe" in the terminal and our code should compile and produce the "rooster.exe" executable
  - 10. Finally enter ".\rooster.exe" in the terminal and check the output. The program should output "value : 3" if you did everything correctly.
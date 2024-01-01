# Set Up C++ Dev Env for Visual Studio In Windows with MSVC Compiler

This repo contains all of the source and compiled files used to demo setting up such an enviornment

[All the code for this exercise can be found here](https://github.com/rutura/The-C-20-Masterclass-Source-Code/tree/main/02.EnvironmentSetup/1.Windows/4.V_s_CodeMsvcConfiguration)


## Step 1

- Download and install VSCode & Visual Studio Latest Community Version

## Step 2

- When installing Visual Studio Commuity Edition, ensure you install the requisite compilers for developing Windows desktop applications. This will install the MSVC compiler on your Windows Machine

## Step 3

- I wanted to setup Windows terminal to open a default instance as a Developer Command Prompt with the default location being the C:\Users\[user]\source\repos directory. 
[See here for changing default terminal instance type](https://www.thewindowsclub.com/how-to-open-customize-and-configure-windows-terminal-settings)<br>
[And Here for changing default directory](https://www.thewindowsclub.com/how-to-change-starting-directory-in-windows-terminal)

- If you open VSCode in its default installation mode and navigate to the repos directory from there, VSCode will NOT recognise the MSCV compiler. 

- You must launch VSCode from either a Developer Command Prompt or Developer Powershell Terminal instance from this location in order to access the Visual Studio Community Edition default compiler

- See Screenshots below.
<br>
<br>
![Navigating from Default VSCode instance](https://i.imgur.com/410Ngzf.png)

<br>
<br>
![Navigating To Directory in Windows File Explorer and Opening in Dev Terminal]
(https://i.imgur.com/pkx7Sbk.png)

<br>
![](https://i.imgur.com/jNQCVIh.png)

<br>
<br>
![Correct Output for Compiler now in VSCode Terminal](https://i.imgur.com/I7GRoXK.png)
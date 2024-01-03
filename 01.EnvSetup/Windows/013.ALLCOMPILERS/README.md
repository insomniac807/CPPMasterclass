# Set Up Build Env For all 3 Compilers

### Why would we do this?

- This is a particularly useful exercise if we want our applications to be cross platform.
- We want to be able to test our code across as many compilers as possible

## Step 1

- Set up Project exactly as we have in the past. But do not create task yet (do set up VSCODE C++ UI configurations to set C++ standard to 20)
- This time, instead of dragging the empty "all compilers" folder from windows file explorer into an empty VSCode instance we want to launch vs code from within the "C:\Users\\{user}\source\repos" directory, from a developer console, to give us access to the MSVC compiler
- This is the visual studio build directory and only from here can we call the MSVC compiler

## Step 2

- Create A task and copy & paste the code from the github repository for the course into the task.json file. 
- All this does is great a build task for each of our 3 comilers in 1 file
- This allows us to select from multiple tasks when we select "run task" from the "Terminal" drop down menu

#### This course proving to be as useful for learning vscode as it is for learning C++ so far
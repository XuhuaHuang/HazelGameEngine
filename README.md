# HazelGameEngine
Game engine built and named `Hazel`. Tutorial available from the following:  
[The Cherno](https://www.youtube.com/channel/UCQ-W1KE9EYfdxhL6S4twUNw)

## Project Notes
### General
* `Hazel` is the name of the game engine, and `Sandbox` is the actual application using the created game engine.
* In Visual Studio, project `Sandbox` has a reference of `Hazel` attached to it to illustrate such.
* There is NO x86 (Win32) support of the project; however, this could be altered in the project settings by editing:<br>
  `Project -> Project Properties -> Configuration Manager..` and use the drop-down menu to edit platforms.

### Directory and Output
* `Hazel` outputs a `.dll` file and a `.lib` file for the `Application.cpp` to use.
  `__declspec(dllexport)` and `__declspec(dllimport)` are placed in the code to force Visual Studio to generate the `.lib` file.
* Output for both project, `Hazel` and `Sandbox` are placed in the following directory:<br>
  `$(SolutionDir)bin\$(Configuration)-$(Platform)\$(ProjectName)\`
  Intermediate directory: `$(SolutionDir)bin-int\` while the naming convention follows the output directory.
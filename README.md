# How to Run the Projects

**NOTE: <i>We will be using Visual Studio Code.</i>** Click <a href="https://code.visualstudio.com/download" target="_blank"> here</a> to download Visual Studio Code.
<hr>

## C/C++ for Visual Studio Code

C/C++ support for Visual Studio Code is provided by a **Microsoft C/C++ extension** to enable cross-platform C and C++ development on **Windows**, **Linux**, and **macOS**.


![cpp-extension](https://user-images.githubusercontent.com/79866006/232723908-2a3a544c-d8e3-411e-a4e6-a7641849a790.png)



### Install the extension

- Open VS Code. 
- Select the Extensions view icon on the Activity bar or use the keyboard shortcut (`Ctrl+Shift+X`). 
- Search for `C++`. 
- Select Install.
- After you install the extension, also search for **Code Runner extension** and install it.


![search-cpp-extension](https://user-images.githubusercontent.com/79866006/232750710-ab0fee4a-5b41-444a-ab63-273b303c2676.png)




### Install a compiler

C++ is a compiled language meaning your program's source code must be translated (compiled) before it can be run on your computer.

The C/C++ extension does not include a C++ compiler or debugger. You will need to install these tools or use those already installed on your computer.

Most Linux distributions have the `GNU Compiler Collection (GCC)` installed and macOS users can get the `Clang` tools with `Xcode`.

#### Check if you have a compiler installed

- Checking for the GCC compiler `g++`:

    `g++ --version`

- Checking for the Clang compiler `clang`:

    `clang --version`


**If you don't have a compiler installed**, we will describe how to install the Minimalist GNU for Windows (MinGW) C++ tools (compiler and debugger). MinGW is a popular, free toolset for Windows. 

If you are running VS Code on another platform, you can read the <a href="#part-for-mac0s"> vlang/LLVM Compiler and Debugger (For-macOS) </a>, which cover C++ configurations for **Linux** and **macOS**.


### Install MinGW-x64 (For Windows)

- Follow the Installation instructions on the <a href="https://www.msys2.org/" target="_blank"> MSYS2 website</a> to install `Mingw-w64`.
- Make sure to run each required Start menu and `pacman` command.
- Add the MinGW compiler to your path: <i>follow the video below to do that</i>

<hr>

### Video Explanation on how to Run the whole process

https://www.youtube.com/watch?v=7jil6-QRsH0

<hr>


#### Check your MinGW installation

To check that your **Mingw-w64** tools are correctly installed and available, open a new Command Prompt and type:

`gcc --version`

`g++ --version`

`gdb --version`

If you don't see the expected output or g++ or gdb is not a recognized command, make sure your PATH entry matches the Mingw-w64 binary location where the compiler tools are located.

**NOTE**

<i>Follow the <a href="#video-explanation-on-how-to-run-the-whole-process">video</a> to know How to Install MinGW (MSYS2) and Run C, C++ program in VS Code for Windows</i>

<br><br><br>

### PART FOR macOS

<hr>

## Install Clang/LLVM compiler and debugger (For macOS)

<hr>

In this tutorial, you will learn to configure Visual Studio Code on macOS to use the Clang/LLVM compiler and debugger.

### Prerequisites
To successfully complete this tutorial, you must do the following:

   - Install <a href="https://code.visualstudio.com/download" target="_blank">Visual Studio Code on macOS.</a>

   - Install the C++ extension for VS Code. You can install the C/C++ extension by searching for `c++` in the Extensions view (`Ctrl+Shift+X`).

![cpp-extension](https://user-images.githubusercontent.com/79866006/233775271-898e189c-a5ea-4053-aeb6-88fc20a19150.png)

### Ensure Clang is installed

- **Clang** may already be installed on your Mac. To verify that it is, open a macOS Terminal window and enter the following command:

 `clang --version`

 - If Clang isn't installed, enter the following command to install the command line developer tools:

`xcode-select --install`

### Video Explanation on how to Run the whole process

https://www.youtube.com/watch?v=f0vVV4NPmjQ

<hr>




## How to Contribute: [🔝](#contents)
 
 - Just fork the project and clone it into your machine
 - Then make your contribution and upload it to your fork repository
 - Then click on pull request

<br>
**NOTE**

<i>If you face any issues kindly let us know</i>

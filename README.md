# The C Programming Language

Learning C, the programming language.

## Getting started

Setting up the environment will take the following steps.

1.  Picking a editor
2.  Installing a C/C++ compiler
3.  Setup environment variables
4.  Test from command line

### Windows

- Install a code editor of your choice here are some options
  - [Visual Studio](https://docs.microsoft.com/en-us/cpp/build/vscpp-step-0-installation)
  - [VS Code](https://code.visualstudio.com/download)
- Install a C/C++ compiler
  - **Visual Studio**
    - Ensure you select the [Desktop devlopment tools with c++](https://docs.microsoft.com/en-us/cpp/build/vscpp-step-0-installation?view=vs-2019#step-4---choose-workloads)
  - **VS Code**
    - Install the [Build Tools for Visual Studio](https://docs.microsoft.com/en-us/cpp/build/building-on-the-command-line?view=vs-2019#download-and-install-the-tools)
    - Select **C++ build tools**
- Setup environment variables

  - **VS Code**
  - Add the _Developer Command Prompt for VS 2019_ installed during the last step

    1. Open the start menu and locate the shell developer command prompt
    2. Right click > More > Open file location
    3. Right click on the shortcut and open properties
    4. Copy the values from **Target**
    5. Open VS Code
    6. File -> preferences -> settings -> click code icon in top right to open the settings.json file
    7. Insert the following and replace (_terminal.integrated.shellArgs.windows_) with your values from the **Tartget**

    ```json
    {
      "terminal.integrated.shell.windows": "C:\\Windows\\System32\\cmd.exe",
      "terminal.integrated.shellArgs.windows": [
        "%comspec%",
        "/k",
        "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\Common7\\Tools\\VsDevCmd.bat"
      ]
    }
    ```

    8. Open a new terminal in VS Code and the default terminal should show

    ```
    **********************************************************************
    ** Visual Studio 2019 Developer Command Prompt v16.5.5
    ** Copyright (c) 2019 Microsoft Corporation
    **********************************************************************
    ```

- Test you have a C / C++ compiler installed

  - From the Developer Command Prompt
  - Type the following command and press enter

    - **cl.exe**

    ```
    Microsoft (R) C/C++ Optimizing Compiler Version 19.25.28614 for x86
    Copyright (C) Microsoft Corporation.  All rights reserved.

    usage: cl [ option... ] filename... [ /link linkoption... ]
    ```

- Install [C/C++ for Visual Studio Code](https://code.visualstudio.com/docs/languages/cpp) extension, and restart VS Code

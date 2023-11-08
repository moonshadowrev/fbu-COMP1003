# Installing MinGW32 on Windows

MinGW32 (Minimalist GNU for Windows) is a distribution of GCC (GNU Compiler Collection), and it includes compilers for C, C++, and other programming languages. Below are the steps to install MinGW32 on a Windows system using `mingw-get-setup.exe`.

## Step 1: Download the Installer

- Click on the  button to download [mingw-get-setup.exe](https://github.com/moonshadowrev/fbu-COMP1003/raw/main/Helps/mingw-get-setup.exe) .
- You can download mingw-get-setup in Helps Directory.
- 
## Step 2: Run the Installer

- Locate the downloaded `mingw-get-setup.exe` file in your Downloads folder.
- Double-click on the file to run the installer.

## Step 3: Installer Setup Wizard

- If prompted by User Account Control, click `Yes` to allow the installer to make changes to your device.
- Once the setup wizard starts, click `Next` to proceed with the installation.

## Step 4: Choose Installation Directory

- Choose the directory where you want to install MinGW. The default directory is usually `C:\MinGW`.
- After selecting the directory, click `Next`.

## Step 5: Select Components

- The installer will present you with a list of components to install.
- Ensure that you select `mingw32-base` and any other components you need, such as `mingw32-gcc-g++` for C++ support.
- Click `Next` to continue.

## Step 6: Review Changes

- Review the components that will be installed.
- Click `Next` to begin the installation process.

## Step 7: Installation Process

- The installer will now download and install the selected components. This process may take some time depending on your internet connection speed.

## Step 8: Finishing the Installation

- Once the installation is complete, click `Finish` to close the setup wizard.

## Step 9: Adding MinGW to System Path

- To use MinGW's tools from the command line, you need to add the MinGW bin directory to your system's PATH environment variable.
- Right-click on `This PC` or `My Computer` on your desktop or in File Explorer, and select `Properties`.
- Click on `Advanced system settings` and then click on `Environment Variables...`.
- Under `System Variables`, scroll down and find the `Path` variable. Select it and click `Edit...`.
- Click `New` and add the path to the MinGW bin directory (e.g., `C:\MinGW\bin`).
- Click `OK` to close all dialog boxes.

## Step 10: Verifying the Installation

- Open Command Prompt and type `gcc --version` and press Enter.
- If the installation was successful, you should see information about the GCC version installed.

You have now successfully installed MinGW32 on your Windows system and can begin using it to compile your C and C++ programs.

# hello-cmake
Learning cmake based builds having typical internal and external lib dependencies, test generation and execution. Basically serves no real world purpose except to refer to when starting a new c++ project

# Requirements
- ```nix``` package manager and ```nix-shell``` utility

# Build steps
- Run ```nix-shell```
- You will magically (this is true magic mind you!!) land inside a shell that has all dependencies for this project installed
- Run ```cmake .``` to generate ```Makefile```
- Run ```make``` to generate main application and its tester application

# Test steps
- Run ```test/hello-world-tests```

# App run steps
- Run ```app/hello-world```

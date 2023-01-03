# sfml_screensaver
This is a screen safer which shows a bouncing ball using smfl.

# compiling
The following command compiles the project with the dependencies for sfml installed by brew.
C++17 is forced.

```
clang++ main.cpp -g -I/opt/homebrew/Cellar/sfml/2.5.1_2/include -std=c++17 -o sfmlgame -L/opt/homebrew/Cellar/sfml/2.5.1_2/lib -lsfml-graphics -lsfml-window -lsfml-system
```

# aim
the aim of this is to start to learn the Simple and Fast Multimedia Library

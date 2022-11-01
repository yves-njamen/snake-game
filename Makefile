all:
      g++ -std=c++17 ./src/main.cpp -o main
clean:
      $(RM) main
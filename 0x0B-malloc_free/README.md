README.md

The editor used  for this project is vi.
The files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

the task focused on malloc and free.
  

      TASKS
0. Float like a butterfly, sting like a bee
  Write a function that creates an array of chars, and initializes it with a specific char.
        file name = 0-create_array.c
         Prototype: char *create_array(unsigned int size, char c);
1. The woman who has no imagination has no wings
      Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of
       the string given as a parameter.
      file name = 1-strdup.c
               Prototype: char *_strdup(char *str);
2. He who is not courageous enough to take risks will accomplish nothing in life
       Write a function that concatenates two strings.
       file name = 2-str_concat.c
          Prototype: char *str_concat(char *s1, char *s2);
      a. The returned pointer should point to a newly allocated space in memory which contains 
         the contents of s1, followed by the contents of s2, and null terminated
      b. if NULL is passed, treat it as an empty string
      c. The function should return NULL on failure
3. If you even dream of beating me you'd better wake up and apologize
     Write a function that returns a pointer to a 2 dimensional array of integers.
       Prototype: int **alloc_grid(int width, int height);
      file name = 3-alloc_grid.c
      a. Each element of the grid should be initialized to 0
      b. The function should return NULL on failure
      c. If width or height is 0 or negative, return NULL
4. It's not bragging if you can back it up
   Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
     file name = 4-free_grid.c
     Prototype: void free_grid(int **grid, int height);
     a. compile with your alloc_grid.c file. Make sure it compiles.
5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
    Write a function that concatenates all the arguments of your program.
      file name = 100-argstostr.c
      Prototype: char *argstostr(int ac, char **av);
      a. Returns NULL if ac == 0 or av == NULL
      b. Returns a pointer to a new string, or NULL if it fails
      c. Each argument should be followed by a \n in the new string
6. I will show you how great I am
    Write a function that splits a string into words.
     Prototype: char **strtow(char *str);
    file name = 101-strtow.c
     a. The function returns a pointer to an array of strings (words
     b. Each element of this array should contain a single word, null-terminated
     c. The last element of the returned array should be NULL
     d. Words are separated by spaces
     e. Returns NULL if str == NULL or str == ""
     f. function fails, it should return NULL

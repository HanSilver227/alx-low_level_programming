## 0x04-pointers_arrays_strings



### Description



1. What are pointers and how to use them

2. What are arrays and how to use them

3. What are the differences between pointers and arrays

4. How to use strings and how to manipulate them

5. Scope of variables



## Exercises



[0-reset_to_98.c](./0-reset_to_98.c)



* Prototype: void reset_to_98(int *n);



[1-swap.c](./1-swap.c)



* Prototype: void swap_int(int *a, int *b);



[2-strlen.c](./2-strlen.c)



* Prototype: int _strlen(char *s);



[3-puts.c](./3-puts.c)



* Prototype: void _puts(char *str);



[4-print_rev.c](./4-print_rev.c)



* Prototype: void print_rev(char *s);



[5-rev_string.c](./5-rev_string.c)





[6-puts2.c](./6-puts2.c)





* Prototype: void puts2(char *str);

* The function should print only one character out of two, starting with the

  first one



[7-puts_half.c](./7-puts_half.c)



* Prototype: void puts_half(char *str);

* The function should print the second half of the string

* If the number of characters is odd, the function should print the

  (length_of_the_string - 1) / 2 last characters of the string



[8-print_array.c](./8-print_array.c)



* Prototype: void print_array(int *a, int n);

* where n is the number of elements of the array to be printed

* Numbers must be separated by comma, followed by a space

* The numbers should be displayed in the same order as they

  are stored in the array

* You are allowed to use printf



[9-strcpy.c](./9-strcpy.c)



* Prototype: char *_strcpy(char *dest, char *src);

* Return value: the pointer to dest



100-atoi.c



* Prototype: int _atoi(char *s);

* The number in the string can be preceded by an infinite number of characters

* You need to take into account all the - and + signs before the number

* If there are no numbers in the string, the function must return 0

* You are not allowed to use long

* You are not allowed to declare new variables of “type” array

* You are not allowed to hard-code special values

* Your code needs to work on both ubuntu 14.04 LTS and 16.04 LTS

* We will use the -fsanitize=signed-integer-overflow gcc flag to compile your

  code.

* If this flag is not available in you version of gcc, you can install the last

  version on your VM

* We will use gcc version 5 or above to compile



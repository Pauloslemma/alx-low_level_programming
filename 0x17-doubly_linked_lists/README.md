<h1>Requirements</h1>
<h3>General</h3>
- Allowed editors: vi, vim, emacs
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, printf and exit
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called lists.h
- Don’t forget to push your header file
- All your header files should be include guarded

<h3>More Info</h3>
<p>Please use this data structure for this project:</p>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer0
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
<p>typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
</p>

### Task 0
- Write a function that prints all the elements of a dlistint_t list.

-  Prototype: size_t print_dlistint(const dlistint_t *h);
-  Return: the number of nodes
### Task 1
- Write a function that returns the number of elements in a linked dlistint_t list.

-  Prototype: size_t dlistint_len(const dlistint_t *h);

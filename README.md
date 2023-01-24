## Building a custom printf function.


Save this script below to compile the code

```
#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c test/main.c -o test/printf
```


```gcc .\_putchar.c .\print_char .\print_string.c .\_printf.c -o printf```

- If you need do add other functions, just add them to the *previous command*
 and *recompile*.

- You can create a bash script to compile all the files with the appropriate flags.

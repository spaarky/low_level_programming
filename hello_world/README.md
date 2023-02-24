# <p align="center">**C - Hello, World**</p>

<img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/212/cisfun.jpg" width="100%">

## <p align="center">**Description**</p>

### **Betty**
<p>
Betty is a linter tool for shell scripts that is written in C programming language. It was created by Holberton School as part of their curriculum. Betty helps to detect coding style issues, syntax errors, and potential bugs in shell scripts. It enforces a set of coding standards that make the code more readable and easier to maintain. Betty is easy to install and use and can be integrated with popular text editors like Visual Studio Code and Atom.
</p>

## **Resources**
* [Everything you need to know to start with C.pdf](https://intranet.hbtn.io/rltoken/84REXk5PZpCHvpqRhygpAw)
* [Dennis Ritchie](https://intranet.hbtn.io/rltoken/z_bMXWzGREPdNusi75hIaA)
* [“C” Programming Language: Brian Kernighan](https://intranet.hbtn.io/rltoken/ALlxQP48pUddRMMOU9IYrw)
* [Why C Programming Is Awesome](https://intranet.hbtn.io/rltoken/jeQhdiiq4EemF-jlzBCHKw)
* [Learning to program in C part 1](https://intranet.hbtn.io/rltoken/y-sbT9uSCGF6ml1ZPOvyJg)
* [Learning to program in C part 2](https://intranet.hbtn.io/rltoken/r3mDdJIpJHmu4TdJBV95gQ)
* [Understanding C program Compilation Process](https://intranet.hbtn.io/rltoken/tjRducuDVR9ftHsOFxdYmw)
* [Betty Coding Style](https://intranet.hbtn.io/rltoken/GG06ebtkejkhoyCOjx1S6w)
* [Hash-bang under the hood](https://intranet.hbtn.io/rltoken/3g2P7dlYovV0nY7Caeylnw)
* [Linus Torvalds on C vs. C++](https://intranet.hbtn.io/rltoken/fXapDTlCYs_KsVAJhxfz6A)

## **Requirements**
<p>
- Allowed editors: vi, vim, emacs <br>
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 <br>
- All your files should end with a new line<br>
- A README.md file at the root of the repo, containing a description of the repository<br>
- A README.md file, at the root of the folder of this project, containing a description of the project<br>
- There should be no errors and no warnings during compilation<br>
- You are not allowed to use system<br>
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl<br>
</p>

-----------------------

## **Tasks**
- **Task 0: _Preprocessor_**<br>
    [0-preprocessor](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/hello_world/0-preprocessor) - asked for a script that _runs a C file through the preprocessor and save the result into another file_, here `gcc -E $CFILE -o c`.

- **Task 1: _Compiler_**<br>
    [1-compiler](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/hello_world/1-compiler) - asked for a script that _compiles a C file but does not link_, here `gcc -c $CFILE`.

- **Task 2: _Assembler_**<br>
    [2-assembler](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/hello_world/2-assembler) - asked for a script that _compiles a C file and creates an executable named `cisfun`_, here `gcc $CFILE -o cisfun`.

- **Task 3: _Name_**<br>
    [3-name](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/hello_world/3-name) - asked for a script that _prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line_, here `gcc $CFILE -o cisfun`.

- **Task 4: _Hello, puts_**<br>
    [4-puts.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/hello_world/4-puts.c) - asked for a script that _prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line_.
    ```c
    int main(void)
    {
        puts("\"Programming is like building a multilingual puzzle");
        return (0);
    }
    ```

- **Task 5: _Hello, printf_**<br>
    [5-printf.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/hello_world/5-printf.c) - asked for a script that _prints exactly `with proper grammar, but the outcome is a piece of art,` , followed by a new line_.

    ```c
    int main(void)
    {
	    printf("with proper grammar, but the outcome is a piece of art,\n");
	    return (0);
    }
    ```

- **Task 6: _Size is not grandeur, and territory does not make a nation_**<br>
    [6-size.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/hello_world/6-size.c) - asked for a script that _prints the size of various types on the computer it is compiled and run on_.

    ```c
    int main(void)
    {
	    printf("Size of a char: %zu byte(s)\n", sizeof(char));
	    printf("Size of an int: %zu byte(s)\n", sizeof(int));
	    printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	    printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	    printf("Size of a float: %zu byte(s)\n", sizeof(float));

	    return (0);
    }
    ```

- **Advanced Task 7: _Intel_**<br>
    [100-intel](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/hello_world/100-intel) - asked for a script that _generates the assembly code (Intel syntax) of a C code and save it in an output file_, here `gcc -S -masm=intel $CFILE`.

- **Advanced Task 8: _UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity_**<br>
    [101-quote.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/hello_worlds/101-quote.c) - asked for a script that _prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error_.
    ```c  
    int main(void)
    {
	    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	    return (1);
    } 
    ```

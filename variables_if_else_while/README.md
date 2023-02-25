# <p align="center">**C - Hello, World**</p>

## <p align="center">**Description**</p>

### **Betty**
<p>
Betty is a linter tool for shell scripts that is written in C programming language. It was created by Holberton School as part of their curriculum. Betty helps to detect coding style issues, syntax errors, and potential bugs in shell scripts. It enforces a set of coding standards that make the code more readable and easier to maintain. Betty is easy to install and use and can be integrated with popular text editors like Visual Studio Code and Atom.
</p>

## **Resources**
* [Everything you need to know to start with C.pdf](https://intranet.hbtn.io/rltoken/ZPQW6TjCWFeX9Y5pN33NVA)
* [Keywords and identifiers](https://intranet.hbtn.io/rltoken/CJPUuNKHthtvZgImtEVvXA)
* [integers](https://intranet.hbtn.io/rltoken/L62RbK4buoJpukZpGiYo4w)
* [Arithmetic Operators in C](https://intranet.hbtn.io/rltoken/WYLsq9-VLs8EkYxZepIdcg)
* [if…else statement](https://intranet.hbtn.io/rltoken/yuTsh0MB6AzC2L43xX9mJQ)
* [Relational operators](https://intranet.hbtn.io/rltoken/MVF9PuY_IAVw5fh79b6lww)
* [Logical operators](https://intranet.hbtn.io/rltoken/Uz1byju6ep3Ur0URB1Pt0A)
* [while loop in C](https://intranet.hbtn.io/rltoken/FxPxfoKS2AVjvrSGQQKY0g)
* [While loop](https://intranet.hbtn.io/rltoken/zqJKmSFQD8nlNSDnGcU7AQ)

## **Requirements**
<p>
- Allowed editors: vi, vim, emacs <br>
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 <br>
- All your files should end with a new line<br>
- A README.md file, at the root of the folder of this project, containing a description of the project<br>
- There should be no errors and no warnings during compilation<br>
- You are not allowed to use system<br>
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl<br>
</p>

-----------------------

## **Tasks**
- **Task 0: _Positive anything is better than negative nothing_**<br>
    [0-positive_or_negative.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/variable_if_else_while/0-positive_or_negative.c).
    ```c
    int main(void)

    {
	    int n;

	    srand(time(0));
	    n = rand() - RAND_MAX / 2;
	    if (n > 0)
	    {
		    printf("%d is positive\n", n);
	    }
	    else if (n == 0)
	    {
		    printf("%d is zero\n", n);
	    }
	    else
	    {
		    printf("%d is negative\n", n);
	    }
	    return (0);
    }
    ```

- **Task 1: _The last digit_**<br>
    [1-last_digit.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/variable_if_else_while/1-last_digit.c).
    ```c
    int main(void)
    {
	    int n;

	    srand(time(0));
	    n = rand() - RAND_MAX / 2;
	    printf("Last digit of %d is ", n);
	    if (n % 10 > 5)
	    {
	    	printf("%d and is greater than 5\n", n % 10);
	    }
	    else if (n % 10 == 0)
	    {
	    	printf("%d and is 0\n", n % 10);
	    }
	    else if (n % 10 != 0 && n % 10 < 6)
	    {
	        printf("%d and is less than 6 and not 0\n", n % 10);
	    }
	    return (0);
    }
    ```

- **Task 2: _ I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game_**<br>
    [2-print_alphabet.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/variable_if_else_while/2-print_alphabet.c).
    ```c
    int main(void)
    {
	    char a;

	    for (a = 'a'; a <= 'z'; a++)
	    {
		    putchar(a);
	    }
	    putchar('\n');
	    return (0);
    }
	```

- **Task 3: _alphABET_**<br>
    [3-print_alphabets.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/variable_if_else_while/3-print_alphabets.c).
	```c
	int main(void)
	{
		char a, b;

		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		for (b = 'A'; b <= 'Z'; b++)
		{
			putchar(b);
		}
		putchar('\n');
		return (0);
	}
	```

- **Task 4: _When I was having that alphabet soup, I never thought that it would pay off_**<br>
    [4-print_alphabt.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/variable_if_else_while/4-print_alphabt.c).
    ```c
	int main(void)
	{
		char a;

		for (a = 'a'; a <= 'z'; a++)
		{
			if (a == 'q' || a == 'e')
			{
				a++;
			}
			putchar(a);
		}
		putchar('\n');
		return (0);
	}
    ```

- **Task 5: _Numbers_**<br>
    [5-print_numbers.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/variable_if_else_while/5-print_numbers.c).

    ```c
	int main(void)
	{
		char a;

		for (a = '0'; a <= '9'; a++)
		{
			putchar(a);
		}
		putchar('\n');
		return (0);
	}
    ```

- **Task 6: _Numberz_**<br>
    [6-print_numberz.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/variable_if_else_while/6-print_numberz.c).

    ```c
	int main(void)
	{
		int a;

		for (a = '0'; a <= '9'; a++)
		{
			putchar(a);
		}
		putchar('\n');
		return (0);
	}
    ```

- **Task 7: _Smile in the mirror_**<br>
    [7-print_tebahpla.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/variable_if_else_while/7-print_tebahpla.c).
	```c
	int main(void)
	{
		char a;

		for (a = 'z'; a >= 'a'; a--)
		{
			putchar(a);
		}
		putchar('\n');
		return (0);
	}
    ```

- **Task 8: _Hexadecimal_**<br>
    [8-print_base16.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/variable_if_else_while/8-print_base16.c).
    ```c  
	int main(void)
	{
		char n;

		for (n = '0'; n <= '9'; n++)
		{
			putchar(n);
		}
		for (n = 'a'; n <= 'f'; n++)
		{
			putchar(n);
		}
		putchar('\n');
		return (0);
	}
    ```

- **Task 9: _Patience, persistence and perspiration make an unbeatable combination for success_**<br>
    [9-print_comb.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/variable_if_else_while/9-print_comb.c).
    ```c
	int main(void)
	{
		int n;

		for (n = '0'; n <= '9'; n++)
		{
			putchar(n);
			if (n != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		return (0);
	}
    ```

- **Task 10: _Inventing is a combination of brains and materials. The more brains you use, the less material you need_**<br>
    [100-print_comb3.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/variable_if_else_while/100-print_comb3.c).
    ```c  
	int main(void)
	{
		int num1;
		int num2;

		for (num1 = 0; num1 < 9; num1++)
		{
			for (num2 = num1 + 1; num2 <= 9; num2++)
			{
				putchar((num1) + '0');
				putchar((num2) + '0');
				{
					if (num1 == 8)
						break;
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');

		return (0);
	}
    ```

- **Advanced Task 11: _The success combination in business is: Do what you do better... and: do more of what you do..._**<br>
    [101-print_comb4.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/variable_if_else_while/101-print_comb4.c).
    ```c
	int main(void)
	{
		int num1, num2, num3;

		for (num1 = 0; num1 < 9; num1++)
		{
			for (num2 = num1 + 1; num2 <= 9; num2++)
			{
				for (num3 = num2 + 1; num3 <= 9; num3++)
				{
					putchar((num1) + '0');
					putchar((num2) + '0');
					putchar((num3) + '0');
					{
						if (num1 == 7)
							break;
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
		putchar('\n');
		return (0);
	} 
    ```

- **Advanced Task 12: _Software is eating the World_**<br>
    [102-print_comb5.c](https://github.com/Spark4545/holbertonschool-low_level_programming/blob/master/variable_if_else_while/102-print_comb5.c).
    ```c  
	int main(void)
	{
		int num1, num2;

		for (num1 = 0; num1 <= 100; num1++)
		{
			for (num2 = num1 + 1; num2 < 100; num2++)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');

				if (num1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
		return (0);
	}
    ```
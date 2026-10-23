int occ_z(char *str)
{
	int i;
	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == 'z')
			count++;
		i++;	
	}
	return (count);
}


// #include <unistd.h>

// int main(int ac, char **av)
// {
//     int i;

//     if (ac != 2)
//     {
//         write(1, "a\n", 1);
//         return (0);
//     }
//     i = 0;
//     while (av[1][i] != '\0')
//     {   
//         if (av[1][i] == 'a')
//         {   
//             write(1, "a", 1);
//             break;
            
//         }
//         i++;
        

//     }
//     write(1, "\n", 1);
//     return (0);
// } 

// int main(void)
// {
//     write(1, "987654321\n", 10);
//     return (0);
// }

// #include <unistd.h>

// void	ft_print_numbers(void)
// {
//     char c;
//     c = '0';
    
//     while (c <= '9')
//     {
//         write(1, &c, 1);
//         c++;
//     }

// }

// int main(void)
// {
//     ft_print_numbers();

//     return (0);
// }

// #include <unistd.h>

// int main(int ac, char **av)
// {
//     int i;
//     i = 0;
//     if (ac == 1) //If the number of arguments is less than 1
//     {
//         write(1, "\n", 1);
//         return (0);
//     }
//     while (av[1][i])
//     {
//         write(1, &av[1][i], 1);
//         i++;
//     }
//     return (0);
// }

// #include <unistd.h>

// int main(int ac, char **av)
// {
//     int i;
//     i = 0;
//     if (ac > 1)
//     {
//         write(1, "\n", 1);
//         return (0);
//     }
//     while (av[1][i])
//     {
//         write(1, &av[1][i], 1);
//         i++;
//     }
//     return (0);
// }


// #include <unistd.h>

// int main(int ac, char **av)
// {
//     int i;
//     int j;

//     if (ac == 1)
//     {
//         write(1, "\n", 1);
//         return (0);
//     }
//     j = 1;
//     while ( j < ac)
//     {
//         i = 0;
//         while (av[j][i])
//         {
//             write(1, &av[j][i], 1);
//                 i++;
                        
//         }
//         j++;
//         write(1, "\n", 1);
        
//     }
    
//     return (0);
// }

// #include <unistd.h>

// int main(int ac, char **av)
// {
//     int i;
//     int last;
    
//     last = ac - 1;
//     while (last > 0)
//     {
//         i = 0;
//         while (av[last][i])
//         {
//             write(1, &av[last][i], 1);
//             i++;
//         }
//         last--;
//         write(1, "\n", 1);
//     }
//     return (0);

// }


// #include <unistd.h>

// int main(int ac, char **av)
// {
//     int i;
//     int last;

//     last = ac - 1;
//     i = 0;

//     if (ac == 1)
//     {
//         write(1, "\n", 1);
//         return (0);
//     }
//     while (ac > 1)
//     {
//         while (av[last][i])
//         {
//             write(1, &av[last][i], 1);
//             i++;
//         }
//         write(1, "\n", 1);
//         return (0);
//     }

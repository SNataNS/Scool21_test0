#include <unistd.h>
int print_str(char arg, char x, char y)
{
    char    s;
    
    if(arg >= x && arg <= y)
       {
            if (arg == y)
                write(1, &x, 1);
            else
                {
                    s = arg + 1;
                    write(1, &s, 1);
                }
            return (0);
        }
    else
        return (1);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int i;
        int res;
        
        i = 0;
        while(argv[1][i])
        {
            res = print_str(argv[1][i], 'A', 'Z');
            if (res)
                res = print_str(argv[1][i], 'a', 'z');
            if (res)
                write(1, &argv[1][i], 1);
            i++;    
        }
    }
    write(1, "\n", 1);
    return(0);
}

 #include <stdio.h>
 #include <unistd.h>
 
int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int i;
        char    s;
        
        i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
                s = argv[1][i] + 13;
            else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
                s = argv[1][i] - 13;   
            else if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
                s = argv[1][i] + 13;
            else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
                s = argv[1][i] - 13;
            else
                s = argv[1][i];
            write (1, &s, 1);
            i++;
        }
    }
        
    else 
        write (1, "\n", 1);
    return(0);
}

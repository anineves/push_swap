#include "libft.h"

static int    ft_cont(int nb)
{
        int    cont;
        
        cont = 0;
        
        if (nb <= 0)
        {
               cont++;
        }
        while (nb != 0)
        {
                cont ++;
                nb = nb / 10;
        }
        return(cont);
}

char    *ft_itoa(int n)
{
        char    *str;
        int    cont;
        int     sinal;

        cont = ft_cont(n);
        sinal = 1;     
        str = malloc(sizeof(char) * (cont + 1));
        if (str == NULL)
                return (NULL);
        
        str[cont] = '\0';
        cont--;
        if(n < 0)
        {
                str[0] = '-';
                sinal = -1;
        }
        else if (n == 0)
        {
                str[0] = '0';
        }
        
        while (n != 0)
        {
                str[cont] = 48 + (n % 10 * sinal);
                n /=  10;
                cont--;
        }
        return (str);

}
/*
int     main(void)
{
        printf("%s\n", ft_itoa(1342345));
} */

#include <unistd.h>
#include <stdio.h>
#include <string.h>


char    *ft_strstr(char *str,char   *to_find)
{
	int i=0;
	int j=0;
	int k=0;
	if(to_find[0] == '\0')
	{
		return (str);
	}
	while(str[i] != '\0')
	{
		j=0;
		if(str[i] == to_find[0])
		{
			k=i;
			while(str[k] == to_find[j])
			{
				if(to_find[j+1]=='\0')
				{
					return (&str[i]);
				}
				k++;
				j++;
			}
		}
				i++;
	}
	return (0);
}

int main()
{

	    char a[]="0hl";
	        
			printf("%s",ft_strstr(a," "));

}

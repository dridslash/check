/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 15:31:18 by marvin            #+#    #+#             */
/*   Updated: 2021/12/31 15:31:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char    *ft_strstr(char *str,char   *to_find)
{
	    int i=0;
	        int j=0;
		    int k=0;
		        if(to_find[0] == '\0'){
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
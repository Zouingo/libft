/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:28:34 by zhebert           #+#    #+#             */
/*   Updated: 2023/11/02 19:07:39 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t static	ft_smaller(char const *s, size_t len)
{
	size_t	i;

	i = ft_strlen(s);
	if (i <= len)
		return (i);
	else
		return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = (char *)malloc(ft_smaller(s, len) + 1);
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

// int main()
// {
// 	char og[] = "yoyoyo ceci est une chaine";
// 	char *res = ft_substr(og, 7, 4);
// 	if (res != NULL)
// 	{
// 		printf("%s", res);
// 	}
// 	else
// 		printf("L'allocation mémoire a échoué.\n");
// 	free(res);
// 	return(0);
// }
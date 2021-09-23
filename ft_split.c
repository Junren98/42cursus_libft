/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:50:24 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/21 14:43:09 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return the string split, return NULL if fails 
// the array must ended with NULL pointer
// rmb put static
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *c)
{
	char	*p;

	p = (char *)c;
	while (*p)
		p++;
	return (p - c);
}


size_t	count_word(char *s, char c)
{
	char	*ptr1;
	size_t	count;

	ptr1 = s;
	while(*ptr1)
		if (*ptr1++ == c)
			count++;
	return (count);
}
// need length for each word
// need a pointer point to word
char	*word_split(char *s, char c)
{
	char	*ptr1;
	char	*word;
	char	*ret;
	size_t	count;

	count = 0;
	ptr1 = s;
	while (*ptr1++ != c)
		count++;
	word = (char *) malloc (sizeof(char) * (count + 1));
	if (word == NULL)
		return (NULL);
	ret = word;
	while (count--)
		*word++ = *s++;
	*word = '\0';
	return (ret);
}

// split the word, move to next pointer
// first go through each char to check it is delimiter
// if yes then keep the addr, then move to another 
// need to count how many word, and how many char inside each word
char	**ft_split(const char *s, char c)
{
	char	**ptr;
	char	**ret;
	char	*ptr_s;
	char	*word;
	size_t	ct_word;

	ptr_s = (char *)s;
	ct_word = count_word(ptr_s, c);
	ptr = (char **) malloc (sizeof(char *) * ct_word);
	if (ptr == NULL)
		return (NULL);
	ret = ptr;
	// calculate how many char in each word, then put inside
	// how to to next word after delimiter
	// first get word 
	while (ct_word--)
	{
		word = word_split(ptr_s, c); 
		*ptr = (char *) malloc (sizeof(char) * (ft_strlen(word) + 1));
		printf("the strlen is %lu, word is %s\n", ft_strlen(word), word);
		while (*word)
		{
			**ret++ = *word++;
			printf("the **ptr is %c\n", **ptr);
		}
		free(word);
		(*ret)++;
	}
	return (ret);

}
int	main(void)
{
	char	*s1 = "Hello world, this is a test string";
	char	**res = ft_split(s1, ' ');
	/*int	count_word = 0;

	while (*s1)
		if (valid_split(s1++, ' '))
			count_word++;	
	printf("%d\n", count_word);*/
	for (int i = 0; i < 8; i++)
	{
		printf("%s\n", res[i]);
	}

} 
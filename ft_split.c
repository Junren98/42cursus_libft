/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:50:24 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/10/04 16:47:48 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return the string split, return NULL if fails 
// the array must ended with NULL pointer
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static	int	count_word(const char *s, char c)
{
	int		count;
	int		i;
	char	prev;
	char	*ptr;

	count = 0;
	i = 0;
	prev = c;
	ptr = (char *)s;
	while (ptr[i])
	{
		if (ptr[i] != c && prev == c)
			count++;
		prev = ptr[i];
		i++;
	}
	return (count);
}

static char	*word_split(char *s, char c)
{
	char	*ptr1;
	char	*ret;
	size_t	count;
	char	*ptr_word;

	count = 0;
	ptr1 = s;
	while (*ptr1 == c)
		ptr1++;
	ptr_word = ptr1;
	while (*ptr1 != c && *ptr1++)
		count++;
	ret = (char *) malloc (sizeof(char) * (count + 1));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, ptr_word, count + 1);
	return (ret);
}

// how to handle continous delimiter
static char	*move_next_word(char *ptr, char c)
{
	if (!(*ptr))
		return (NULL);
	while (*ptr == c)
		ptr++;
	while (*ptr && *ptr != c)
		ptr++;
	return (ptr);
}
// start with a pointer to the begining of the string
// iterate character by character, looking for your delimiter
// each time you find one, you have a string from the last position
// of the length in difference - do what you want with that
// set the new start position to the delimiter + 1, and the go to step 2.

char	**ft_split(const char *s, char c)
{
	char	**ptr;
	char	*ptr_s;
	int		ct_word;
	int		i;
	char	*word;

	ptr_s = (char *)s;
	ct_word = count_word(ptr_s, c);
	ptr = (char **) malloc (sizeof(char *) * (ct_word + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < ct_word)
	{
		word = word_split(ptr_s, c);
		ptr[i] = (char *) malloc (sizeof(char) * (ft_strlen(word) + 1));
		ft_strlcpy(ptr[i], word, (ft_strlen(word) + 1));
		ptr_s = move_next_word(ptr_s, c);
		free(word);
		i++;
	}
	(ptr[i]) = NULL;
	return (ptr);
}

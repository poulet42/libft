/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:25:48 by cprune            #+#    #+#             */
/*   Updated: 2015/12/04 18:54:09 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
	char	str[10] = "bbbbbbbbb";
	char	str2[10] = "ccccccccc\0";
	char	*dst;

	dst = (char *)malloc(sizeof(str) * 1000);
	/****BZERO****/
	ft_putstr("\ntest de la fonction bzero :\n");
	ft_putstr("Avant :\n");
	ft_putstr(str);
	ft_putstr("\nApres :\n");
	ft_bzero(str, 6);
	ft_putstr(str);
	/****MEMSET****/
	ft_putstr("\ntest de la fonction memset :\n");
	ft_putstr("Avant :\n");
	ft_putstr(str);
	ft_putstr("\nApres :\n");
	ft_memset(str, 'a', 5);
	ft_putstr(str);
	/****ft_putnbr****/
	ft_putstr("\ntest de la fonction ft_putnbr :\n");
	ft_putnbr(+9596);
	/****ft_strcpy****/
	ft_putstr("\ntest de la fonction ft_strcpy :\n");
	ft_putstr("\ndestination avant strcpy:\n");
	char dst2[] = "1234567";
	char dst3[] = "1234567";
	ft_putstr(dst2);
	ft_strcpy(dst2, "abcde");
	strcpy(dst3, "abcde");
	ft_putstr("\ndestination (moi):\n");
	ft_putstr(dst2);
	ft_putstr("\ndestination (offi):\n");
	ft_putstr(dst3);
	/****ft_strncpy****/
	char dstrn[30] = {[29]='a'};
	char dstrn2[30] = {[29]='a'};
	ft_putstr("\ntest de la fonction ft_strncpy :\n");
	ft_putstr("\ndestination avant strncpy (n:12):\n");
	ft_putstr(dstrn);
	ft_strncpy(dstrn, "--> nyancat <--\n", 12);
	strncpy(dstrn2, "--> nyancat <--\n", 12);
	ft_putstr("\n\n-----\n%s\n------\n\n");
	ft_putstr(dstrn2);
	printf("DIFF : %d\n", strcmp(dstrn, dstrn2));
	/****ft_strcat****/
	ft_putstr("\ntest de la fonction ft_strcat :\n");
	ft_putstr("source :\n");
	ft_putstr(str2);
	ft_putstr("\ndestination avant strcat:\n");
	ft_putstr(str);
	ft_strncat(str, "123", 3);
	ft_putstr("\ndestination :\n");
	ft_putstr(str);
	/********ATOI**********/
	printf("\nTEST atoi:\n");
	int x = ft_atoi("\200-1 1");
	printf("\n%d\n", x);
	/**********STRNSTR******/
	printf("test strnstr\n");
	printf("\n%s\n", strnstr("j'aime les noisettes", "aime", 9));
	printf("\n%s\n", ft_strnstr("j'aime les noisettes", "aime", 9));
	/***Strrchr***/
	printf("test strrchr\n");
	printf("\n%s\n", ft_strrchr("abcdef",'f'));
	/*memccpy*/
	char str3[50];
	char str4[] = "12356";
	printf("test memccpy\n");
	printf("%s\n",memccpy(str3, str4, 0, sizeof(str4)));
	printf("%s\n", str3);
	/**ITOA*/
	printf("ITOA:\n%s\n", ft_itoa(-2147483648));
	/*putendl fd*/
	printf("wtf\n");
	ft_putendl_fd("A QUE KOUKOU", 1);
	/*ft_strjoin*/
	printf("%s\n", ft_strjoin("abc", "bcd"));
	/*ft_strtrim*/
	printf("TRIM:\n%s\n", ft_strtrim("   "));
	/*strdup*/
	printf("test ft_strdup: \n%s\n", ft_strdup("abcdefghaaaaaaaaaaaaa"));
	/*strsub*/
	printf("test strsub:\n%s\n", ft_strsub("abcdtesta", 4, 4));
	/*strsplit*/
	printf("test strsplit:\n%s\n", ft_strsplit("ab*cd", '*')[1]);
	return (0);
}

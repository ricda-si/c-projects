/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:54:28 by ricda-si          #+#    #+#             */
/*   Updated: 2022/11/02 17:15:10 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t size);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int ch);
int		ft_isalpha(int ch);
int		ft_isascii(int ch);
int		ft_isdigit(int ch);
int		ft_isprint(int ch);
void	*ft_memchr(const void *str, int c, size_t size);
int		ft_memcmp(const void *str1, const void *str2, size_t size);
void	*ft_memcpy(void *str1, void *str2, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memset(void *str, int value, size_t size);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, int size);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *str1, const char *str2, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t size);
char	*ft_strrchr(const char *str1, int c);
char	*ft_strchr(const char *str, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int ch);
int		ft_toupper(int ch);

#endif
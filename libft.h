/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:07:53 by al-humea          #+#    #+#             */
/*   Updated: 2021/01/29 11:33:03 by al-humea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
int					ft_atoi(const char *str);
long unsigned int	ft_atolu(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);
void				*ft_memccpy(void *dst, const void *src, int chr, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strchr(const char *s, int c);
char				ft_strsrc(const char *str, int src);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *h, const char *n, size_t l);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t				ft_strlen(const char *s);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_substr(const char *str, unsigned int starto, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(const char *s1, const char *set);
char				**ft_split(char const *str, char c);
char				*ft_strmapi(char const *str, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_lstadd_back(t_list	**alst, t_list *new);
void				ft_lstadd_front(t_list **alst, t_list *new);
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *l, void *(*f)(void *), void (*d)(void *));
char				*ft_chardup(char c);
int					ft_nbrlen(unsigned long nbr);
unsigned long		ft_hexalen(unsigned long nbr);
char				*ft_itoa(int nbr);
char				*ft_utoa(unsigned int nbr);
char				*ft_lutoa(unsigned long nbr);
char				*ft_lutox(unsigned long nbr);
char				*ft_lutocx(unsigned long nbr);
void				ft_spamc(char c, int len);
void				ft_putlenstr(char *str, int len);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:02:44 by robert0           #+#    #+#             */
/*   Updated: 2018/06/30 10:16:24 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		__LIBFT_H__
 #define	__LIBFT_H__

 #include	<string.h>

 typedef struct		s_list
 {
 	void			*content;
 	size_t			content_size;
 	struct s_list	*next;
 }					t_list;

 void	*ft_memset(void *s, int c, size_t n);
 void	ft_bzero(void *s, size_t n);
 void	*ft_memcpy(void *dest, const void *src, size_t n);
 void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
 void	*ft_memmove(void *dest, const void *src, size_t n);
 void	*ft_memchr(const void *s, int c, size_t n);
 void	*ft_memrchr(const void *s, int c, size_t n);
 int	ft_memcmp(const void *s1, const void *s2, size_t n);

 size_t	ft_strlen(const char *s);
 char	*ft_strdup(const char *s);
 char	*ft_strndup(const char *s, size_t size);
 char	*ft_strcpy(char *dest, const char *src);
 char	*ft_strncpy(char *dest, const char *src, size_t n); 
 char 	*ft_strcat(char *dest, const char *src);
 char	*ft_strncat(char *dest, const char *src, size_t n);
 size_t	ft_strlcat(char *dst, const char *src, size_t size);
 char	*ft_strchr(const char *s, int c);
 char	*ft_strrchr(const char *s, int c);
 char	*ft_strbasestr(const char *haystack, const char *needle, int (*cmp)(const char *, const char *, size_t));
 char	*ft_strnbasestr(const char *big, const char *little, size_t len, int (*cmp)(const char *, const char *, size_t));
 char	*ft_strstr(const char *haystack, const char *needle);
 char	*ft_strnstr(const char	*big, const char *little, size_t len);
 char	*ft_strncasestr(const char	*big, const char *little, size_t len);
 char	*ft_strcasestr(const char *haystack, const char *needle);
 int	ft_strcmp(const char *s1, const char *s2);
 int	ft_strcasecmp(const char *s1, const char *s2);
 int	ft_strncmp(const char *s1, const char *s2, size_t n);
 int	ft_strncasecmp(const char *s1, const char *s2, size_t n);
 size_t	ft_str_getnbwords_c(const char *s, char c_sep);
 size_t	ft_str_getnbwords_str(const char *s, char const *s_sep);

 int	ft_atoi(const char *nptr);
 long	ft_atol(const char *nptr);
 size_t	ft_atost(const char *nptr);
 int	ft_atoi_base(const char *nptr, const char *base);
 long	ft_atol_base(const char *nptr, const char *base);
 size_t	ft_atost_base(const char *nptr, const char *base);
 int	ft_check_base(char *base);
 size_t	ft_numberlen(int nbr, size_t size_base);

 char	*ft_itoa(int n);
 char	*ft_ltoa(long n);
 char	*ft_sttoa(size_t n);
 char	*ft_itoa_base(int nb, char *base);
 char	*ft_ltoa_base(long nb, char *base);
 char	*ft_sttoa_base(size_t nb, char *base);

 int	ft_isalpha(int c);
 int	ft_isalpha_upper(int c);
 int	ft_isalpha_lower(int c);
 int	ft_isdigit(int c);
 int	ft_isalnum(int c);
 int	ft_isascii(int c);
 int	ft_isprint(int c);

 int	ft_toupper(int c);
 int	ft_tolower(int c);
 char	*ft_strtoupper(char *str);
 char	*ft_strtolower(char *str);
 

 void	*ft_memalloc(size_t size);
 void	ft_memdel(void **ap);

 char	*ft_strnew(size_t size);
 void	ft_strdel(char **as);
 void	ft_strclr(char *s);
 void	ft_striter(char *s, void (*f)(char *));
 void	ft_striteri(char *s, void (*f)(unsigned int, char *));
 char	*ft_strmap(char const *s, char (*f)(char));
 char	*ft_strmapi(char const *s, char(*f)(unsigned int, char));
 int	ft_strequ(char const *s1, char const *s2);
 int	ft_strcaseequ(char const *s1, char const *s2);
 int	ft_strnequ(char const *s1, char const *s2, size_t n);
 int	ft_strncaseequ(char const *s1, char const *s2, size_t n);
 char	*ft_strsub(char const *s, unsigned int start, size_t len);
 char	*ft_strjoin(char const *s1, char const *s2);
 char	*ft_strtrim(char const *s);
 char	*ft_strtrim_c(char const *s, char c);
 char	*ft_strtrim_str(char const *s, char const *s_sep);
 char	**ft_strsplit_c(char const *s, char c);
 char	**ft_strsplit(char const *s);
 char	**ft_strsplit_str(char const *s, char const *str_sep);

 void	ft_putchar(char c);
 void	ft_putstr(char const *s);
 void	ft_putendl(char const *s);
 void	ft_putnbr(int n);

 void	ft_putchar_fd(char c, int fd);
 void	ft_putstr_fd(char const *s, int fd);
 void	ft_putendl_fd(char const *s, int fd);
 void	ft_putnbr_fd(int n, int fd);

 t_list	*ft_lstnew(void const *content, size_t content_size);
 void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t)); 
 void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
 void	ft_lstremove(t_list **begin_list, void *data_ref, int (*cmp)(), void (*del)(void *, size_t));
 void	ft_lstadd(t_list **alst, t_list *new);
 void	ft_lstaddback(t_list **alst, t_list *new);
 void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
 t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
 size_t	ft_lstsize(t_list *list);
 t_list	*ft_lstat(t_list *list, size_t index);
 void	ft_lstrev(t_list **begin_list);
 void	ft_lstsort(t_list **begin_list, int (*cmp)());
 t_list	*ft_lstgetlast(t_list *list);

 void	*ft_print_memory(void *addr, size_t size);

#endif

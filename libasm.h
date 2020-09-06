#ifndef LIBASM_H
# define LIBASM_H

size_t	_ft_strlen(char *s);
char	*_ft_strcpy(char *dest, const char *src);
int		_ft_strcmp(const char *s1, const char *s2);
ssize_t	_ft_write(int fd, const void *buf, size_t count);
ssize_t _ft_read(int fd, void *buf, size_t count);
char    *_ft_strdup(const char *s);

#endif	

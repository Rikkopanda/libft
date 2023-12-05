
#include "libft.h"



void *ft_realloc(void *ptr, size_t size)
{
	free(ptr);
	ptr = malloc(size);
	return(ptr);
}

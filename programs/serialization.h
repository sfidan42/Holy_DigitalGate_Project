#ifndef SERIALIZATION_H
# define SERIALIZATION_H
# include <stdlib.h>
# include "../utils/utils.h"

typedef struct
{
	int		Code;
	char	*Reason;
}			Crash;

# define BUFFER_SIZE sizeof(Crash)

#endif
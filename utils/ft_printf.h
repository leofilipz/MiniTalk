/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:38:13 by leborges          #+#    #+#             */
/*   Updated: 2022/12/05 19:42:03 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//LIBRARY

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"

int	ft_printf(const char *placeholder, ...);

//PRINT CHAR TYPE FUNCTIONS

int	ft_print_char(char placeholder, va_list args);

//PRINT INT TYPE FUNCTIONS

int	ft_print_int(char placeholder, va_list args);

//PRINT HEXA TYPE FUNCTIONS

int	ft_print_hex(char placeholder, va_list args);

//PRINT POINTER TYPE FUNCTIONS

int	ft_print_ptr(char placeholder, va_list args);
#endif

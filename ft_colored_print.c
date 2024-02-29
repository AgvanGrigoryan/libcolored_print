/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colored_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <aggrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:58:00 by aggrigor          #+#    #+#             */
/*   Updated: 2024/02/29 14:33:13 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colored_print.h"

void	pred(char *str, char is_bold, int fd)
{
	if (is_bold == BOLD)
		write(fd, BOLD_RED, COLOR_CHARS_LENGTH);
	else if (is_bold == NOT_BOLD)
		write(fd, RED, COLOR_CHARS_LENGTH);
	else
	{
		write(2, "use 'BOLD' or 'NOT_BOLD' macroses for second argument\n", 54);
	}
	while (*str)
		write(fd, str++, 1);
	reset_pcolor(fd);
}

void	pgreen(char *str, char is_bold, int fd)
{
	if (is_bold == BOLD)
		write(fd, BOLD_GREEN, COLOR_CHARS_LENGTH);
	else if (is_bold == NOT_BOLD)
		write(fd, GREEN, COLOR_CHARS_LENGTH);
	else
	{
		write(2, "use 'BOLD' or 'NOT_BOLD' macroses for second argument\n", 54);
	}
	while (*str)
		write(fd, str++, 1);
	reset_pcolor(fd);
}

void	pyellow(char *str, char is_bold, int fd)
{
	if (is_bold == BOLD)
		write(fd, BOLD_YELLOW, COLOR_CHARS_LENGTH);
	else if (is_bold == NOT_BOLD)
		write(fd, YELLOW, COLOR_CHARS_LENGTH);
	else
	{
		write(2, "use 'BOLD' or 'NOT_BOLD' macroses for second argument\n", 54);
	}
	while (*str)
		write(fd, str++, 1);
	reset_pcolor(fd);
}

void	pblue(char *str, char is_bold, int fd)
{
	if (is_bold == BOLD)
		write(fd, BOLD_BLUE, COLOR_CHARS_LENGTH);
	else if (is_bold == NOT_BOLD)
		write(fd, BLUE, COLOR_CHARS_LENGTH);
	else
	{
		write(2, "use 'BOLD' or 'NOT_BOLD' macroses for second argument\n", 54);
	}
	while (*str)
		write(fd, str++, 1);
	reset_pcolor(fd);
}

void	ppurple(char *str, char is_bold, int fd)
{
	if (is_bold == BOLD)
		write(fd, BOLD_PURPLE, COLOR_CHARS_LENGTH);
	else if (is_bold == NOT_BOLD)
		write(fd, PURPLE, COLOR_CHARS_LENGTH);
	else
	{
		write(2, "use 'BOLD' or 'NOT_BOLD' macroses for second argument\n", 54);
	}
	while (*str)
		write(fd, str++, 1);
	reset_pcolor(fd);
}

void	pcyan(char *str, char is_bold, int fd)
{
	if (is_bold == BOLD)
		write(fd, BOLD_CYAN, COLOR_CHARS_LENGTH);
	else if (is_bold == NOT_BOLD)
		write(fd, CYAN, COLOR_CHARS_LENGTH);
	else
	{
		write(2, "use 'BOLD' or 'NOT_BOLD' macroses for second argument\n", 54);
	}
	while (*str)
		write(fd, str++, 1);
	reset_pcolor(fd);
}

void	pwhite(char *str, char is_bold, int fd)
{
	if (is_bold == BOLD)
		write(fd, BOLD_WHITE, COLOR_CHARS_LENGTH);
	else if (is_bold == NOT_BOLD)
		write(fd, WHITE, COLOR_CHARS_LENGTH);
	else
	{
		write(2, "use 'BOLD' or 'NOT_BOLD' macroses for second argument\n", 54);
	}
	while (*str)
		write(fd, str++, 1);
	reset_pcolor(fd);
}

void	pblack(char *str, char is_bold, int fd)
{
	if (is_bold == BOLD)
		write(fd, BOLD_BLACK, COLOR_CHARS_LENGTH);
	else if (is_bold == NOT_BOLD)
		write(fd, BLACK, COLOR_CHARS_LENGTH);
	else
	{
		write(2, "use 'BOLD' or 'NOT_BOLD' macroses for second argument\n", 54);
	}
	while (*str)
		write(fd, str++, 1);
	reset_pcolor(fd);
}

void	reset_pcolor(int fd)
{
	write(fd, RESET_COLOR, RESET_COLOR_LENGTH);
}

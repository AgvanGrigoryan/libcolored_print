/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colored_print.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <aggrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:58:28 by aggrigor          #+#    #+#             */
/*   Updated: 2024/02/29 14:20:22 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLORED_PRINT_H
# define FT_COLORED_PRINT_H

# include <unistd.h>

# define COLOR_CHARS_LENGTH 9
# define RESET_COLOR_LENGTH 5

# define BOLD '1'
# define NOT_BOLD '0'

# define RESET_COLOR "\033[0m"

# define BLACK	"\033[0;030m"
# define RED	"\033[0;031m"
# define GREEN	"\033[0;032m"
# define YELLOW	"\033[0;033m"
# define BLUE	"\033[0;034m"
# define PURPLE	"\033[0;035m"
# define CYAN	"\033[0;036m"
# define WHITE	"\033[0;037m"

# define BOLD_BLACK		"\033[1;030m"
# define BOLD_RED		"\033[1;031m"
# define BOLD_GREEN		"\033[1;032m"
# define BOLD_YELLOW	"\033[1;033m"
# define BOLD_BLUE		"\033[1;034m"
# define BOLD_PURPLE	"\033[1;035m"
# define BOLD_CYAN		"\033[1;036m"
# define BOLD_WHITE		"\033[1;037m"

void	pred(char *str, char is_bold, int fd);
void	pgreen(char *str, char is_bold, int fd);
void	pyellow(char *str, char is_bold, int fd);
void	pblue(char *str, char is_bold, int fd);
void	ppurple(char *str, char is_bold, int fd);
void	pcyan(char *str, char is_bold, int fd);
void	pwhite(char *str, char is_bold, int fd);
void	pblack(char *str, char is_bold, int fd);
void	reset_pcolor(int fd);

#endif
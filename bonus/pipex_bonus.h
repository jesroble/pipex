/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:35:44 by jesroble          #+#    #+#             */
/*   Updated: 2024/06/28 17:38:22 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include "pipex_bonus.h"
# include "../libft/libft.h"
# include "../printf/ft_printf.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/types.h>
# include <sys/wait.h>

# define RED "\x1B[31m"
# define RESET "\x1B[0m"

// main functions
int		main(int argc, char **argv, char **envp);
void	ft_here_doc(char *limiter, int ac);
void	childs(char *av, char **ev);

// utils
int		ft_strcmp(char *str1, char *str2);
char	*find_path(char	*cmd, char **ev);
void	execute(char *av, char **ev);
int		get_next_line(char **line);
int		get_file(char *file, int i);

// error functions
void	error_msg(char *str);
void	error_input(int i);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 20:04:44 by jesroble          #+#    #+#             */
/*   Updated: 2024/06/30 19:11:40 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "pipex.h"
# include "../libft/libft.h"
# include "../printf/ft_printf.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/types.h>
# include <sys/wait.h>

# define RED "\x1B[31m"
# define RESET "\x1B[0m"

typedef struct s_pipex
{
	int		infile;
	int		outfile;
	int		tube[2];
	int		pid1;
	int		pid2;
	char	*path;
	char	**argv_cmd;
	char	**path_cmd;
	char	*cmd;
}	t_pipex;

int		main(int argc, char **argv, char **envp);
void	child_one(t_pipex *pipex, char **argv, char **envp);
void	child_two(t_pipex *pipex, char **argv, char **envp);
void	free_parent(t_pipex *pipex);
void	free_child(t_pipex *pipex);
void	error_msg(char *msg);

#endif

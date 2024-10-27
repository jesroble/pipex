/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   childs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 17:57:55 by jesroble          #+#    #+#             */
/*   Updated: 2024/09/28 21:15:01 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static char	*get_cmd(char **path, char *cmd)
{
	char	*temp;
	char	*command;

	while (path)
	{
		temp = ft_strjoin(*path, "/");
		command = ft_strjoin(temp, cmd);
		free(temp);
		if (access(command, 0) == 0)
			return (command);
		free(command);
		path++;
	}
	return (NULL);
}

void	child_one(t_pipex *pipex, char **argv, char **envp)
{
	dup2(pipex->tube[1], 1);
	close(pipex->tube[0]);
	dup2(pipex->infile, 0);
	pipex->argv_cmd = ft_split(argv[2], ' ');
	pipex->cmd = get_cmd(pipex->path_cmd, pipex->argv_cmd[0]);
	if (!pipex->cmd)
	{
		free_child(pipex);
		error_msg("Command not found");
		exit(EXIT_FAILURE);
	}
	execve(pipex->cmd, pipex->argv_cmd, envp);
}

void	child_two(t_pipex *pipex, char **argv, char **envp)
{
	dup2(pipex->tube[0], 0);
	close(pipex->tube[1]);
	dup2(pipex->outfile, 1);
	pipex->argv_cmd = ft_split(argv[3], ' ');
	pipex->cmd = get_cmd(pipex->path_cmd, pipex->argv_cmd[0]);
	if (!pipex->cmd)
	{
		free_child(pipex);
		error_msg("Command not found");
		exit(EXIT_FAILURE);
	}
	execve(pipex->cmd, pipex->argv_cmd, envp);
}

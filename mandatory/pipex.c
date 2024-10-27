/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 20:03:45 by jesroble          #+#    #+#             */
/*   Updated: 2024/07/05 21:04:40 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static char	*get_path(char **envp)
{
	while (*envp)
	{
		if (ft_strncmp("PATH", *envp, 4) == 0)
		{
			return (*envp + 5);
		}
		envp++;
	}
	return (NULL);
}

static void	close_tube(t_pipex *pipex)
{
	close(pipex->tube[0]);
	close(pipex->tube[1]);
}

static void	ft_assignemetns(t_pipex *pipex, char **argv, char **envp)
{
	pipex->infile = open(argv[1], O_RDONLY);
	if (pipex->infile < 0)
		error_msg("Infile not found");
	pipex->outfile = open(argv[4], O_TRUNC | O_CREAT | O_RDWR, 0000644);
	if (pipex->outfile < 0)
		error_msg("Outfile could not be created");
	if (pipe(pipex->tube) == -1)
		error_msg("Pipe could not be created");
	pipex->path = get_path(envp);
	pipex->path_cmd = ft_split(pipex->path, ':');
}

int	main(int argc, char **argv, char **envp)
{
	t_pipex	*pipex;

	if (argc != 5)
		error_msg("Incorrect number of arguments");
	pipex = malloc(sizeof(t_pipex));
	if (!pipex)
		error_msg("Memory allocation failed");
	ft_assignemetns(pipex, argv, envp);
	pipex->pid1 = fork();
	if (pipex->pid1 == 0)
		child_one(pipex, argv, envp);
	pipex->pid2 = fork();
	if (pipex->pid2 == 0)
		child_two(pipex, argv, envp);
	close_tube(pipex);
	waitpid(pipex->pid1, NULL, 0);
	waitpid(pipex->pid2, NULL, 0);
	free_parent(pipex);
	return (0);
}

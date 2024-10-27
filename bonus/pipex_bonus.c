/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:55:44 by jesroble          #+#    #+#             */
/*   Updated: 2024/06/28 17:47:59 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

void	childs(char *av, char **ev)
{
	int		tube[2];
	pid_t	pid;

	if (pipe(tube) == -1)
		error_msg("pipe could not be created");
	pid = fork();
	if (pid == -1)
		error_msg("pid");
	if (pid == 0)
	{
		close(tube[0]);
		dup2(tube[1], 1);
		execute(av, ev);
	}
	else
	{
		close(tube[1]);
		dup2(tube[0], 0);
		waitpid(pid, NULL, 0);
	}
}

void	ft_here_doc(char *limiter, int ac)
{
	pid_t	pid;
	int		tube[2];
	char	*line;

	if (ac < 6)
		error_input(0);
	if (pipe(tube) == -1)
		error_msg("pipe could not be created");
	pid = fork();
	if (pid == 0)
	{
		close(tube[0]);
		while (get_next_line(&line))
		{
			if (ft_strcmp(line, limiter) == 0)
				exit (EXIT_SUCCESS);
			write(tube[1], line, strlen(line));
		}
	}
	else
	{
		close(tube[1]);
		dup2(tube[0], 0);
		wait(NULL);
	}
}

int	main(int ac, char **av, char **ev)
{
	int		i;
	int		infile;
	int		outfile;

	if (ac >= 5)
	{
		if (ft_strncmp(av[1], "here_doc", 8) == 0)
		{
			outfile = get_file(av[ac - 1], 0);
			ft_here_doc(av[2], ac);
			i = 3;
		}
		else
		{
			outfile = get_file(av[ac - 1], 1);
			infile = get_file(av[1], 2);
			dup2(infile, 0);
			i = 2;
		}
		while (i < ac - 2)
			childs(av[i++], ev);
		dup2(outfile, 1);
		execute(av[ac - 2], ev);
	}
	error_input(2);
}

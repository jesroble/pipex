/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 21:23:43 by jesroble          #+#    #+#             */
/*   Updated: 2024/06/09 17:20:20 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error_msg(char *msg)
{
	ft_printf(RED"Error"RESET": %s", msg);
	exit (EXIT_FAILURE);
}

void	free_parent(t_pipex *pipex)
{
	int	i;

	close(pipex->infile);
	close(pipex->outfile);
	i = 0;
	while (pipex->path_cmd[i])
	{
		free(pipex->path_cmd[i]);
		i++;
	}
	free(pipex->path_cmd);
}

void	free_child(t_pipex *pipex)
{
	int	i;

	i = 0;
	while (pipex->argv_cmd[i])
	{
		free(pipex->argv_cmd[i]);
		i++;
	}
	free(pipex->argv_cmd);
	free(pipex->cmd);
}

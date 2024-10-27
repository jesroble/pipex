/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:56:09 by jesroble          #+#    #+#             */
/*   Updated: 2024/06/28 20:18:08 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

int	ft_strcmp(char *line, char *limiter)
{
	int	i;
	int	j;

	i = ft_strlen(line) - 1;
	if (line[i] == '\n')
		i--;
	j = ft_strlen(limiter) - 1;
	while (i >= 0 && j >= 0)
	{
		if (line[i] != limiter[j])
			return (line[i] - limiter[j]);
		i--;
		j--;
	}
	if (j == -1 && i == -1)
		return (0);
	else
		return (1);
}

char	*find_path(char	*cmd, char **ev)
{
	char	**path;
	char	*path_cmd;
	char	*result;
	int		i;

	i = 0;
	while (ft_strnstr(ev[i], "PATH", 4) == 0)
		i++;
	path = ft_split(ev[i] + 5, ':');
	i = 0;
	while (path[i])
	{
		path_cmd = ft_strjoin(path[i], "/");
		result = ft_strjoin(path_cmd, cmd);
		free(path_cmd);
		if (access(result, 0) == 0)
			return (result);
		free(result);
		i++;
	}
	i = -1;
	while (path[++i])
		free(path[i]);
	free(path);
	return (0);
}

void	execute(char *av, char **ev)
{
	char	**cmd;
	char	*path;
	int		i;

	i = -1;
	cmd = ft_split(av, ' ');
	path = find_path(cmd[0], ev);
	if (!path)
	{
		while (cmd[++i])
			free(cmd[i]);
		free(cmd);
		error_msg("path not found");
	}
	if (execve(path, cmd, ev) == -1)
		error_msg("error execve");
}

int	get_next_line(char **line)
{
	char	c;
	int		i;
	int		r;
	char	*buffer;

	i = 0;
	r = 0;
	buffer = (char *)malloc(10000);
	if (!buffer)
		return (-1);
	r = read(0, &c, 1);
	while (r && c != '\n' && c != '\0')
	{
		if (c != '\n' && c != '\0')
			buffer[i] = c;
		r = read(0, &c, 1);
		i++;
	}
	buffer[i] = '\n';
	buffer[++i] = '\0';
	*line = buffer;
	free(buffer);
	return (r);
}

int	get_file(char *file, int i)
{
	int	result;

	if (i == 0)
	{
		result = open(file, O_WRONLY | O_CREAT | O_APPEND, 0777);
		if (result == -1)
			error_msg("outfile could not be created");
	}
	else if (i == 1)
	{
		result = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0777);
		if (result == -1)
			error_msg("outfile could not be created");
	}
	else if (i == 2)
	{
		result = open(file, O_RDONLY);
		if (result == -1)
			error_msg("infile not found");
	}
	return (result);
}

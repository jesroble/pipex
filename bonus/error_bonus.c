/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:54:41 by jesroble          #+#    #+#             */
/*   Updated: 2024/06/30 17:22:23 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

void	error_msg(char *str)
{
	ft_printf(RED"Error"RESET": %s", str);
	exit (EXIT_FAILURE);
}

void	error_input(int i)
{
	if (i == 0)
		ft_printf("Usage: ./pipex_bonus.c here_doc LIMITER cmd cmd1 outfile");
	else if (i == 1)
		ft_printf("Usage: ./pipex_bonus.c infile cmd1 cmd2 ... cmdn outfile");
	else if (i == 2)
	{
		ft_printf("Usage: ./pipex_bonus.c here_doc LIMITER cmd cmd1 outfile\n");
		ft_printf("Usage: ./pipex_bonus.c infile cmd1 cmd2 ... cmdn outfile");
	}
	exit (EXIT_FAILURE);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:56:57 by anouri            #+#    #+#             */
/*   Updated: 2023/10/02 13:52:29 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(int argc, char *argv[])
{
    char	*line;
	if (argc != 1 || argv[1])
	{
		printf(ERR_ARGS);
		exit(0);
	}
    /*we need to create a copy of the environment*/
    line = NULL;
    minishell_loop(line);
}

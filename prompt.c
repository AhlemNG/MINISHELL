/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:11:34 by anouri            #+#    #+#             */
/*   Updated: 2023/10/02 13:57:29 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	minishell_loop(char *line)
{
	while (1)
	{
		free(line);
		line = readline(PROPMPT_MSG);
        if (!line)
            break; // Exit if the user presses Ctrl+D (EOF)
		printf("your line is %s\n", line);
	}
	free(line);
	return (0);
}

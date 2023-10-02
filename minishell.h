/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:35:04 by anouri            #+#    #+#             */
/*   Updated: 2023/10/02 13:21:46 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <wait.h>
#include <readline/readline.h>
#include <readline/history.h> //check if it is a must for readline

/************************************/
#define PROPMPT_MSG "\033[1;36mminishell\033[34m$ \033[0m"
#define ERR_ARGS "\033[1;31mERROR: Minishell does not accept arguments\033[0m\n"


int	minishell_loop(char *line);



/*envirnment ins chained list*/

// typedef struct s_env
// {
//     char *key;
//     char *value;
//     t_env *next;
// }
// t_env;

#endif
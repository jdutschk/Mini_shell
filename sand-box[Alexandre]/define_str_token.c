/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_str_token.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averon <averon@student.42Mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:07:29 by jdutschk          #+#    #+#             */
/*   Updated: 2022/11/08 18:19:40 by averon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*define_str_token(char *str)
{
	char	*s1;

	s1 = ft_calloc(ft_strlen(str) + 2, 1);
	s1 = ft_strcpy(s1, str);
	if (s1[0] == '<' && s1[1] == '<')
	{
		s1[ft_strlen(s1) + 1] = '\0';
		s1[ft_strlen(s1)] = '3';
	}
	else if (s1[0] == '<')
	{
		s1[ft_strlen(s1) + 1] = '\0';
		s1[ft_strlen(s1)] = '1';
	}
	else if (s1[0] == '"')
	{
		s1[ft_strlen(s1) + 1] = '\0';
		s1[ft_strlen(s1)] = '6';
	}
	free(str);
	return (s1);
}

char	*define_str_token2(char *str)
{
	char	*s1;

	s1 = ft_calloc(ft_strlen(str) + 2, 1);
	s1 = ft_strcpy(s1, str);
	if (s1[0] == '>' && s1[1] == '>')
	{
		s1[ft_strlen(s1) + 1] = '\0';
		s1[ft_strlen(s1)] = '4';
	}
	else if (s1[0] == '>')
	{
		s1[ft_strlen(s1) + 1] = '\0';
		s1[ft_strlen(s1)] = '2';
	}
	else if (s1[0] == '>')
	{
		s1[ft_strlen(s1) + 1] = '\0';
		s1[ft_strlen(s1)] = '2';
	}
	free(str);
	return (s1);
}

char	*define_str_token3(char *str)
{
	char	*s1;

	s1 = ft_calloc(ft_strlen(str) + 2, 1);
	s1 = ft_strcpy(s1, str);
	if (s1[0] == 39)
	{
		s1[ft_strlen(s1) + 1] = '\0';
		s1[ft_strlen(s1)] = '7';
	}
	else if (s1[0] == '$')
	{
		s1[ft_strlen(s1) + 1] = '\0';
		s1[ft_strlen(s1)] = '5';
	}
	else if (s1[0] == '|')
	{
		s1[ft_strlen(s1) + 1] = '\0';
		s1[ft_strlen(s1)] = '8';
	}
	free(str);
	return (s1);
}

char	*define_str_token4(char *str)
{
	char	*s1;

	s1 = ft_strdup(str);
	if (!s1)
		return (NULL);
	if (s1[0] != 39 && s1[0] != '<' && s1[0] != '>' && s1[0] != '"'
		&& s1[0] != '$' && s1[0] != '|')
		s1 = ft_strjoin(s1, "0");
	free(str);
	return (s1);
}

void	change_pipe_in_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '|')
			str[i] = 4;
		i++;
	}
}

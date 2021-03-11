/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_mod.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:22:21 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/14 23:13:42 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit_mod(char *c)
{
	while (*c)
	{
		if ((*c >= '0' && *c <= '9') || *c == ',')
			c++;
		else
			return (0);
	}
	return (1);
}

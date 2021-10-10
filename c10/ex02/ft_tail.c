/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 09:43:06 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/10 18:00:10 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (!ft_strcmp(argv[1], "-c"))
			write_to_stdout_dash_c(argc, argv);
		else
			write_files_to_stdout(argc - 1, argv + 1);
	}
	else
		write_stdin_to_stdout();
}

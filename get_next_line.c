/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:23:31 by ayelasef          #+#    #+#             */
/*   Updated: 2024/11/18 19:38:23 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	found_newline(t_lsit *storage)
{
	int		i;
	t_list	current;

	if (storage == NULL)
		return (0);
	current = ft_lstlast(storage);
	while(current->content[i])
	{
		if (current->content[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

void ft_add_list(t_list **list, char*  buff)
{
	t_lsit	*new_node;
	t_lsit	*last_node;

	last_node = ft_lstlast(*list)
	new_node = ft_lstnew(lst);
	if (!new_node)
		return ;
	if (!last_node)
		*lst = new_node;
	else
		last_node->content = new_node;

	new_node->str_buff = buff;
	new_node->next = NULL;
}

void	ft_read(int fd, t_lsit **list)
{
	char	*buff;
	int		byte_read;

	while (!found_newline(*list) && read_ptr != 0)
	{
		buff = malloc(sizeof(char) * (BUFFER_SIZE + 1))
			if (!buff)
				return ;
		read_ptr = read(fd, buff, BUFFER_SIZE);
		if (!read_ptr)
		{
			free(buff);
			return ;
		}
		buff[read_ptr] = '\0';
		ft_add_list(list, buff);
	}
}

char	*get_next_line(int fd)
{
	static t_list	*storage;
	char			*line;
	int				bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &line, 0) < 0)
		return (NULL);
	bytes_read = 1;
	storage = NULL;
	line = NULL;
	ft_read(fd, &storage);
	if (storage == NULL)
		return (NULL);
	line = get_next(storage);
	return (line);
}

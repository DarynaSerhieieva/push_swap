/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:15:11 by dserhiei          #+#    #+#             */
/*   Updated: 2024/11/06 16:03:49 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <stdbool.h>

// push_swap
int	push_swap(int x);

//utils
int	list_size(char **list);
int	creat_a_list(int *a, char **list, int start_index);
int	check_dublicat(int *a, int size);


#endif

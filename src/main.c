/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorlopezdeaudicana <marvin@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 00:01:38 by aitorlope         #+#    #+#             */
/*   Updated: 2022/06/16 00:01:41 by aitorlope        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/get_next_line.h"
#include <stdio.h> 
#include <fcntl.h> 


int main (void)
{
    int fd;
    char *line;

    //buffer = malloc(30 * sizeof(char));
    fd = open("files/file1.txt", O_RDONLY | O_CREAT);

    line = get_next_line(fd);
    printf("LINEA %s", line); 
    while (line)
    {
        line = get_next_line(fd);
        printf("LINEA %s", line);
        free (line);
    }      
    //read(fd, buffer, 30);
    //printf("FD [%d] - %s",fd, buffer);
}




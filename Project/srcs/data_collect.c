/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_collect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:22:33 by jvermeer          #+#    #+#             */
/*   Updated: 2022/06/10 16:15:16 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

int	create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

static int	get_rgb(char *l)
{
	char	**rgb;
	int		tab[3];

	rgb = ft_split(l, ',');
	tab[0] = ft_atoi(rgb[0]);
	tab[1] = ft_atoi(rgb[1]);
	tab[2] = ft_atoi(rgb[2]);
	free_array(rgb);
	return (create_trgb(0, tab[0], tab[1], tab[2]));
}

static void	get_sprites(t_cube *s, char *l)
{
	char	*tmp;

	if (cmp("NO", l) || cmp("SO", l) || cmp("WE", l) || cmp("EA", l))
	{
		tmp = get_fn(l + 2);
		if (cmp("NO", l))
			s->no = mlx_xpm_file_to_image(s->mlx, tmp, &s->width, &s->height);
		else if (cmp("SO", l))
			s->so = mlx_xpm_file_to_image(s->mlx, tmp, &s->width, &s->height);
		else if (cmp("WE", l))
			s->we = mlx_xpm_file_to_image(s->mlx, tmp, &s->width, &s->height);
		else if (cmp("EA", l))
			s->ea = mlx_xpm_file_to_image(s->mlx, tmp, &s->width, &s->height);
		free(tmp);
	}
	else if (cmp("F", l))
		s->floor = get_rgb(l + 1);
	else if (cmp("C", l))
		s->ceiling = get_rgb(l + 1);
}

int	data_collect(t_cube *s)
{
	int		i;
	int		j;
	int		numb;

	i = 0;
	numb = 0;
	s->mnm_pix = (int)(300 / s->map.w);
	s->dist_project = WIDTH / 2 / tanf(rad(30));
	if (s->map.w < s->map.h)
		s->mnm_pix = (int)(300 / s->map.h);
	while (s->file[i] && numb < 6)
	{
		j = 0;
		while (s->file[i][j] && ft_isspace(s->file[i][j]))
			j++;
		if (s->file[i][j])
			get_sprites(s, &s->file[i][j]);
		i++;
	}
	if (!s->no || !s->so || !s->we || !s->ea)
		return (write_error("Bad texture file\n"));
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:10:40 by jvermeer          #+#    #+#             */
/*   Updated: 2022/06/10 16:41:33 by jvermeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
#define CUB3D_H

// Keyboard Layout specification
#define QWERTY_LAYOUT
// Comment to change into AZERTY mode

#include <math.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "libft.h"
#include "get_next_line.h"
#include <mlx.h>
#include <X11/X.h>
#include <X11/keysym.h>

#ifdef QWERTY_LAYOUT
#define A 97
#define D 100
#define S 115
#define W 119
#endif

#ifndef QWERTY_LAYOUT
#define A 113
#define D 100
#define S 115
#define W 122
#endif

#define WIDTH 1920
#define HEIGHT 1080

// Key code
#define ESC 65307
#define LEFT 65361
#define RIGHT 65363

//	MACRO
#define PI 3.14159265358979323846

//	TYPE DEF
typedef unsigned int t_uint;

typedef struct s_keys
{
	int keyw;
	int keys;
	int keya;
	int keyd;
	int keyl;
	int keyr;
} t_keys;

typedef struct s_point
{
	float x;
	float y;
} t_point;

typedef struct s_dim
{
	int w;
	int h;
} t_dim;

typedef struct s_cube
{
	void *mlx;
	void *win;
	void *img;
	char *addr;
	int bpp;
	int sizeline;
	int endian;
	int width;
	int height;
	int dist_project;
	int mnm_pix;
	char **file;
	char **maps;
	t_dim map;
	void *no;
	void *so;
	void *we;
	void *ea;
	int floor;
	int ceiling;
	int pov;
	int walldir;
	float dist;
	t_point hit;
	t_point pos;
	t_keys k;
} t_cube;

//	PARSING
int check_each_elem(char *l, int *tab, int *count);
int check_elems(t_cube *s);
int check_map(t_cube *s);
int create_map(t_cube *s, int i);
int data_collect(t_cube *s);
int valid_char(t_cube *s);
int parsing(t_cube *s, int ac, char **av);
void get_player_position(t_cube *s);

//	KEY CONTROL
int keypress(int key, t_cube *s);
int keyrelease(int key, t_cube *s);
void keys_effects(t_cube *s);

//	UTILS
int cmp(char *str, char *l);
int write_error(char *message);
char *get_fn(char *l);
void free_all(t_cube *s);
void free_array(char **str);
int create_trgb(int t, int r, int g, int b);

//	TRIGONOMETRY
float rad(float degree);
float modulo_2pi(float deg);
float ft_0_to_90(t_cube *s, float radian, t_point pos);
float ft_90_to_180(t_cube *s, float radian, t_point pos);
float ft_180_to_270(t_cube *s, float radian, t_point pos);
float ft_270_to_360(t_cube *s, float radian, t_point pos);

//	DISPLAY
void draw_minimap(t_cube *s);
void my_mlx_pixel_put(t_cube *s, int x, int y, int color);
void balayage(t_cube *s, float deg);

#endif

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

void	fill(char **tab, t_point size, t_point point, char f_chr)
{
	if (point.x < 0 || point.x >= size.x || point.y < 0 || point.y >= size.y 
		|| tab[point.y][point.x] != f_chr)
		return ;
	tab[point.y][point.x] = 'F';
	fill(tab, size, (t_point){point.x - 1, point.y}, f_chr);
	fill(tab, size, (t_point){point.x, point.y - 1}, f_chr);
	fill(tab, size, (t_point){point.x, point.y + 1}, f_chr);
	fill(tab, size, (t_point){point.x + 1, point.y}, f_chr);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
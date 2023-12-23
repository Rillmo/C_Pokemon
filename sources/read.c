#include "../includes/pokemon.h"

// read map to array
void	read_map(t_game *game)
{
	char	*buff;
	char	*line;
	int		fd;

	fd = open("maps/starting_map.ber", O_RDONLY);
	buff = get_next_line(fd);
	game->width = ft_strlen(buff) - 1;
	line = "";
	while (buff != NULL)
	{
		game->height++;
		line = ft_strjoin(line, buff);
		buff = get_next_line(fd);
	}
	game->map = ft_split(line, '\n');
	// for (int i=0; i<game->height; i++)
	// {
	// 	printf("%d\t|", i);
	// 	for (int j=0; j<game->width; j++)
	// 		printf("%c", game->map[i][j]);
	// 	printf("\n");
	// }
	// check_map(game);
}
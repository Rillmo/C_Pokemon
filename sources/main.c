#include "../includes/pokemon.h"

void	set_game(t_game *game)
{
	game->width = 0;
	game->height = 0;
	game->map = 0;
}

int main(void)
{
	t_game	game;

	set_game(&game);
	game.mlx = mlx_init();
	set_images(&game);
	read_map(&game);
	game.win = mlx_new_window(game.mlx, \
	game.width * TILE_SIZE, game.height * TILE_SIZE, "pokemon");
	put_images(&game);
	mlx_loop(game.mlx);
}
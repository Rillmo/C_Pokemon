#include "../includes/pokemon.h"

t_game	game;

int main(void)
{
 	game.mlx = mlx_init();
	mlx_new_window(game.mlx, 200, 200, "test");
}
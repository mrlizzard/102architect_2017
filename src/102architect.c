/*
** EPITECH PROJECT, 2017
** 102architect
** File description:
** 102architect functions
*/

# include "my.h"
# include "utils.h"
# include "102architect.h"

void do_translation(char **av, int offset, double *res, double *matrice)
{
	check_err(av[offset + 1]);
	check_err(av[affset + 2]);
	calc_translation(res, matrice, av, offset);
}

void do_homothety(char **av, int offset, double *res, double *matrice)
{

}

void do_rotation(char **av, int offset, double *res, double *matrice)
{

}

void do_symetry(char **av, int offset, double *res, double *matrice)
{
	
}

double *check_option(double *res, double *matrice, char **av, int ac)
{
	int offset = 1;

	while (offset < ac) {
		if (check_flag(av[offset], 't')) {
			if ((offset + 2) <= ac) {
				do_translation(av, offset, &res[0], &matrice[0]);
			} else {
				my_puterr("After -t/-h option, you must enter two numbers.\n");
				exit(84);
			}
		}
	}

	return (res);
}
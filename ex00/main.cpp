/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:32:48 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/02 12:01:01 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
   ClapTrap claptrap("karim");

	claptrap.attack("Enemy1");
	claptrap.takeDamage(5);
	claptrap.beRepaired(80);
	claptrap.beRepaired(3);
	claptrap.attack("Enemy2");
	claptrap.takeDamage(12);

    return 0;
}
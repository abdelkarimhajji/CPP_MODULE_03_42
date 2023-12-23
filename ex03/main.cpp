/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:32:48 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/23 10:48:04 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    // Create a ClapTrap instance
    DiamondTrap DiamondTrap("CL4P-TP");

    // Test attack, takeDamage, and beRepaired functions
    DiamondTrap.attack("Enemy1");
    DiamondTrap.takeDamage(3);
    DiamondTrap.beRepaired(2);
    DiamondTrap.attack("Enemy2");

    return 0;
}
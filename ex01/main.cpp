/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:32:48 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/19 12:57:57 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


int main(void)
{
    ClapTrap clapTrap("CL4P-TP22222");

    clapTrap.attack("Enemy1");
    clapTrap.takeDamage(3);
    clapTrap.beRepaired(2);
    clapTrap.attack("Enemy2");

    std::cout << "\n";
    ScavTrap slapTrap("CL4P-TP");

    slapTrap.attack("Enemy1");
    slapTrap.takeDamage(3);
    slapTrap.beRepaired(2);
    slapTrap.attack("Enemy2");
    slapTrap.guardGate();

    return 0;
}
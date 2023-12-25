/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:32:48 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/25 12:29:54 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


int main(void)
{
    // ClapTrap clapTrap("CLTP22222");

    // clapTrap.attack("enemy1");
    // clapTrap.takeDamage(3);
    // clapTrap.beRepaired(2);
    // clapTrap.attack("enemy2");

    // std::cout << "\n";
    ScavTrap slapTrap("CL4");
    std::cout << "iiii\n";
    ScavTrap slapTrap3(slapTrap);
    // slapTrap3.attack("enemy1");
    // ClapTrap clapTrap("CL4");
    // clapTrap.attack("f");
    // slapTrap.takeDamage(3);
    // slapTrap.beRepaired(2);
    // slapTrap.attack("enemy2");
    // slapTrap.guardGate();
    
    // std::cout << "\n";
    // ScavTrap p(slapTrap);
    // p.attack("enemy1");
    // p.takeDamage(3);
    return 0;
}
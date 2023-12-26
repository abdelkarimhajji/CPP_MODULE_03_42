/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:32:48 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/25 14:14:10 by ahajji           ###   ########.fr       */
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
    ClapTrap clapTrap2("test");
    std::cout << "hi\n";
    ClapTrap clapTrap3(clapTrap2);
    
    // ScavTrap slapTrap("CL4");
    // ScavTrap slapTrap3(slapTrap);
    // slapTrap3.attack("enemy1");
    
    return 0;
}
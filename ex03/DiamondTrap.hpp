/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:38:24 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/26 12:24:51 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMON_TRAP
#define DIAMON_TRAP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap& operator=(const DiamondTrap &copy);
        void    whoAmI();
};

#endif
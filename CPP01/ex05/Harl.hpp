/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:12:29 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/14 12:16:51 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl{
    private:

    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    public:
    Harl();
    ~Harl();

    void complain(std::string level);
    
};

#endif
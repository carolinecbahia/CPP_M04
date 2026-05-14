/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 14:19:08 by ccavalca          #+#    #+#             */
/*   Updated: 2026/05/09 16:21:44 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include "Animal.hpp"

class Brain {
    private:
	std::string ideas[100];

	public:
	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	virtual ~Brain();

	void setIdeas(int Index, const std::string& idea);
	std::string getIdeas(int Index) const;
};

#endif
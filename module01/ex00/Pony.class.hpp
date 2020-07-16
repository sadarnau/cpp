/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:48:54 by sam               #+#    #+#             */
/*   Updated: 2020/07/16 17:20:04 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_H
# define PONY_CLASS_H

# include <iostream>
# include <string>

class Pony
{
private:
	std::string name;

public:
    void    dance();
    void    run();

	Pony(std::string const name);
	~Pony();
};

#endif
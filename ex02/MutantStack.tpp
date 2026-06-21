/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 23:13:40 by zsonie            #+#    #+#             */
/*   Updated: 2026/06/21 21:06:25 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

template <typename T>
class MutantStack: public std::stack<T>
{
public:
    MutantStack(){}
    MutantStack(const MutantStack &other): std::stack<T>(other){}
    MutantStack &operator=(const MutantStack &other){
        std::stack<T>::operator=(other);
        return(*this);
    }
    ~MutantStack(){}
    
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    
    iterator begin(){
        return this->c.begin();
    }
    iterator end(){
        return this->c.end();
    }
	const_iterator cbegin(){
        return this->c.cbegin();
    }
    const_iterator cend(){
        return this->c.cend();
    }
};

#endif
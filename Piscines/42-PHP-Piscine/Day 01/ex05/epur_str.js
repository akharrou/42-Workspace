/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.js                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 01:41:29 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/27 08:26:10 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

var word = process.argv[2]

console.log(word.trim().split(/\s+/).join(' '))
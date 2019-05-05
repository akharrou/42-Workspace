/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:08:13 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/04 19:31:03 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIGINT_H
# define BIGINT_H

typedef char* t_bigint;

void		normalize_bigint(t_bigint *op_1, t_bigint *op_2);
t_bigint	arithmetic_dispatcher(char operation,
				t_bigint operand_1, t_bigint operand_2, char *base);

t_bigint	bigint_addfre(t_bigint operand_1, t_bigint operand_2, char *base,
				int free_op);
t_bigint	bigint_subfre(t_bigint operand_1, t_bigint operand_2, char *base,
				int free_op);
t_bigint	bigint_mulfre(t_bigint num, char *base, int multiplier,
				int free_num);
t_bigint	bigint_divfre(t_bigint num, char *base, int divider,
				int free_num);
t_bigint	bigint_roundfre(t_bigint num, char *base, int precision,
				int free_num);

t_bigint	bigint_add(t_bigint operand_1, t_bigint operand_2, t_bigint base);
t_bigint	bigint_sub(t_bigint operand_1, t_bigint operand_2, t_bigint base);
t_bigint	bigint_mul(t_bigint num, char *base, int multiplier);
t_bigint	bigint_div(t_bigint num, char *base, int divider);
t_bigint	bigint_round(t_bigint num, char *base, int precision);

#endif

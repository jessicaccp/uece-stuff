#	if ((i == j) || (i == k)) {
#		i++;
#		j = i & j;
#	}
# 	else
#		i--;
#	j = i + k;

# $s0 = i / $s1 = j / $s2 = k

		beq $s0, $s1, IF		# se i == j, já entra no if
		bne $s0, $s2, ELSE		# se i != k, não entra no if e pula pro else
IF:		addi $s0, $s0, 1		# i = i + 1
		and $s1, $s0, $s1		# j = i & j
		j NEXT					# pula para depois do else
ELSE:	addi $s0, $s0, -1		# i = i + (-1)
NEXT:	add $s1, $s0, $s2		# j = i + k

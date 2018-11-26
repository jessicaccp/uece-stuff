# B[8] = A[i] + A[B[8]];

# $s0 = A / $s1 = B / $s2 = i

sll $s2, $s2, 2			# i = i*4
add $t0, $s0, $s2		# t0 = A+i (aritmética de ponteiro)
lw $t1, 0($t0)			# t1 = A[i]

lw $t2, 32($s1)			# t2 = B[8]
sll $t2, $t2, 2			# t2 = B[8]*4
add $t3, $s0, $t2		# t3 = A+t2 (aritmética de ponteiro)
lw $t4, 0($t3)			# t4 = A[B[8]]

add $t1, $t1, $t4		# t1 = A[i] + A[B[8]]
sw $t1, 32($s1)			# B[8] = A[i] + A[B[8]]

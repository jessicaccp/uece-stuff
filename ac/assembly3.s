# void f1(int A,B){ A[12] = g - A[B[4]];}
# void f2(){if (i==j)||(i==k){	i++; j = i&j;} else i--; j = i + k;}
# void main() {f1; while (save[i] == k) i += 1; f2; }

# $s0 = A / $s1 = B / $s2 = g
# $s3 = i / $s4 = j / $s5 = k
# $s6 = save

f1:
		lw $t0, 16($s1)		# t0 = B[4]
		sll $t0, $t0, 2		# t0 = B[4] * 4
		add $t0, $t0, $s0	# t0 = A + t0 (aritmética de ponteiro)
		lw $t1, 0($t0)		# t1 = A[B[4]]
		sub $t1, $s2, $t1	# t1 = g - A[B[4]]
		sw $t1, 48($s0)		# A[12] = g - A[B[4]]
		jr $ra				# volta para o endereço de chamada + 4
		
f2:
		beq $s3, $s4, IF	# se i == j, pula para o if. se não, testa a segunda igualdade
		bne $s3, $s5, ELSE	# se i != k, pula para o else. se não, continua para o if
IF:		addi $s3, $s3, 1	# i = i + 1
		and $s4, $s3, $s4	# j = i & j
		j NEXT				# pula para não executar o else
ELSE:	addi $s3, $s3, -1	# i = i - 1
NEXT:	add $s4, $s3, $s5	# j = i + k
		jr $ra				# volta para o endereço de chamada + 4
		
main:
		jal f1				# vai para a função f1
WHILE:	sll $t0, $s3, 2		# t0 = i * 4
		add $t0, $s6, $t0	# t0 = A + t0 (aritmética de ponteiro)
		lw $t1, 0($t0)		# t1 = save[i]
		bne $t1, $s5, FIM	# se save[i] != k, sai do while. se não, continua
		addi $s3, $s3, 1	# i = i + 1
		j WHILE				# volta para o começo do while
FIM:	jal f2				# vai para a função f2

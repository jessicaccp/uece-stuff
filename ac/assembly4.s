#	void main(int a, int b) {
#		int soma = 0;
#		int i;
#		
#		for (i = 0; i < a; i++)
#			soma = soma + b;
#	}

# $s0 = a / $s1 = b
# $s2 = soma / $s3 = i

		add $s2, $zero, $zero		# soma = 0
		add $s3, $zero, $zero		# i = 0
FOR:	bge $s3, $s0, END			# se i >= a, termina o for
		add $s2, $s2, $s1			# soma = soma + b
		addi $s3, $s3, 1			# i = i + 1
		j FOR						# volta para o começo do for
END:

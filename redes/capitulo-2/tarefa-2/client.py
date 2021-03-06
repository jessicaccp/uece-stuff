#UDPPingerClient.py

import socket
from random import randint
from socket import *
from time import time

with socket(AF_INET, SOCK_DGRAM) as s:
	# Conecta o socket ao endereço dado pelo ip e porta
	s.connect(('', 12000))
	
	# Determina tempo de vida do pacote
	s.settimeout(1)

	# 10 mensagens
	for i in range(1, 11):
		rand = randint(1, 10)
		
		try:
			# Envia pacote
			clientMessage = str(i).encode()
			st = time() # tempo ao enviar
			
			# Simula a perda do pacote
			if rand > 4:
				s.send(clientMessage)
			
			# Recebe resposta do servidor
			serverMessage = s.recv(1024).decode()
			rt = time() # tempo ao receber resposta
			
			print("RTT = {}".format(rt-st))
			
		except Exception as e:
			print(e)

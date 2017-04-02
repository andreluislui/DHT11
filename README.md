# DHT11
Projeto de monitoramento de umidade e temperatura de ambientes utilizando o sensor SHT11. 
Os valores do sensor DHT11 são obtidos por meio de um Arduino UNO e disponibilizados na porta USB. Esses valores são obtidos pelo Raspberry Pi 3 e lançados para visualização no ThingSpeak na conta 'andrelui' no canal 'DHT11 - Lui'.

Foi adicionado o comando abaixo para executar o código projetoserial.py após o usuário ser logado no arquivo /etc/profile.
Comando: sudo python /home/pi/projetoserial.py &

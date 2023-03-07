# Seguidor de linha

![1](https://github.com/luissssmartins/ura-line-follower/blob/master/line-follower.jpg)

## Entendendo o funcionamento do robô

Consiste na detecção dos sensores se há ou não uma linha presente no meio de ambos, caso não haja o robô irá parar de andar imediatamente.

## Configuração dos pinos referentes ao Arduino

### Ponte H

| Ponte H L9110  | Arduino UNO |
| --------------- | --------------- | 
| B-1A | 9 (Arduino Shield) |
| B-1B | 8 (Arduino Shield) |
| G  | GND  | 
| VCC | Vin (5v) | 
| A-1A | 11 (Arduino Shield) | 
| A-1B | 10 (Arduino Shield) |

### Sensores de linha 

| Sensor de Linha Esquerdo | Arduino UNO |
| --------------- | --------------- | 
| G  | GND  | 
| V+ | 3.3v | 
| S  | 5 (Arduino Shield) | 


| Sensor de Linha Direito | Arduino UNO |
| --------------- | --------------- | 
| G  | GND  | 
| V+ | 3.3v | 
| S  | 4 (Arduino Shield) |

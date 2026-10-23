# Detector de passagem

**Alunos:** Eliezer Velasquez e Pablo Ricardo.

## Nome do curso:

**Análise e desenvolvimento de sistemas, 4ª fase.**

## Unidade Curricular:

**Desenvolvimento para sistemas embarcados.**


## Peças utilizadas

1. Placa Arduino Uno.
2. Placa de ensaio (protoboard).
3. Piezo (buzzer).
4. Resistor.
5. Cabos jumper macho-macho.
6. Cabos jumper macho-femea.
7. LDR.
8. Laser.

## Explicação do projeto

O projeto utiliza um sensor LDR para identificar a intensidade da luz no ambiente e um piezo para emitir um alerta sonoro quando a luminosidade estiver abaixo de um determinado valor.

O sensor LDR está conectado ao pino analógico A0 do Arduino, enquanto o piezo está conectado ao pino digital 7. O Arduino realiza a leitura do sensor e verifica se o valor é inferior a 550. Caso essa condição seja atendida, o piezo emite um som de 500 Hz durante 127 milissegundos. Além disso, os valores medidos são exibidos no Monitor Serial, permitindo acompanhar as mudanças na luminosidade.
'
O objetivo do projeto é demonstrar como o Arduino pode utilizar sensores para identificar condições do ambiente e acionar um dispositivo de saída automaticamente, funcionando como um sistema simples de alerta para ambientes com pouca luz.

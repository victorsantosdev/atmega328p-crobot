/*
 * ultrasom_stepper.h
 *
 *  Created on: Jan 4, 2014
 *      Author: victor
 */

#ifndef ULTRASOM_STEPPER_H_
#define ULTRASOM_STEPPER_H_

#define STEPPER_DDR                     DDRB
#define STEPPER_PIN                     PINB
#define STEPPER_PORT                    PORTB
#define STEPPER_DIRECTION               PB4		//pino arduino:12  pino_atmega:PB4 //cinza/verde //roxo é gnd
#define STEPPER_STEP                    PB5		//pino arduino:13  pino_atmega:PB5 //branco/amarelo
#define FIM_DE_CURSO_DDR                DDRB
#define FIM_DE_CURSO_PIN                PINB
#define FIM_DE_CURSO_PORT               PORTB
#define FIM_DE_CURSO		            PB3 	//pino arduino:11  pino_atmega:PB3 	   //laranja/branco

void rotate(int steps, float speed);
int sonar_rotate(int steps, float speed);
void rotateDeg(float deg, float speed);
int read_switches(void);
void set_stepper_zero(void); //seta motor para posição inicial
void stepper_sweep(void); //faz a varredura do sonar
#endif /* ULTRASOM_STEPPER_H_ */

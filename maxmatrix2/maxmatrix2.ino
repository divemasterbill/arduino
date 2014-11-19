/* MaxMatrix2
 * Version 0.1 OCT 2013
 * Copyright 2013 Nikolai Neff
 * based upon MaxMatrix by Oscar Kin-Chung Au
 *
 * Tested with Arduino 1.0.5 and 1.5.4 on Arduino Uno Rev3
 *
 * This file is part of MaxMatrix2
 *
 * MaxMatrix2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MaxMatrix2 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with MaxMatrix2.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <MaxMatrix2.h>
/* #include <avr/pgmspace.h>

const prog_uchar CH[] PROGMEM = {
3, B00000000, B00000000, B00000000, B00000000, B00000000, // space
1, B01011111, B00000000, B00000000, B00000000, B00000000, // !
3, B00000011, B00000000, B00000011, B00000000, B00000000, // "
5, B00010100, B00111110, B00010100, B00111110, B00010100, // #
4, B00100100, B01101010, B00101011, B00010010, B00000000, // $
5, B01100011, B00010011, B00001000, B01100100, B01100011, // %
5, B00110110, B01001001, B01010110, B00100000, B01010000, // &
1, B00000011, B00000000, B00000000, B00000000, B00000000, // '
3, B00011100, B00100010, B01000001, B00000000, B00000000, // (
3, B01000001, B00100010, B00011100, B00000000, B00000000, // )
5, B00101000, B00011000, B00001110, B00011000, B00101000, // *
5, B00001000, B00001000, B00111110, B00001000, B00001000, // +
2, B10110000, B01110000, B00000000, B00000000, B00000000, // ,
4, B00001000, B00001000, B00001000, B00001000, B00000000, // -
2, B01100000, B01100000, B00000000, B00000000, B00000000, // .
4, B01100000, B00011000, B00000110, B00000001, B00000000, // /
4, B00111110, B01000001, B01000001, B00111110, B00000000, // 0
3, B01000010, B01111111, B01000000, B00000000, B00000000, // 1
4, B01100010, B01010001, B01001001, B01000110, B00000000, // 2
4, B00100010, B01000001, B01001001, B00110110, B00000000, // 3
4, B00011000, B00010100, B00010010, B01111111, B00000000, // 4
4, B00100111, B01000101, B01000101, B00111001, B00000000, // 5
4, B00111110, B01001001, B01001001, B00110000, B00000000, // 6
4, B01100001, B00010001, B00001001, B00000111, B00000000, // 7
4, B00110110, B01001001, B01001001, B00110110, B00000000, // 8
4, B00000110, B01001001, B01001001, B00111110, B00000000, // 9
2, B01010000, B00000000, B00000000, B00000000, B00000000, // :
2, B10000000, B01010000, B00000000, B00000000, B00000000, // ;
3, B00010000, B00101000, B01000100, B00000000, B00000000, // <
3, B00010100, B00010100, B00010100, B00000000, B00000000, // =
3, B01000100, B00101000, B00010000, B00000000, B00000000, // >
4, B00000010, B01011001, B00001001, B00000110, B00000000, // ?
5, B00111110, B01001001, B01010101, B01011101, B00001110, // @
4, B01111110, B00010001, B00010001, B01111110, B00000000, // A
4, B01111111, B01001001, B01001001, B00110110, B00000000, // B
4, B00111110, B01000001, B01000001, B00100010, B00000000, // C
4, B01111111, B01000001, B01000001, B00111110, B00000000, // D
4, B01111111, B01001001, B01001001, B01000001, B00000000, // E
4, B01111111, B00001001, B00001001, B00000001, B00000000, // F
4, B00111110, B01000001, B01001001, B01111010, B00000000, // G
4, B01111111, B00001000, B00001000, B01111111, B00000000, // H
3, B01000001, B01111111, B01000001, B00000000, B00000000, // I
4, B00110000, B01000000, B01000001, B00111111, B00000000, // J
4, B01111111, B00001000, B00010100, B01100011, B00000000, // K
4, B01111111, B01000000, B01000000, B01000000, B00000000, // L
5, B01111111, B00000010, B00001100, B00000010, B01111111, // M
5, B01111111, B00000100, B00001000, B00010000, B01111111, // N
4, B00111110, B01000001, B01000001, B00111110, B00000000, // O
4, B01111111, B00001001, B00001001, B00000110, B00000000, // P
4, B00111110, B01000001, B01000001, B10111110, B00000000, // Q
4, B01111111, B00001001, B00001001, B01110110, B00000000, // R
4, B01000110, B01001001, B01001001, B00110010, B00000000, // S
5, B00000001, B00000001, B01111111, B00000001, B00000001, // T
4, B00111111, B01000000, B01000000, B00111111, B00000000, // U
5, B00001111, B00110000, B01000000, B00110000, B00001111, // V
5, B00111111, B01000000, B00111000, B01000000, B00111111, // W
5, B01100011, B00010100, B00001000, B00010100, B01100011, // X
5, B00000111, B00001000, B01110000, B00001000, B00000111, // Y
4, B01100001, B01010001, B01001001, B01000111, B00000000, // Z
2, B01111111, B01000001, B00000000, B00000000, B00000000, // [
4, B00000001, B00000110, B00011000, B01100000, B00000000, // backslash
2, B01000001, B01111111, B00000000, B00000000, B00000000, // ]
3, B00000010, B00000001, B00000010, B00000000, B00000000, // ^
4, B01000000, B01000000, B01000000, B01000000, B00000000, // _
2, B00000001, B00000010, B00000000, B00000000, B00000000, // `
4, B00100000, B01010100, B01010100, B01111000, B00000000, // a
4, B01111111, B01000100, B01000100, B00111000, B00000000, // b
4, B00111000, B01000100, B01000100, B00101000, B00000000, // c
4, B00111000, B01000100, B01000100, B01111111, B00000000, // d
4, B00111000, B01010100, B01010100, B00011000, B00000000, // e
3, B00000100, B01111110, B00000101, B00000000, B00000000, // f
4, B10011000, B10100100, B10100100, B01111000, B00000000, // g
4, B01111111, B00000100, B00000100, B01111000, B00000000, // h
3, B01000100, B01111101, B01000000, B00000000, B00000000, // i
4, B01000000, B10000000, B10000100, B01111101, B00000000, // j
4, B01111111, B00010000, B00101000, B01000100, B00000000, // k
3, B01000001, B01111111, B01000000, B00000000, B00000000, // l
5, B01111100, B00000100, B01111100, B00000100, B01111000, // m
4, B01111100, B00000100, B00000100, B01111000, B00000000, // n
4, B00111000, B01000100, B01000100, B00111000, B00000000, // o
4, B11111100, B00100100, B00100100, B00011000, B00000000, // p
4, B00011000, B00100100, B00100100, B11111100, B00000000, // q
4, B01111100, B00001000, B00000100, B00000100, B00000000, // r
4, B01001000, B01010100, B01010100, B00100100, B00000000, // s
3, B00000100, B00111111, B01000100, B00000000, B00000000, // t
4, B00111100, B01000000, B01000000, B01111100, B00000000, // u
5, B00011100, B00100000, B01000000, B00100000, B00011100, // v
5, B00111100, B01000000, B00111100, B01000000, B00111100, // w
5, B01000100, B00101000, B00010000, B00101000, B01000100, // x
4, B10011100, B10100000, B10100000, B01111100, B00000000, // y
3, B01100100, B01010100, B01001100, B00000000, B00000000, // z
3, B00001000, B00110110, B01000001, B00000000, B00000000, // {
1, B01111111, B00000000, B00000000, B00000000, B00000000, // |
3, B01000001, B00110110, B00001000, B00000000, B00000000, // }
4, B00001000, B00000100, B00001000, B00000100, B00000000, // ~
}; */



const byte dataIn = 12;
const byte load = 10;
const byte clock = 11;
const byte maxInUse = 2; //number of adressed displays

MaxMatrix2 m(dataIn, load, clock, maxInUse);


void setup()
{
	m.init(0x07, 0x00, 0x00, false); //scanlimit, decodeMode, intensity, displayTest
}

void loop()
{
	/* byte zeichen[matrixSize] = {0, 0, 0, 0, 0, 0, 0, 0};

	for (byte a=0; a<95; a++)
	{
		memcpy_P(zeichen, CH + 6*a, 6);
		zeichen[0] = 0;
		m.sendArray(0, zeichen);
		delay(1000);
	} */


	for (byte display=0; display<8; display++)
	{
		for (byte i=0; i<matrixSize; i++) //Line flashing across the Matrix on Display 0
		{
			m.sendCommand(display,i+1,0xFF);
			if(i>0)
			{
				m.sendCommand(display,i,0x00);
			} else {
				m.sendCommand(display,matrixSize,0x00);
			}

			delay (100);
		}

		for (byte n=0; n<matrixSize; n++)
		{
			for (byte i=0; i<matrixSize; i++)
			{
				m.sendCommand(display,i+1,1<<n);
			}
			delay (100);
		}
	}
	delay(1000);
	m.clearAll();
	delay(1000);

}
/*
 * font_diagonal_ccw.h
 *
 */

/**********************************************************************************

Description:		PixBlock character font

Author:				Frank Andre
Copyright 2015:		Frank Andre
License:			see "license.md"
Disclaimer:			This software is provided by the copyright holder "as is" and any 
					express or implied warranties, including, but not limited to, the 
					implied warranties of merchantability and fitness for a particular 
					purpose are disclaimed. In no event shall the copyright owner or 
					contributors be liable for any direct, indirect, incidental, 
					special, exemplary, or consequential damages (including, but not 
					limited to, procurement of substitute goods or services; loss of 
					use, data, or profits; or business interruption) however caused 
					and on any theory of liability, whether in contract, strict 
					liability, or tort (including negligence or otherwise) arising 
					in any way out of the use of this software, even if advised of 
					the possibility of such damage.
					
**********************************************************************************/

#ifndef FONT_DIAGONAL_CCW_H
#define FONT_DIAGONAL_CCW_H


#define CHAR_BASE_DIAGONAL_CCW	32		// character code of first character


// character pixel data
// first byte = character width (must be >= 1)

FLASHDATA diagonal_ccw_chr_032[] = {0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};	// space
FLASHDATA diagonal_ccw_chr_033[] = {0x08, 0x01, 0x06, 0x3E, 0x24, 0x24, 0x7C, 0x60, 0x80};	// !
FLASHDATA diagonal_ccw_chr_034[] = {0x08, 0x00, 0x1C, 0x22, 0x42, 0x42, 0x44, 0x38, 0x00};	// "
FLASHDATA diagonal_ccw_chr_035[] = {0x08, 0x08, 0x04, 0x0A, 0x10, 0x20, 0x70, 0x00, 0x00};	// #
FLASHDATA diagonal_ccw_chr_036[] = {0x08, 0x08, 0x04, 0x22, 0x51, 0x4E, 0x40, 0x20, 0x10};	// $
FLASHDATA diagonal_ccw_chr_037[] = {0x08, 0x00, 0x0C, 0x12, 0x31, 0x48, 0x40, 0x20, 0x10};	// %
FLASHDATA diagonal_ccw_chr_038[] = {0x08, 0x00, 0x04, 0x28, 0x10, 0x28, 0x44, 0x08, 0x10};	// &
FLASHDATA diagonal_ccw_chr_039[] = {0x08, 0x00, 0x1C, 0x22, 0x22, 0x90, 0x48, 0x28, 0x10};	// '
FLASHDATA diagonal_ccw_chr_040[] = {0x08, 0x00, 0x1C, 0x22, 0x22, 0x92, 0x4C, 0x38, 0x00};	// (
FLASHDATA diagonal_ccw_chr_041[] = {0x08, 0x00, 0x04, 0x08, 0x70, 0x80, 0x40, 0x20, 0x10};	// )
FLASHDATA diagonal_ccw_chr_042[] = {0x08, 0x00, 0x1C, 0x12, 0x72, 0x4E, 0x48, 0x38, 0x00};	// *
FLASHDATA diagonal_ccw_chr_043[] = {0x08, 0x00, 0x1C, 0x22, 0x52, 0x48, 0x48, 0x38, 0x00};	// +
FLASHDATA diagonal_ccw_chr_044[] = {0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0x20, 0x40, 0x80};	// ,
FLASHDATA diagonal_ccw_chr_045[] = {0x08, 0x80, 0xC0, 0xE0, 0xF0, 0xF0, 0xE0, 0xC0, 0x80};	// -
FLASHDATA diagonal_ccw_chr_046[] = {0x08, 0xFF, 0xFE, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80};	// .
FLASHDATA diagonal_ccw_chr_047[] = {0x08, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xC3, 0x81};	// /
FLASHDATA diagonal_ccw_chr_048[] = {0x08, 0x00, 0x1C, 0x22, 0x42, 0x42, 0x44, 0x38, 0x00};	// 0
FLASHDATA diagonal_ccw_chr_049[] = {0x08, 0x00, 0x00, 0x0E, 0x04, 0x08, 0x50, 0x20, 0x10};	// 1
FLASHDATA diagonal_ccw_chr_050[] = {0x08, 0x08, 0x04, 0x02, 0x72, 0x8A, 0x44, 0x20, 0x10};	// 2
FLASHDATA diagonal_ccw_chr_051[] = {0x08, 0x08, 0x04, 0x02, 0x12, 0x8C, 0x48, 0x30, 0x00};	// 3
FLASHDATA diagonal_ccw_chr_052[] = {0x08, 0x08, 0x10, 0x22, 0x14, 0x08, 0x14, 0x20, 0x00};	// 4
FLASHDATA diagonal_ccw_chr_053[] = {0x08, 0x08, 0x14, 0x12, 0x09, 0x44, 0x44, 0x38, 0x00};	// 5
FLASHDATA diagonal_ccw_chr_054[] = {0x08, 0x00, 0x1C, 0x32, 0x49, 0x44, 0x44, 0x38, 0x00};	// 6
FLASHDATA diagonal_ccw_chr_055[] = {0x08, 0x08, 0x04, 0x02, 0x01, 0x0E, 0x10, 0x20, 0x00};	// 7
FLASHDATA diagonal_ccw_chr_056[] = {0x08, 0x00, 0x1C, 0x12, 0x72, 0x4E, 0x48, 0x38, 0x00};	// 8
FLASHDATA diagonal_ccw_chr_057[] = {0x08, 0x00, 0x1C, 0x12, 0x12, 0x4A, 0x44, 0x38, 0x00};	// 9
FLASHDATA diagonal_ccw_chr_058[] = {0x08, 0x01, 0x02, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00};	// :
FLASHDATA diagonal_ccw_chr_059[] = {0x08, 0x01, 0x03, 0x07, 0x0F, 0x0F, 0x07, 0x03, 0x01};	// ;
FLASHDATA diagonal_ccw_chr_060[] = {0x08, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF};	// <
FLASHDATA diagonal_ccw_chr_061[] = {0x08, 0x81, 0xC3, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};	// =
FLASHDATA diagonal_ccw_chr_062[] = {0x08, 0x04, 0x0A, 0x09, 0x0E, 0x70, 0x90, 0x50, 0x20};	// >
FLASHDATA diagonal_ccw_chr_063[] = {0x08, 0x20, 0x50, 0x90, 0x70, 0x0E, 0x09, 0x0A, 0x04};	// ?
FLASHDATA diagonal_ccw_chr_064[] = {0x08, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00};	// @
FLASHDATA diagonal_ccw_chr_065[] = {0x08, 0x99, 0x81, 0x00, 0x00, 0x81, 0x81, 0x00, 0x66};	// A
FLASHDATA diagonal_ccw_chr_066[] = {0x08, 0xCC, 0x01, 0x01, 0x80, 0x80, 0x01, 0x01, 0xCC};	// B
FLASHDATA diagonal_ccw_chr_067[] = {0x08, 0x66, 0x00, 0x81, 0x81, 0x00, 0x00, 0x81, 0x99};	// C
FLASHDATA diagonal_ccw_chr_068[] = {0x08, 0x33, 0x80, 0x80, 0x01, 0x01, 0x80, 0x80, 0x33};	// D



FLASHDATA* const font_diagonal_ccw[] = {
	diagonal_ccw_chr_032, diagonal_ccw_chr_033, diagonal_ccw_chr_034, diagonal_ccw_chr_035,
	diagonal_ccw_chr_036, diagonal_ccw_chr_037, diagonal_ccw_chr_038, diagonal_ccw_chr_039,
	diagonal_ccw_chr_040, diagonal_ccw_chr_041, diagonal_ccw_chr_042, diagonal_ccw_chr_043,
	diagonal_ccw_chr_044, diagonal_ccw_chr_045, diagonal_ccw_chr_046, diagonal_ccw_chr_047,
	diagonal_ccw_chr_048, diagonal_ccw_chr_049, diagonal_ccw_chr_050, diagonal_ccw_chr_051,
	diagonal_ccw_chr_052, diagonal_ccw_chr_053, diagonal_ccw_chr_054, diagonal_ccw_chr_055,
	diagonal_ccw_chr_056, diagonal_ccw_chr_057, diagonal_ccw_chr_058, diagonal_ccw_chr_059,
	diagonal_ccw_chr_060, diagonal_ccw_chr_061, diagonal_ccw_chr_062, diagonal_ccw_chr_063,
	diagonal_ccw_chr_064, diagonal_ccw_chr_065, diagonal_ccw_chr_066, diagonal_ccw_chr_067,
	diagonal_ccw_chr_068
};


#endif /* FONT_DIAGONAL_CCW_H*/

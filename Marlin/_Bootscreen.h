/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

// #define CUSTOM_BOOTSCREEN_TIMEOUT 2500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128

const unsigned char custom_start_bmp[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x03,0x00,0x00,0x00,0x00, // ........................................................................#.....................##................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xC0,0x00,0x3F,0x00,0x00,0x00,0x00, // ...................................................................#######................######................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xC0,0x07,0xFF,0x00,0x00,0x00,0x00, // ..............................................................############...........###########................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xC0,0x7F,0xFF,0x00,0x00,0x00,0x00, // ..........................................................################.......###############................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xCF,0xFF,0xFF,0x00,0x00,0x00,0x00, // .....................................................#####################..####################................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // .................................................###############################################................................
  0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ............................................####################################################................................
  0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ........................................########################################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############################################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############################################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############################################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############################################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############################################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############################################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############################################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############################################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFE,0x0E,0x7F,0x00,0x00,0x00,0x00, // ....................................###########################################.....###..#######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x7F,0x00,0x00,0x00,0x00, // ....................................########################################.............#######................................
  0x00,0x00,0x00,0x00,0x0F,0xFE,0x0F,0xFF,0xFF,0xC0,0x00,0x3F,0x00,0x00,0x00,0x00, // ....................................###########.....######################................######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x07,0xFF,0xFF,0x81,0xF0,0x3F,0x00,0x00,0x00,0x00, // ....................................############.....####################......#####......######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFF,0x07,0xFC,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....###################.....#########....######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFF,0x0F,0xFE,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....###################....###########...######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFE,0x1F,0xFE,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....##################....############...######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFE,0x1F,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................#############....##################....#####################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFE,0x1F,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................#############....##################....#####################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFC,0x3F,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................#############....#################....######################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFC,0x3F,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................#############....#################....######################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFC,0x3F,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................#############....#################....######################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFC,0x3F,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................#############....#################....######################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFC,0x3F,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................#############....#################....######################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFC,0x3F,0xF8,0x7F,0x00,0x00,0x00,0x00, // ....................................#############....#################....###########....#######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFC,0x3F,0xF8,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....#################....###########.....######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFC,0x3F,0xFC,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....#################....############....######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFC,0x3F,0xFC,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....#################....############....######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFC,0x3F,0xFC,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....#################....############....######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFE,0x1F,0xFC,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....##################....###########....######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFE,0x1F,0xFC,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....##################....###########....######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFE,0x0F,0xFC,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....##################.....##########....######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFF,0x0F,0xFC,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....###################....##########....######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFF,0x03,0xF0,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....###################......######......######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFF,0x80,0x00,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....####################.................######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFF,0xC0,0x00,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....#####################................######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x87,0xFF,0xFF,0xF0,0x0E,0x3F,0x00,0x00,0x00,0x00, // ....................................#############....#######################........###...######................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x8F,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................#############...############################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x8F,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................#############...############################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x8F,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................#############...############################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############...#############################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############...#############################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############..##############################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................###########...##############################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFE,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................###########..###############################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############################################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############################################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############################################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############################################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00, // ....................................############################################################................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00, // ....................................#########################################################...................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00, // ....................................#####################################################.......................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00, // ....................................################################################............................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x9F,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00, // ....................................#####################..####################.................................................
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xF0,0x1F,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00, // ....................................################.......################.....................................................
  0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....................................###########............###########..........................................................
  0x00,0x00,0x00,0x00,0x0F,0xE0,0x00,0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....................................#######................#######..............................................................
  0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00  // ....................................##.....................##...................................................................
};
/* XMRig
 * Copyright 2010      Jeff Garzik <jgarzik@pobox.com>
 * Copyright 2012-2014 pooler      <pooler@litecoinpool.org>
 * Copyright 2014      Lucas Jones <https://github.com/lucasjones>
 * Copyright 2014-2016 Wolf9466    <https://github.com/OhGodAPet>
 * Copyright 2016      Jay D Dee   <jayddee246@gmail.com>
 * Copyright 2017-2018 XMR-Stak    <https://github.com/fireice-uk>, <https://github.com/psychocrypt>
 * Copyright 2018      Lee Clagett <https://github.com/vtnerd>
 * Copyright 2016-2018 XMRig       <https://github.com/xmrig>, <support@xmrig.com>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __CRYPTONIGHT_TEST_H__
#define __CRYPTONIGHT_TEST_H__


const static uint8_t test_input[76] = {
    0x01, 0x00, 0xFB, 0x8E, 0x8A, 0xC8, 0x05, 0x89, 0x93, 0x23, 0x37, 0x1B, 0xB7, 0x90, 0xDB, 0x19,
    0x21, 0x8A, 0xFD, 0x8D, 0xB8, 0xE3, 0x75, 0x5D, 0x8B, 0x90, 0xF3, 0x9B, 0x3D, 0x55, 0x06, 0xA9,
    0xAB, 0xCE, 0x4F, 0xA9, 0x12, 0x24, 0x45, 0x00, 0x00, 0x00, 0x00, 0xEE, 0x81, 0x46, 0xD4, 0x9F,
    0xA9, 0x3E, 0xE7, 0x24, 0xDE, 0xB5, 0x7D, 0x12, 0xCB, 0xC6, 0xC6, 0xF3, 0xB9, 0x24, 0xD9, 0x46,
    0x12, 0x7C, 0x7A, 0x97, 0x41, 0x8F, 0x93, 0x48, 0x82, 0x8F, 0x0F, 0x02
};


const static uint8_t test_output_v0[32] = {
    0x1B, 0x60, 0x6A, 0x3F, 0x4A, 0x07, 0xD6, 0x48, 0x9A, 0x1B, 0xCD, 0x07, 0x69, 0x7B, 0xD1, 0x66,
    0x96, 0xB6, 0x1C, 0x8A, 0xE9, 0x82, 0xF6, 0x1A, 0x90, 0x16, 0x0F, 0x4E, 0x52, 0x82, 0x8A, 0x7F
};


// Monero v7
const static uint8_t test_output_v1[32] = {
    0xC9, 0xFA, 0xE8, 0x42, 0x5D, 0x86, 0x88, 0xDC, 0x23, 0x6B, 0xCD, 0xBC, 0x42, 0xFD, 0xB4, 0x2D,
    0x37, 0x6C, 0x6E, 0xC1, 0x90, 0x50, 0x1A, 0xA8, 0x4B, 0x04, 0xA4, 0xB4, 0xCF, 0x1E, 0xE1, 0x22
};


#ifndef XMRIG_NO_AEON
const static uint8_t test_output_v0_lite[32] = {
    0x28, 0xA2, 0x2B, 0xAD, 0x3F, 0x93, 0xD1, 0x40, 0x8F, 0xCA, 0x47, 0x2E, 0xB5, 0xAD, 0x1C, 0xBE,
    0x75, 0xF2, 0x1D, 0x05, 0x3C, 0x8C, 0xE5, 0xB3, 0xAF, 0x10, 0x5A, 0x57, 0x71, 0x3E, 0x21, 0xDD
};


// AEON v2
const static uint8_t test_output_v1_lite[32] = {
    0x87, 0xC4, 0xE5, 0x70, 0x65, 0x3E, 0xB4, 0xC2, 0xB4, 0x2B, 0x7A, 0x0D, 0x54, 0x65, 0x59, 0x45,
    0x2D, 0xFA, 0xB5, 0x73, 0xB8, 0x2E, 0xC5, 0x2F, 0x15, 0x2B, 0x7F, 0xF9, 0x8E, 0x79, 0x44, 0x6F
};
#endif


#ifndef XMRIG_NO_SUMO
const static uint8_t test_output_heavy[32] = {
    0x4D, 0x94, 0x7D, 0xD6, 0xDB, 0x6E, 0x07, 0x48, 0x26, 0x4A, 0x51, 0x2E, 0xAC, 0xF3, 0x25, 0x4A,
    0x1F, 0x1A, 0xA2, 0x5B, 0xFC, 0x0A, 0xAD, 0x82, 0xDE, 0xA8, 0x99, 0x96, 0x88, 0x52, 0xD2, 0x7D
};
#endif


#endif /* __CRYPTONIGHT_TEST_H__ */

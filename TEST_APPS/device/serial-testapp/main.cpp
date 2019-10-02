/*
 * Copyright (c) 2019 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "mbed.h"

Serial pc(USBTX, USBRX);

#define ASCII_SPACE 0x20
#define ASCII_TILDE 0x7f

int main() {

    int c = ASCII_SPACE;

    while(1) {
        c++;
        pc.printf("%c", c);

        if (c == ASCII_TILDE) {
            c = ASCII_SPACE;
            printf("\n");
            pc.fsync();
        }
    }
}

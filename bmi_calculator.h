// --------------------------------------------------
// -*- C -*- Compatibility Header
//
// Copyright (C) 2023 Developer Jarvis (Pen Name)
//
// This file is part of the [Project Name] Library. This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
//
// SPDX-License-Identifier: GPL-3.0-or-later
//
// bmi_calculator - Input height/weight - calculate BMI and category
//
// Author: Developer Jarvis (Pen Name)
// Contact: https://github.com/DeveloperJarvis
//
// --------------------------------------------------

#ifndef BMI_CALCULATOR_H
#define BMI_CALCULATOR_H
// --------------------------------------------------
// forward function declarations/ prototypes
// --------------------------------------------------
void display_help(const char *s);
void display_version(const char *s);

void bmi();
static void clear_input_buffer();
float user_input(int flag);
float bmi_calculate(float weight_in_kg, float height_in_mtr);
int bmi_categorize(float bmi_value);
void display_output(float bmi_value, int bmi_category);
#endif

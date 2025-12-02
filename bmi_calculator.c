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

// --------------------------------------------------
// header files
// --------------------------------------------------
#include <stdio.h>  // for printf(), scanf()
#include <string.h> // for strcmp()

#include "bmi_calculator.h"

// --------------------------------------------------
// main function
// --------------------------------------------------
int main(int argc, char *argv[])
{
    if (argc == 2 && (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0))
        display_help(argv[0]);
    else if (argc == 2 && (strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0))
        display_version(argv[0]);
    else if (argc == 1)
        bmi();
    else
    {
        printf("Invalid Input\n");
        display_help(argv[0]);
    }
    return 0;
}
// --------------------------------------------------
// helper functions
// --------------------------------------------------
void display_help(const char *s)
{
    printf("Usage: %s [options]\n", s);
    printf(" -h --help \t Display help\n");
    printf(" -v --version \t Display version\n");
}

void display_version(const char *s)
{
    printf("%s version: 1.0.0\n", s);
}

// --------------------------------------------------
// bmi calculation, categorization, input and output
// --------------------------------------------------
void bmi()
{
    float weight_in_kg = user_input(0);
    float height_in_mtr = user_input(1);
    if (height_in_mtr != 0.0) // Cannot have divide by zero when calculing BMI
    {
        float bmi_value = bmi_calculate(weight_in_kg, height_in_mtr);
        int bmi_category = bmi_categorize(bmi_value);
        display_output(bmi_value, bmi_category);
    }
    else
    {
        printf("Some error occurred.\n");
    }
}

static void clear_input_buffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ; // Clear input buffer
}

float user_input(int flag)
{
    float value;
    while (1)
    {
        if (flag == 0)
            printf("Enter your weight (in KG): ");
        else if (flag == 1)
            printf("Enter your height (in meters): ");
        if (scanf("%f", &value) != 1)
        {
            printf("Non decimal value. Please enter valid weight\n");
            clear_input_buffer();
            continue;
        }
        if (value <= 0)
        {
            printf("Input cannot be negative or zero. Please enter a positive value\n");
            clear_input_buffer();
            continue;
        }
        else
            break;
    }
    clear_input_buffer();
    return value;
}

// Calculate bmi when weight(KG) and height(meters) is provided
float bmi_calculate(float weight_in_kg, float height_in_mtr)
{
    return (weight_in_kg / (height_in_mtr * height_in_mtr));
}

// Categorize bmi based on bmi_value calculated
int bmi_categorize(float bmi_value)
{
    int bmi_category = 0; // Initialized as 0
    if (bmi_value < 18.5)
        bmi_category = 1; // Underweight
    else if (bmi_value >= 18.5 && bmi_value <= 24.9)
        bmi_category = 2; // Normal weight
    else if (bmi_value > 24.9 && bmi_value <= 29.9)
        bmi_category = 3; // Overweight
    else if (bmi_value > 29.9)
        bmi_category = 4; // Obesity
    return bmi_category;
}

// Display bmi value and bmi category
void display_output(float bmi_value, int bmi_category)
{
    printf("Your bmi value is calculated based on your inputs: %.2f", bmi_value);
    printf("\n");
    switch (bmi_category)
    {
    case 1:
    {
        printf("You have been categorized as Underweight.\n");
        printf("Recommendation: Please work with certified dietitian to increase your weight.\n");
        break;
    }
    case 2:
    {
        printf("You have been categorized as Normal Weight.\n");
        printf("Recommendation: Keep up good work. Stay healthy\n");
        break;
    }
    case 3:
    {
        printf("You have been categorized as Overweight.\n");
        printf("Recommendation: You need to increase your daily exercise\n");
        break;
    }
    case 4:
    {
        printf("You have been categorized as Obese.\n");
        printf("Recommendation: You need to work on strict deit and exercise regim\n");
        break;
    }
    default:
    {
        printf("Some error occurred while displaying your bmi category\n");
    }
    }
}

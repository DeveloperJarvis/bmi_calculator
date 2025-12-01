# BMI Calculator

This project provides a simple program to calculate **Body Mass Index (BMI)** based on user input for height and weight. It then categorizes the BMI value into one of four categories: **Underweight**, **Normal weight**, **Overweight**, or **Obesity**. The program is implemented in C and provides a basic example of how to handle user input, perform mathematical calculations, and categorize the result.

## Features

- **User Input**: Accepts height (in meters) and weight (in kilograms) from the user.
- **BMI Calculation**: Calculates the BMI using the formula:

  ```
  BMI = weight / (height * height)
  ```

- **BMI Categorization**: Categorizes the BMI into one of the following:

  - **Underweight**: BMI < 18.5
  - **Normal weight**: 18.5 ≤ BMI < 24.9
  - **Overweight**: 25 ≤ BMI < 29.9
  - **Obesity**: BMI ≥ 30

- **Result Display**: Displays the calculated BMI value (rounded to two decimal places) and the corresponding category.

## Requirements

- A C compiler (e.g., `gcc` or `clang`).
- Basic knowledge of C programming and understanding of the BMI formula.
- The program runs in a terminal or command-line environment.

### Dependencies

- **C Standard Library**: For input/output and mathematical functions (`stdio.h`, `math.h`).
- **No external dependencies** are required.

## Setup and Compilation

1. **Clone the repository**:

   ```bash
   git clone https://github.com/DeveloperJarvis/bmi_calculator.git
   cd bmi_calculator
   ```

2. **Compile the program**:
   Using `gcc` (GNU Compiler Collection) to compile the program:

   ```bash
   gcc -o bmi_calculator bmi_calculator.c -lm
   ```

   The `-lm` flag is used to link the math library for mathematical functions like `sqrt()` or `pow()` if needed.

3. **Run the program**:
   After compiling, run the program:

   ```bash
   ./bmi_calculator
   ```

4. **Input**:

   - The program will prompt you to enter your weight (in kilograms) and height (in meters).
   - Example inputs:

     - Weight: `70.5`
     - Height: `1.75`

   The program will calculate your BMI and display the result along with the BMI category.

## Example Usage

When you run the program, it will prompt you for your height and weight:

```bash
Enter your weight (in kg): 70.5
Enter your height (in meters): 1.75

Your BMI: 23.0
BMI Category: Normal weight
```

### BMI Calculation

The BMI is calculated using the formula:

```
BMI = weight / (height * height)
```

For example, with a weight of `70.5` kg and a height of `1.75` meters:

```
BMI = 70.5 / (1.75 * 1.75) = 23.0
```

### BMI Categories:

- **Underweight**: BMI < 18.5
- **Normal weight**: 18.5 ≤ BMI < 24.9
- **Overweight**: 25 ≤ BMI < 29.9
- **Obesity**: BMI ≥ 30

---

## Error Handling

- **Invalid Inputs**: If the user inputs a non-numeric value, or a value less than or equal to zero for weight or height, the program will display an error message and prompt the user to enter the correct values.
- **Zero or Negative Height**: The program ensures the height is positive and not zero. If zero or negative is entered for height, the program will exit with an error message.

## Code Structure

1. **Main Function**: Handles user input and initiates the BMI calculation.
2. **BMI Calculation Function**: Performs the BMI formula computation.
3. **Categorization Function**: Categorizes the BMI into one of the four predefined categories.
4. **Input Validation**: Ensures that the inputs for weight and height are positive and valid.
5. **Output**: Displays the final BMI value and its corresponding category to the user.

## License

This project is licensed under the **GNU General Public License v3.0** (GPL-3.0-or-later).

You should have received a copy of the GNU General Public License along with this program. If not, see [https://www.gnu.org/licenses/](https://www.gnu.org/licenses/).

---

## Author

- **Developer Jarvis (Pen Name)**
- Contact: [https://github.com/DeveloperJarvis](https://github.com/DeveloperJarvis)

---

### Contributing

If you would like to contribute to the project, feel free to fork the repository, submit pull requests, or open issues for bugs or enhancements.

## Creating tag

```bash
# 1. Check existing tags
git tag
# 2. Create a valid tag
git tag -a v1.0.0 -m "Release version 1.0.0"
# or lightweight tag
git tag v1.0.0
# push tag to remote
git push origin v1.0.0
```

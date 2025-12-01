### Low-Level Design (LLD) of BMI Calculator in C

#### 1. **Overview**

The **BMI Calculator** program allows users to input their weight and height, calculates their Body Mass Index (BMI), and categorizes it based on predefined BMI ranges (e.g., Underweight, Normal weight, Overweight, Obesity). The application should accept input from the user, compute the BMI, and display the result along with the BMI category.

---

#### 2. **System Requirements**

- **Input**:

  - Weight (in kilograms, `float` type).
  - Height (in meters, `float` type).

- **Output**:

  - BMI value (calculated to two decimal places).
  - BMI category (e.g., "Underweight", "Normal weight", "Overweight", "Obesity").

---

#### 3. **Functional Modules**

##### 3.1 **User Input Handling**

- **Purpose**: Collect the weight and height from the user.
- **Details**:

  - Use `scanf()` or `fgets()` to read input values.
  - Validate that inputs are positive numbers (non-zero and non-negative).
  - Handle input errors and provide prompts for valid input if incorrect data is entered.

##### 3.2 **BMI Calculation**

- **Purpose**: Calculate the BMI using the standard formula:

  ```
  BMI = weight (kg) / (height (m) * height (m))
  ```

- **Details**:

  - Perform the BMI calculation based on the user-provided values of weight and height.
  - Ensure the formula is applied correctly with the right data types (`float` for both weight and height).
  - Round the calculated BMI to two decimal places for display.

##### 3.3 **BMI Categorization**

- **Purpose**: Based on the calculated BMI value, categorize the result into predefined categories.
- **Details**: The following BMI categories can be used:

  - **Underweight**: BMI < 18.5
  - **Normal weight**: 18.5 ≤ BMI < 24.9
  - **Overweight**: 25 ≤ BMI < 29.9
  - **Obesity**: BMI ≥ 30

- **Implementation**:

  - Use `if-else` or `switch` statements to check the BMI value and print the appropriate category.

##### 3.4 **Output Display**

- **Purpose**: Display the calculated BMI and corresponding category to the user.
- **Details**:

  - Output the BMI value rounded to two decimal places.
  - Output the BMI category based on the calculated value.
  - Provide a clear and user-friendly message.

##### 3.5 **Input Validation**

- **Purpose**: Ensure valid inputs for weight and height.
- **Details**:

  - Check that weight is a positive non-zero value.
  - Ensure height is positive and not zero (e.g., zero height should raise an error).
  - Handle invalid or non-numeric inputs gracefully (e.g., using error flags or checking the result of `scanf()`).

---

#### 4. **Data Flow**

1. **User Input**:

   - The user is prompted to enter their weight (in kg) and height (in meters).

2. **Validation**:

   - Check if the input is valid (positive values, numeric).

3. **BMI Calculation**:

   - Use the formula `BMI = weight / (height * height)` to compute the BMI.

4. **Categorization**:

   - Based on the BMI value, categorize the result into one of the four categories: Underweight, Normal weight, Overweight, Obesity.

5. **Output Display**:

   - Display the BMI value with two decimal precision and print the corresponding category.

---

#### 5. **Interaction Diagram**

- **Step 1**: User is prompted to input weight and height.
- **Step 2**: Input is validated to ensure positive, numeric values.
- **Step 3**: The BMI formula is applied to calculate the BMI.
- **Step 4**: The BMI is compared to predefined ranges to determine the category.
- **Step 5**: The BMI value and category are displayed to the user.
- **Step 6**: Optionally, prompt for another calculation or exit.

---

#### 6. **Function Breakdown**

##### 6.1 **Main Function**

- **Purpose**: The entry point of the program where user input is gathered and processed.
- **Details**:

  - Prompt the user for input (weight and height).
  - Call the BMI calculation and categorization functions.
  - Display the results.

##### 6.2 **BMI Calculation Function**

- **Purpose**: Takes weight and height as inputs and returns the calculated BMI.
- **Parameters**:

  - `weight` (float) — The user's weight in kilograms.
  - `height` (float) — The user's height in meters.

- **Return**: Returns a float value representing the calculated BMI.

##### 6.3 **Categorization Function**

- **Purpose**: Takes the calculated BMI and returns a string representing the BMI category.
- **Parameters**:

  - `bmi` (float) — The calculated BMI.

- **Return**: Returns a string representing the BMI category.

##### 6.4 **Input Validation Function**

- **Purpose**: Ensures that user input for weight and height are valid (positive and non-zero).
- **Parameters**:

  - `value` (float) — A value to validate.

- **Return**: Returns `true` if the value is valid, `false` otherwise.

##### 6.5 **Display Function**

- **Purpose**: Displays the calculated BMI and the corresponding category.
- **Parameters**:

  - `bmi` (float) — The calculated BMI.
  - `category` (string) — The BMI category (e.g., "Normal weight").

- **Return**: No return, outputs to the console.

---

#### 7. **Error Handling**

- If the user inputs invalid data (e.g., negative weight or height, non-numeric values):

  - Prompt the user again for correct input.

- If division by zero occurs (i.e., zero height), handle the error gracefully and display an appropriate message to the user.

---

#### 8. **Example Flow**

1. **Input**:

   - The user is asked to enter their weight (e.g., `70.5` kg) and height (e.g., `1.75` meters).

2. **Validation**:

   - The input values are validated to ensure they are positive and non-zero.

3. **BMI Calculation**:

   - The program calculates the BMI using the formula:

     ```
     BMI = 70.5 / (1.75 * 1.75) = 23.0
     ```

4. **Categorization**:

   - Since `23.0` falls in the "Normal weight" range, the program categorizes the BMI as "Normal weight."

5. **Output**:

   - The program displays:

     ```
     Your BMI: 23.0
     BMI Category: Normal weight
     ```

---

#### 9. **Assumptions**

- The user provides valid numerical input.
- The user inputs weight in kilograms and height in meters.
- The BMI will be computed for one person at a time.

#### 10. **Limitations**

- The program assumes that height is not zero or negative. If it is, the program should display an error.
- It handles only a single calculation at a time (no support for batch processing).
- Only basic error handling is included.

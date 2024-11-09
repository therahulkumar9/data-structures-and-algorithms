/*
 * Approach to Find Duplicate Characters Using Bit Manipulation:
 *
 * 1. Bit Representation:
 *    - Use a single integer to represent the presence of characters.
 *    - Each bit in the integer corresponds to a character from 'a' to 'z'.
 *    - The least significant bit (LSB) represents 'a', the next bit represents 'b',
 *      and so forth up to 'z'.
 *
 * 2. Set Bits:
 *    - Iterate through each character in the string.
 *    - For each character, calculate its corresponding bit index (e.g., 'a' -> 0, 'b' -> 1).
 *    - Check if the bit at this index is already set in the integer:
 *      - If it is set, this indicates that the character is a duplicate.
 *      - If it is not set, set the bit to indicate that the character has been seen.
 *
 * 3. Output Duplicates:
 *    - Whenever a duplicate character is detected, print it immediately.
 *
 * This method efficiently tracks character occurrences using bitwise operations,
 * allowing for constant space usage and linear time complexity relative to the
 * length of the string.
 */
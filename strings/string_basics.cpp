/*
 * A string is a sequence of characters. The following facts make string an interesting data structure:
 *
 * 1. Small set of elements: Unlike normal arrays where we can have larger values, strings typically have 
 *    a smaller set of items. For example, the lowercase English alphabet has only 26 characters, 
 *    and ASCII has only 256 characters.
 *
 * 2. Mutability: Strings are immutable in programming languages like Java, Python, JavaScript, and C#. 
 *    In C++, strings are mutable, and other languages also provide mechanisms to support mutable strings.
 *
 * 3. Optimization opportunities: Many string problems can be optimized using the fact that the character 
 *    set size is small. For example, sorting can be done faster, counting frequencies of items is faster, 
 *    and many other interesting interview questions are based on this.
 */

#ifndef _TKTL_ARRAY_
#define _TKTL_ARRAY_

/**
 * @brief A dynamic array of bits.
 * A BitArray is a dynamic array of bits that can be resized and accessed randomly.
 * It is implemented as a struct with three fields:
 * @storage: a pointer to a block of memory where the bits are stored
 * @maxCapacity: the maximum capacity of the BitArray, in bits
 * @currentCapacity: the current number of bits stored in the BitArray
 * @lastElement: the last element by index that is stored in the BitArray
 */
struct BitArray
{
    unsigned char * storage;
    unsigned int maxCapacity;
    unsigned int currentCapacity;
    unsigned int lastElement;
};


/**
 * @brief Returns the value of the bit at the specified position in the BitArray.
 * @param self The BitArray instance.
 * @param position The zero-based index of the bit to retrieve.
 * @return The value of the bit at the specified position. Returns 1 if the bit is set, -1 if the index is out of bounds, or 0 if the bit is clear.
 */
int BitArrayAt(const struct BitArray * self, unsigned int position);


/**
 * @brief Sets the value of the bit at the specified position in the BitArray.
 * @param self The BitArray instance.
 * @param position The zero-based index of the bit to set.
 * @param value The value of the bit to set. If value is 1, the bit is set; if value is 0, the bit is cleared.
 * @return Returns 0 on success, or -1 on failure.
 */
int BitArraySet(const struct BitArray * self, unsigned int position, int value);


/**
 * @brief Inserts a bit at the specified end position in the BitArray.
 * @param self The BitArray instance.
 * @param value The value of the bit to insert. If value is 1, the bit is set; if value is 0, the bit is cleared.
 */
void BitArrayPushBack(struct BitArray * self, int value);


/**
 * @brief Resizes the BitArray to the specified capacity.
 * @param self The BitArray instance.
 * @param newCapacity The new capacity of the BitArray, in bits.
 */
void BitArrayResize(struct BitArray * self, unsigned int newCapacity);


/**
 * @brief Shrinks the capacity of the BitArray in a way that it keeps all element but does not use any extra memory.
 * @param self The BitArray instance.
 */
void BitArrayShrink(struct BitArray * self);


#endif // _TKTL_ARRAY_
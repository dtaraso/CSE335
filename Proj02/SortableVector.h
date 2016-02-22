/* 
 * File:   SortableVector.h
 * Author: Dasha
 *
 * Created on February 2, 2016, 1:58 PM
 */

#ifndef SORTABLEVECTOR_H
#define	SORTABLEVECTOR_H

class SortableVector {
public:
    virtual unsigned int getSize() const = 0;
    virtual bool smaller(int i, int j) const = 0;
    virtual void swap(int i, int j) = 0;
};

#endif	/* SORTABLEVECTOR_H */


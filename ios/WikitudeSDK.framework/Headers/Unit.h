//
//  Unit.h
//  CommonLibrary
//
//  Created by Andreas Schacherbauer on 14/09/14.
//  Copyright (c) 2014 Wikitude. All rights reserved.
//

#ifndef __CommonLibrary__Unit__
#define __CommonLibrary__Unit__

#ifdef __cplusplus

<<<<<<< HEAD
=======
#include "CompilerAttributes.hpp"


>>>>>>> 7a80d517418492d323a2b0529e1da11bec307318
namespace wikitude { namespace sdk {
    
    namespace impl {
        
        
        template <typename T>
<<<<<<< HEAD
        class Unit {
=======
        class WT_EXPORT_API Unit {
>>>>>>> 7a80d517418492d323a2b0529e1da11bec307318
            
        public:
            class Millimeter;
            
            
        public:
            
            Unit() : _value(0) {};
            Unit(T value) : _value(value) {};
            virtual ~Unit() {};
            
            virtual bool isValid() const {
                return false;
            };
            
            virtual T getValue() const {
                return _value;
            };
            
            
            template <typename T_RHS>
            Unit<T>& operator = ( const Unit<T_RHS>& rhsUnit) {
            
                this->_value = rhsUnit._value;
                return *this;
            }
            
            Unit<T>& operator = (T const & value) {
                
                this->_value = value;
                return *this;
            }

            
        protected:
            
            T _value;
        };
        
        template <typename T>
<<<<<<< HEAD
        class Unit<T>::Millimeter : public Unit<T> {
=======
        class WT_EXPORT_API Unit<T>::Millimeter : public Unit<T> {
>>>>>>> 7a80d517418492d323a2b0529e1da11bec307318
        
        public:
            Millimeter() : Unit<T>(0) {};
            Millimeter(T value) : Unit<T>(value) {};
            virtual ~Millimeter() {};
        };
    }
    using impl::Unit;
    using Millimeter = Unit<int>::Millimeter;
}}

#endif /* __cplusplus */

#endif /* defined(__CommonLibrary__Unit__) */

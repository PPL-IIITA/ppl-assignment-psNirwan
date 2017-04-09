#ifndef LUXURY_H
#define	LUXURY_H
#include "gift.h"
class LuxuryGift : public gift /*! \brief class LuxuryGift.
 *        
 *
 *  class that has various data members that deals with the luxury type gifts of the couples
 */ {
	public :
		/** the luxury rating of the gift */  
		int rating;
		/** the difficulty to obtain the gift */
		int dificultty;		
};

#endif

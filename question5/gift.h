#ifndef GIFT_H
#define	GIFT_H
class gift /*! \brief class gifts.
 *        
 *
 *  class that has various data members and functions that deals with the gifts of the couples
 */ {
	private :
		/** to store the pice of the gift  */	
		int price;
		/** the value of the gift  */	
		int value;
		/** the type of the gift: 1-essential 2-luxury 3-utility  */		
		int type;
	public :
		/** setter function for price */ 
		void setPrice(int);
		/** setter function for value */
		void setValue(int);
		/** setter function for type */
		void setType(int);
		/** getter function for price */
		int getPrice();
		/** getter function for value */
		int getValue();
		/** getter function for type */
		int getType();
};
#endif

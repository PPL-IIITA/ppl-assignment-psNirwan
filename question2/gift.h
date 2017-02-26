#ifndef GIFT_H
#define	GIFT_H
class gift {
	private :
		int price;
		int value;	
		int type;
	public :
		void setPrice(int);
		void setValue(int);
		void setType(int);
		
		int getPrice();
		int getValue();
		int getType();
};
#endif

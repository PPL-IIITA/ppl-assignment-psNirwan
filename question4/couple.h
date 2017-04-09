#ifndef COUPLE_H
#define COUPLE_H

class couple {
	private :
		int  happiness;
		int  comp;
		char gname[20];
		char bname[20];
	public :
		void setHappiness(int);
		void setComp(int);
		void setGname(char[]);
		void setBname(char[]);
		
		int  getHappiness();
		int  getComp();
		char *getGname();
		char *getBname();
};

#endif

#ifndef BOY_H
#define BOY_H

class boy {
	private :	
		char name[20];
		int attractiveness;
		int intelligence;
		int budget;
		int minattr;
		int committed;
		int type;
	public :
		void  setName(char[]);
		void  setAttractiveness(int);
		void  setIntelligence(int);
		void  setBudget(int);
		void  setCommitted(int);
		void  setMinattr(int);
		void  setType(int);

		char* getName();
		int   getAttractiveness();
		int   getIntelligence();
		int   getBudget();
		int   getMinattr();
		int   isCommitted();
		int   getType();
};

#endif

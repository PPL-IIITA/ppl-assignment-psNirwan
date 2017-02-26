#ifndef GIRL_H
#define GIRL_H

class girl {
	private :
		char name[20];
		int attractiveness;
		int maintenance;
		int intelligence;
		int criteria;
		int committed;
		int type;
	public :
		void  setName(char[]);
		void  setAttractiveness(int);
		void  setMaintenance(int);
		void  setIntelligence(int);
		void  setCriteria(int);
		void  setCommitted(int);
		void  setType(int);

		char* getName();
		int  getAttractiveness();
		int  getMaintenance();
		int  getIntelligence();
		int  getCriteria();
		int  isCommitted();
		int  getType();
};

#endif

#ifndef GIRL_H
#define GIRL_H

class girl /*! \brief class girl
 *        
 *
 *  class to define various attributes of girls
 */ {
	private :
		/** name of the girl */
		char name[20];
		/** attractiveness of the girl  */
		int attractiveness;
		/** maintainance budget of the girl*/
		int maintenance;
		/** intelligence of the girl */
		int intelligence;
		/** criteria of the girl to choose bf: 1-most attractive 2-most rich 3-most intelligent */
		int criteria;
		/** status of the girl: 0-single 1-committed */
		int committed;
		/** type of the girl: 1-choosy 2-normal 3-desperate */
		int type;
	public :
		/** setter function for name */
		void  setName(char[]);
		/** setter function for attraction */
		void  setAttractiveness(int);
		/** setter function for maintainance */
		void  setMaintenance(int);
		/** setter function for intelligence */
		void  setIntelligence(int);
		/** setter function for criteria */
		void  setCriteria(int);
		/** setter function for committed */
		void  setCommitted(int);
		/** setter function for type */
		void  setType(int);

		/** getter function for name */
		char* getName();
		/** getter function for attraction */
		int  getAttractiveness();
		/** getter function for maintenance */
		int  getMaintenance();
		/** getter function for intelligence */
		int  getIntelligence();
		/** getter function for criteria */
		int  getCriteria();
		/** getter function for commited */
		int  isCommitted();
		/** getter function for type */
		int  getType();
};

#endif

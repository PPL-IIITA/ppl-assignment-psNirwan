#ifndef BOY_H
#define BOY_H

class boy /*! \brief class boy.
 *        
 *
 *  class to define various attributes of boys
*/{
	private :
		/** name of the boy */	
		char name[20];
		/** his attractiveness */ 
		int attractiveness;
		/** intelligence of the boy */ 
		int intelligence;
		/** budget of the boy */
		int budget;
		/** minimum attraction of the girl for the boy*/
		int minattr;
		/** status of the boy: 0-single 1-committed*/	
		int committed;
		/** type of the boy: 1-miser 2-generous 3-geeky */
		int type;
	public :
		/** setter function for name */
		void  setName(char[]);
		/** setter function for attractiveness */
		void  setAttractiveness(int);
		/** setter function for intelligence */
		void  setIntelligence(int);
		/** setter function for budget */
		void  setBudget(int);
		/** setter function for committed */
		void  setCommitted(int);
		/** setter function for min attraction */
		void  setMinattr(int);
		/** setter function for type */
		void  setType(int);

		/** getter function for name */
		char* getName();
		/** getter function for attractiveness */
		int   getAttractiveness();
		/** getter function for intelligence */
		int   getIntelligence();
		/** getter function for budget */
		int   getBudget();
		/** getter function for min attraction */
		int   getMinattr();
		/** getter function for committed */
		int   isCommitted();
		/** getter function for type */
		int   getType();
};

#endif

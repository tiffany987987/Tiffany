#ifndef INTEGERSET_H
#define INTEGERSET_H
using namespace std;

class IntegerSet{
    
  
        public:
            IntegerSet();
            void unionOfSets(const IntegerSet &);
            void intersectionOfSets(const IntegerSet &);
            void insertElement(int);
            void Reset();
            void printSet() const;
            bool isEqualTo(const IntegerSet &);
            bool isNotEqualTo(const IntegerSet &);

        private:
            bool a[50];
            int size;
    };

   

#endif




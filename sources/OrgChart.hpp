#pragma once
#include <iostream>
#include <vector>

using namespace std;

namespace ariel
{
    class OrgChart
    {
        private:
            struct Node{
                string _data;
                vector<Node*> _sons;
                Node(const string &data) : _data(data) 
                {

                } 
            };

            Node *root;

        public: 
            class iterator
            {
                private:
                    string _answer;

                public:
                    iterator()
                    {
                        this->_answer = " ";
                    }

                    bool operator!=(const iterator& iter) const
                    {
                        return false;
                    }

                    iterator& operator++()
                    {
                        return *this;
                    }

                    iterator operator++(int number)
                    {
                        return *this;
                    }

                    string operator*()
                    {
                        return " ";
                    }

                    string* operator->()
                    {
                        return &(this->_answer);
                    }
            };

            iterator begin()
            {
                return iterator();
            }

            iterator end()
            {
                return iterator();
            }

            iterator begin_level_order()
            {
                return iterator();
            }

            iterator end_level_order()
            {
                return iterator();
            }

            iterator begin_reverse_order()
            {
                return iterator();
            }

            iterator reverse_order()
            {
                return iterator();
            }

            iterator begin_preorder()
            {
                return iterator();
            }

            iterator end_preorder()
            {
                return iterator();
            }

            OrgChart& add_root(string node)
            {
                return *this;
            }

            OrgChart& add_sub(string node1, string node2)
            {
                return *this;
            }

            friend ostream& operator<<(ostream& output, const OrgChart &organization)
            {
                return output;
            }
    };
}
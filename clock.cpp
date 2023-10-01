#include<iostream>
using namespace std;
struct node
{
    int data; int num;
    node* top;
    node* bottom;
    node* right;
    node* left;
public:
    node()
    {
        data = 0; num = 0;
        top = 0; bottom = 0; right = 0; left = 0;
    }
};

class digit
{
public:
    node* h;node* h2;node* node1; node* node2; node* node3; node* node4; node* node5; node* node6;
    int side; int s;
public:
    digit()
    {
        node* node1 = new node; node* node2 = new node; node* node3 = new node;
        node* node4 = new node; node* node5 = new node; node* node6 = new node;
        h = node1;h2=node2;
        node1->left = nullptr; node1->top = nullptr;
        node1->right = node2; node1->bottom = node3; node1->num = 1;
        node2->right = nullptr; node2->top = nullptr;
        node2->left = node1; node2->bottom = node4; node2->num = 2;

        node3->left = nullptr; node3->top = node2;
        node3->right = node4; node3->bottom = node5; node3->num = 3;

        node4->right = nullptr; node4->top = node2;
        node4->left = node3; node4->bottom = node6; node4->num = 4;

        node5->left = nullptr; node5->top = node3;
        node5->right = node6; node5->bottom = nullptr; node5->num = 5;

        node6->right = nullptr; node6->top = node4;
        node6->left = node5; node6->bottom = nullptr; node6->num = 6;
      
    }
    void setnum(int x)
    {
        if (x == 0)
        {
            node* temp = h;
			temp->bottom->right=nullptr;
			temp->right->bottom->left=nullptr;  
        }
        else if (x == 1)
        {
            h->right=nullptr;
			//;h->bottom->bottom->right=nullptr;
         //   h->bottom->bottom=nullptr;h->bottom=nullptr;
			h2->left=nullptr;h2->bottom->left=nullptr;h->bottom=nullptr;
            //h->bottom->right=nullptr;
			h2->bottom->bottom->left=nullptr;
           // h->bottom->bottom->right=nullptr;
//			node* temnode2 = h; temnode2 = temnode2->bottom;
//          temp = temp->right; temp = temp->bottom; temp = temp->bottom;
        }
        else if (x == 2)
        {
            node* temp = h;
            temp->bottom = nullptr; temp = temp->right;
            temp->left = nullptr;temp = temp->bottom;
            temp->top = nullptr;
            temp->bottom = nullptr; temp = temp->left;
            temp->top = nullptr;
            temp->right = nullptr; temp = temp->bottom;
            temp->top = nullptr; temp = temp->right;
            temp->top = nullptr;
            temp->left = nullptr;
        }
        else if (x == 3)
        {
            node* temp = h;
            temp->bottom = nullptr; temp = temp->right;
            temp->left = nullptr; temp = temp->bottom;
            temp->top = nullptr; temp = temp->left;
            temp->bottom=nullptr;temp=temp->right;
            temp = temp->bottom;
            temp=temp->left;
        }
        else if (x == 4)
        {
            node* temp = h->right;h->right=0;
           // temp = temp->right;
            temp->left = nullptr; temp = temp->bottom;
           // temp->top = nullptr;
            temp->left->bottom = nullptr; temp->left = 0;
            temp = temp->bottom;
            temp->top = nullptr;
            temp->left = nullptr;
          //  node* temnode2 = h; temnode2->right = 0;
        }
        else if (x == 5)
        {
            node* temp = h; temp->right->bottom = 0; temp = temp->bottom;
            temp->bottom = 0; temp = temp->right; temp->left = nullptr;
            temp->top = 0; temp = temp->bottom;
            temp->top = nullptr; temp = temp->left;
            temp->right = 0; temp->top = 0;
        }
        else if (x == 6)
        {
            node* temp = h; temp->right->bottom = 0;          
            temp = temp->bottom; temp->top = nullptr;temp->right->top=nullptr;
            temp = temp->bottom; temp->top = 0; temp = temp->right;
            temp->top = 0; temp->left = 0;
        }
        else if (x == 7)
        {
            node* temp = h;
            temp->bottom = 0; temp = temp->right; temp->left = 0; temp = temp->bottom; temp->top = 0;
            temp->left = 0; temp = temp->bottom; temp->top = 0; temp->left = 0;
        }
        else if (x == 8)
        {
            node* temp = h;
            temp = temp->right;
            temp->left = nullptr; temp = temp->bottom;
            temp->top = nullptr;
            temp = temp->left;
            temp->top = nullptr; temp = temp->bottom;
            temp->top = nullptr;
            temp = temp->right; temp->top = 0;
            temp->left = nullptr;
        }
        else if (x == 9)
        {
            node* temp = h;
            temp = temp->right;
            temp->left = nullptr; temp = temp->bottom;
            temp->top = nullptr;
            temp->left->bottom = nullptr; temp->left = 0;
            temp = temp->bottom;
            temp->top = nullptr;
        }
     //   print();
    }
    void print()
    {
        node* head; int start = -1; int space = 0;
        if (!side)
            head = h;
        if (side == 1)
        {
            head = h->right;
            space = 1;
        }
        while (head->bottom != 0 || head->top != 0 || head->left != 0 || head->right != 0)
            // for (int i=0;i<3;i++)
        {
            if (s == 1)
            {
                cout << " ";//cout<<"0";
                for (int i = 0; i < 3; i++)
                    cout << "-";
                cout << endl; s = 0;
            }
            if (head->bottom != nullptr && head->right != nullptr && head->data == 0)
            {
                cout << " ";//cout<<"0";
                for (int i = 0; i < 3; i++)
                    cout << "-";
                cout << endl;
                if (head->bottom != 0 && head->right->bottom != 0 && head->data == 0)
                {
                    for (int i = 0; i < 2; i++)
                        cout << "| |" << endl;
                    head->data = -99;
                    head = head->bottom;
                }
                if (head->right != 0 && head->data == 0)
                {
                    cout << " ";//cout<<"0";
                    for (int i = 0; i < 3; i++)
                        cout << "-";
                    cout << endl;
                }
                // cout<<head->num<<" "<<head->bottom->num<<" "<<head->right<<endl;
                if (head->bottom != 0 && head->right != 0 && head->data == 0)
                {
                    for (int i = 0; i < 2; i++)
                        cout << "| |" << endl;
                    head->data = -99;
                    head = head->bottom;
                }
                else if (head->bottom != 0 && head->right == 0 && head->data == 0)
                {
                    for (int i = 0; i < 2; i++)
                        cout << "| |" << endl;
                    head->data = -99;
                    head = head->bottom;
                }// cout<<head->num;
                else if (head->bottom == 0 && head->right != 0 && head->data == 0)
                {
                    head = head->right; space = 1;
                }
            }
            else if (head->bottom != nullptr && head->left != nullptr && head->data == 0)
            {
                cout << " ";
                for (int i = 0; i < 3; i++)
                    cout << "-";
                cout << endl;
                for (int i = 0; i < 2; i++)
                    cout << " |" << endl;
                head->data = -99;
                head = head->bottom;
            }
            else if (head->bottom != nullptr && head->data == 0)
            {
                // cout<<"bottom";
                // cout<<head->num<<endl;
                if (space)
                {
                    for (int i = 0; i < 2; i++)
                        cout << " |" << endl;
                }
                else if (space == 0)
                {
                    for (int i = 0; i < 2; i++)
                        cout << "|" << endl;
                }
                head->data = -99;
                head = head->bottom;
            }
            else if (head->right != nullptr && head->data == 0)
            {
                // cout<<"right";
                // cout<<head->num<<endl;
                cout << " ";
                for (int i = 0; i < 3; i++)
                    cout << "-";
                cout << endl;
                head->data = -99;
                head = head->right;//cout<<head->num;
                space = 1;
            }
            else if (head->left != nullptr && head->data == 0)
            {
                // cout<<"left";
                // cout<<head->num<<endl;
                cout << " ";
                space = 0;
                for (int i = 0; i < 3; i++)
                    cout << "-";
                cout << endl;
                head->data = -99;//cout<<head->num;
                head = head->left;//cout<<head->num;
            }
            else if (head->top != nullptr && head->data == 0)
            {
                // cout<<"4";
                // cout<<head->num<<endl;
                for (int i = 0; i < 3; i++)
                    cout << "|" << endl;
                head->data = -99;
                head = head->top;
            }
            // if (head->bottom==0 && head->top==0 && head->left==0)
            // {
            // head=head->right;space=1;
            // }
        }
    }
    void reset()
    {
      //  delete node1;delete node2;delete node3;delete node4;delete node5;delete node6;
    //    h = node1;
        node* node1 = new node; node* node2 = new node; node* node3 = new node;
        node* node4 = new node; node* node5 = new node; node* node6 = new node;
		
        node1->left = nullptr; node1->top = nullptr;
        node1->right = node2; node1->bottom = node3; node1->num = 0;
        h = node1;
        node2->right = nullptr; node2->top = nullptr;
        node2->left = node1; node2->bottom = node4; node2->num = 1;
		h2=node2;
        node3->left = nullptr; node3->top = node1;
        node3->right = node4; node3->bottom = node5; node3->num = 2;

        node4->right = nullptr; node4->top = node2;
        node4->left = node3; node4->bottom = node6; node4->num = 3;

        node5->left = nullptr; node5->top = node3;
        node5->right = node6; node5->bottom = nullptr; node5->num = 4;

        node6->right = nullptr; node6->top = node4;
        node6->left = node5; node6->bottom = nullptr; node6->num = 5;
    }
};
class Clock
{
    int c1, c2, c3, c4;//node*t1;node*t2;node*t3;node*t4;
    digit d1;
    digit d2;
    digit d3;
    digit d4;
public:
    Clock(int x, int y, int z, int w)
    {
        c1 = x; c2 = y; c3 = z; c4 = w;//node*t1=d1.h;node*t2=d2.h;node*t3=d3.h;node*t4=d3.h;
        // cout<<t1->left<<" "<<t2<<" "<<t3<<" "<<t4<<endl;
        // cout<<t1->right<<" "<<(t1->right)->left<<endl;
        d1.setnum(x); d2.setnum(y); d3.setnum(z); d4.setnum(w);
    }
    void print()
{
//cout<<d3.node2->bottom;
//first horizontal line
            
	if (d1.h->right)
		cout << "*****";
	else
		cout << "     ";
	cout << "   ";
	
	if (d2.h->right)
		cout << "*****";
	else
		cout << "     ";
	cout << "   ";
	
	if (d3.h->right)
		cout << "*****";
	else
		cout << "     ";
	cout << "   ";
	
	if (d4.h->right)
		cout << "*****";
	else
		cout << "     ";
	cout << "   ";
		
	cout << endl;

//first half vertical lines

	for (int i = 0; i < 2; i++)
	{
		if (d1.h->bottom!= nullptr)
			cout << "*";
		else
			cout<<" ";
		if (d1.h->right!=nullptr && d1.h->right->bottom!=nullptr)
		{
			cout << "   *";
		}
		else if (d1.h->bottom!= nullptr&&d1.h->bottom->right!= nullptr&&d1.h->bottom->right->top!= nullptr)
			cout << "   *";
		else if (d1.h2!=nullptr && d1.h2->bottom!=nullptr)
			cout << "   *";
		else        
			cout << "    ";
		cout << "   ";
		
		if (d2.h->bottom!= nullptr)
			cout << "*";
		else
			cout<<" ";
		if (d2.h->right!=nullptr && d2.h->right->bottom!=nullptr)
		{
			cout << "   *";
		}
		else if (d2.h->bottom!= nullptr&&d2.h->bottom->right!= nullptr&&d2.h->bottom->right->top!= nullptr)
			cout << "   *";
		else if (d2.h2!=nullptr && d2.h2->bottom!=nullptr)
			cout << "   *";
		else 
			cout << "    ";
		cout << "   ";
		
		if (d3.h->bottom!= nullptr)
			cout << "*";
		else
			cout<<" ";
		if (d3.h->right!=nullptr && d3.h->right->bottom!=nullptr)
		{
			cout << "   *";
		}
		else if (d3.h->bottom!= nullptr&&d3.h->bottom->right!= nullptr&&d3.h->bottom->right->top!= nullptr)
			cout << "   *";
		else if (d3.h2!=nullptr && d3.h2->bottom!=nullptr)
			cout << "   *";
		else 
			cout << "    ";
		cout << "   ";
		
		if (d4.h->bottom!= nullptr)
			cout << "*";
		else
			cout<<" ";
		if (d4.h->right!=nullptr && d4.h->right->bottom!=nullptr)
		{
			cout << "   *";
		}
		else if (d4.h->bottom!= nullptr&&d4.h->bottom->right!= nullptr&&d4.h->bottom->right->top!= nullptr)
			cout << "   *";
		else if (d4.h2!=nullptr && d4.h2->bottom!=nullptr)
			cout << "   *";
		else 
			cout <<"    ";
			
		cout << endl;
	}
//second horizontal line
	if (d1.h->bottom!=nullptr && d1.h->bottom->right!=nullptr)
	{
			cout << "*****";
	}	
	else if (d1.h->right!=nullptr && d1.h->right->bottom!=0 && d1.h->right->bottom->left!=nullptr)
	{
		cout << "*****";
	}
	else
		cout << "     ";
	cout << "   ";
	if (d2.h->bottom!=nullptr && d2.h->bottom->right!=nullptr)
	{
			cout << "*****";
	}	
	else if(d2.h->right!=nullptr&&d2.h->right->bottom!=nullptr&&d2.h->right->bottom->left!=nullptr)
	{
		cout << "*****";	
	}
	else
		cout << "     ";
	cout << "   ";
	if (d3.h->bottom!=nullptr && d3.h->bottom->right!=nullptr)
	{
		cout << "*****";
	}	
	else if(d3.h->right!=nullptr&&d3.h->right->bottom!=nullptr&&d3.h->right->bottom->left!=nullptr)
	{
		cout << "*****";		
	}
	else
		cout << "     ";
	cout << "   ";
	if (d4.h->bottom!=nullptr && d4.h->bottom->right!=nullptr)
	{
		cout << "*****";
	}	
	else if(d4.h->right!=nullptr&&d4.h->right->bottom!=nullptr&&d4.h->right->bottom->left!=nullptr)
	{
		cout << "*****";	
	}
	else
		cout << "     ";
	cout << "   ";

	cout << endl;
//lower half vertical lines
	for (int i = 0; i < 2; i++)
	{
		if (d1.h->bottom!= nullptr && d1.h->bottom->bottom!= nullptr)
			cout << "*";
		else if (d1.h->right!=nullptr&&d1.h->right->bottom!=nullptr&&d1.h->right->bottom->left!=nullptr&&d1.h->right->bottom->left->bottom!=nullptr)
			cout << "*";
		else
			cout<<" ";
		if (d1.h->right!=nullptr&&d1.h->right->bottom!=nullptr&&d1.h->right->bottom->bottom!=nullptr)
			cout << "   *";
		else if (d1.h->bottom!=nullptr && d1.h->bottom->right!= nullptr && d1.h->bottom->right->bottom!=nullptr)
			cout << "   *";
		else if (d1.h2!=nullptr && d1.h2->bottom!=nullptr && d1.h2->bottom->bottom!=nullptr)
			cout << "   *";
		else
			cout << "    ";
		cout << "   ";
		
		if (d2.h->bottom!= nullptr && d2.h->bottom->bottom!= nullptr)
			cout << "*";
		else if (d2.h->right!=nullptr&&d2.h->right->bottom!=nullptr&&d2.h->right->bottom->left!=nullptr&&d2.h->right->bottom->left->bottom!=nullptr)
			cout << "*";
		else
			cout<<" ";
		if (d2.h->right!=nullptr&&d2.h->right->bottom!=nullptr&&d2.h->right->bottom->bottom!=nullptr)
			cout << "   *";
		else if (d2.h->bottom!=nullptr && d2.h->bottom->right!= nullptr && d2.h->bottom->right->bottom!=nullptr)
			cout << "   *";
		else if (d2.h2!=nullptr && d2.h2->bottom!=nullptr && d2.h2->bottom->bottom!=nullptr)
			cout << "   *";
		else
			cout << "    ";
		cout << "   ";
		
		if (d3.h->bottom!= nullptr && d3.h->bottom->bottom!= nullptr)
			cout << "*";
		else if (d3.h->right!=nullptr&&d3.h->right->bottom!=nullptr&&d3.h->right->bottom->left!=nullptr&&d3.h->right->bottom->left->bottom!=nullptr)
			cout << "*";
		else
			cout<<" ";
		if (d3.h->right!=nullptr&&d3.h->right->bottom!=nullptr&&d3.h->right->bottom->bottom!=nullptr)
			cout << "   *";
		else if (d3.h->bottom!=nullptr && d3.h->bottom->right!= nullptr && d3.h->bottom->right->bottom!=nullptr)
			cout << "   *";
		else if (d3.h2!=nullptr && d3.h2->bottom!=nullptr && d3.h2->bottom->bottom!=nullptr)
			cout << "   *";
		else
			cout << "    ";
		cout << "   ";
		
		if (d4.h->bottom!= nullptr && d4.h->bottom->bottom!= nullptr)
			cout << "*";
		else if (d4.h->right!=nullptr&&d4.h->right->bottom!=nullptr&&d4.h->right->bottom->left!=nullptr&&d4.h->right->bottom->left->bottom!=nullptr)
			cout << "*";
		else
			cout<<" ";
		if (d4.h->right!=nullptr&&d4.h->right->bottom!=nullptr&&d4.h->right->bottom->bottom!=nullptr)
			cout << "   *";
		else if (d4.h->bottom!=nullptr && d4.h->bottom->right!= nullptr && d4.h->bottom->right->bottom!=nullptr)
			cout << "   *";
		else if (d4.h2!=nullptr && d4.h2->bottom!=nullptr && d4.h2->bottom->bottom!=nullptr)
			cout << "   *";
		else
			cout << "    ";
		cout << "   ";
			
		cout << endl;
	}

//third horizontal line
		if (d1.h->bottom!=nullptr && d1.h->bottom->bottom!=nullptr && d1.h->bottom->bottom->right!=nullptr)
		{
			cout << "*****";
		}	
		else if(d1.h->right!=0&&d1.h->right->bottom!=0&&d1.h->right->bottom->bottom!=0 && d1.h->right->bottom->bottom->left!=nullptr)
		{
			cout << "*****";
		}
		else if (d1.h->right!=0&& d1.h->right->bottom!=0&&d1.h->right->bottom->left!=0&&d1.h->right->bottom->left->bottom!=0&&d1.h->right->bottom->left->bottom->right!=0)
		{
			cout << "*****";
		}
		else if (d1.h->bottom!=nullptr&&d1.h->bottom->right!=nullptr&&d1.h->bottom->right->bottom!=nullptr&&d1.h->bottom->right->bottom->left!=nullptr)
			cout << "*****";
		else
			cout << "     ";
		cout << "   ";
		
		if (d2.h->bottom!=nullptr && d2.h->bottom->bottom!=nullptr && d2.h->bottom->bottom->right!=nullptr)
		{
			cout << "*****";
		}	
		else if (d2.h->right!=0&&d2.h->right->bottom!=0&&d2.h->right->bottom->left!=0&&d2.h->right->bottom->left->bottom!=0&&d2.h->right->bottom->left->bottom->right!=0)
		{
			cout << "*****";
		}
		else if (d2.h->right!=nullptr&&d2.h->right->bottom!=nullptr&&d2.h->right->bottom->bottom!=nullptr&&d2.h->right->bottom->bottom->left!=nullptr)
		{
			cout << "*****";	
		}
		else if (d2.h->bottom!=nullptr&&d2.h->bottom->right!=nullptr&&d2.h->bottom->right->bottom!=nullptr&&d2.h->bottom->right->bottom->left!=nullptr)
			cout << "*****";
		else
			cout << "     ";
		cout << "   ";
		
		if (d3.h->bottom!=nullptr&&d3.h->bottom->bottom!=nullptr&&d3.h->bottom->bottom->right!=nullptr)
		{
			cout << "*****";
		}	
		else if (d3.h->right!=nullptr&&d3.h->right->bottom!=nullptr&&d3.h->right->bottom->left!=nullptr&&d3.h->right->bottom->left->bottom!=nullptr&&d3.h->right->bottom->left->bottom->right!=nullptr)
		{
			cout << "*****";
		}
		else if (d3.h->right!=nullptr&&d3.h->right->bottom!=nullptr&&d3.h->right->bottom->bottom!=nullptr&&d3.h->right->bottom->bottom->left!=nullptr)
		{
			cout << "*****";		
		}
		else if (d3.h->bottom!=nullptr&&d3.h->bottom->right!=nullptr&&d3.h->bottom->right->bottom!=nullptr&&d3.h->bottom->right->bottom->left!=nullptr)
			cout << "*****";
		else 
			cout << "     ";
		cout << "   ";
			
		if (d4.h->bottom!=nullptr && d4.h->bottom->bottom!=nullptr && d4.h->bottom->bottom->right!=nullptr)
		{
			cout << "*****";
		}	
	    else if (d4.h->right!=nullptr&&d4.h->right->bottom!=nullptr&&d4.h->right->bottom->bottom!=nullptr&&d4.h->right->bottom->bottom->left!=nullptr)
		{
			cout << "*****";	
		}
		else if (d4.h->right!=nullptr && d4.h->right->bottom!=nullptr&& d4.h->right->bottom->left!=nullptr &&d4.h->right->bottom->left->bottom!=nullptr&&d4.h->right->bottom->left->bottom->right!=nullptr)
		{
			cout << "*****";	
		}	
		else if (d4.h->bottom!=nullptr&&d4.h->bottom->right!=nullptr&&d4.h->bottom->right->bottom!=nullptr&&d4.h->bottom->right->bottom->left!=nullptr)
			cout << "*****";	
	cout << endl;
	}
    void reset()
    {
        d1.reset(); d2.reset(); d3.reset(); d4.reset();
    }
    void addmin(int min)
    {
        if (min < 60)
        {
            int min1 = min / 10;
            int min2 = min % 10;
            d3.reset(); d4.reset();
            c3 = c3 + min1; c4 = c4 + min2;
            if (c4>9)
            {
            	c4=c4-10;
            	c3++;
			}
			if (c3>5)
			{
				c3=0;
				hourincrement();
			}
            d3.setnum(c3); d4.setnum(c4);
        }
        else
        {
            while (min >= 60)
            {
                hourincrement();
                min = min - 60;          
            }
            int min1 = min / 10;
            int min2 = min % 10;
            d3.reset(); d4.reset();
            c3 = c3 + min1; c4 = c4 + min2;
            if (c4>9)
            {
            	c4=c4-10;
            	c3++;
			}
			if (c3>5)
			{
				c3=0;
				hourincrement();
			}
			d3.setnum(c3); d4.setnum(c4);
        }
    }
    void hourincrement()
    {
        if (c2 < 9 && c1<2)
        {
            d2.reset(); c2++; d2.setnum(c2);
        }
        else
        {
            d2.reset(); c2 = 0; d2.setnum(c2);
            if (c1 < 2)
            {
                d1.reset(); c1++; d1.setnum(c1);
            }
            else
            {
                d1.reset(); c1 = 0; d1.setnum(c1);
                cout<<"Date move forward"<<endl;
            }
        }
    }
    void submin(int min)
    {
        if (min >= 60)
        {
            while (min >= 60)
            {
                hourdecrement();
                min = min - 60;
            }
        }
        int min1 = min / 10;
        int minode2 = min % 10;
        d3.reset(); d4.reset();
        if (c3 >= min1)
            c3 = c3 - min1;
        // else
        // {
        // cout<<min1<<endl;
        // c3=9-min1;
        // hourdecrement();
        // }
        if (c4 >= minode2)
            c4 = c4 - minode2;
        else
        {
            c4 = 10 - minode2;
            if (c3 > 0)
                c3--;
            else
            {
                c3 = 5;
                hourdecrement();
            }
        }
        d3.setnum(c3); d4.setnum(c4);
    }
    void hourdecrement()
    {
        if (c2 > 0)
        {
            d2.reset(); c2--; d2.setnum(c2);
        }
        else
        {
            d2.reset(); c2 = 9; d2.setnum(c2);
            if (c1 > 0)
            {
                d1.reset(); c1--; d1.setnum(c1);
            }
            else
            {
                d1.reset(); c1 = 2; d1.setnum(c1);
                d2.reset(); c2 = 3; d2.setnum(c2);
                cout<<"Date move backward"<<endl;
            }
        }
    }
    void addhour(int h)
    {
        if (h >= 24)
        {
            while (h >= 24)
                h = h - 24;
            cout << "Date moved forward" << endl;
        }
        int h1 = h / 10;
        int h2 = h % 10;
        d1.reset(); d2.reset();
        c1 = c1 + h1; c2 = c2 + h2;
        if (c1 > 2)
        {
            while (c1 > 2)
            {
                c1 = c1 - 2;
                c2 = c2 - 4;
            }
            cout << "Date moved forward" << endl;
        }
        if (c1 == 2 && c2 > 4)
        {

            c1 = c1 - 2; c2 = c2 - 4;
        }
        d1.setnum(c1); d2.setnum(c2);
    }
    void subhour(int h)
    {
        if (h >= 24)
        {
            while (h >= 12)
                h = h - 12;
            cout << "Date moved backward" << endl;
        }
        int h1 = h / 10;
        int h2 = h % 10;
        d1.reset(); d2.reset();
        c1 = c1 - h1; c2 = c2 - h2;
        if (c2 < 0)
        {
            if (c1 <= 0)
                c2 = 5 - h2;
            else
                c2 = 10 - h2;
            c1--;
        }
        if (c1 < 0)
        {
            c1 = 2 - h1;
            cout << "Date moved backward" << endl;
        }
        // if (c1<0)
        // {
        // c1
        // }
        // if (c1==2 && c2<0)
        // {
        //
        // c1=2-c1;c2=4-c2;
        // }
        d1.setnum(c1); d2.setnum(c2);
    }
    void conversion()
    {
        if (c1 >= 1 || c2 >= 2)
        {
            d1.reset(); d2.reset();
            c1--;
            c2 = c2 - 2;
            d1.setnum(c1); d2.setnum(c2);
        }
    }
};
int main()
{
    // int d1,d2,d3,d4;
    // cin>>d1>>d2>>d3>>d4;
    // if (d1>2 || d2>9 || d3>6 || d4>9 || d1<0 || d2<0 || d3<0 || d4<0)
    // {
    // cout<<"invalid entries enter again ";cin>>d1>>d2>>d3>>d4;
    // }
    // clock c(d1,d2,d3,d4);

    Clock c(0,3,4,6); 
    c.print();
   //  c.addmin(120);
    // c.addhour(28);
  //   c.hourincrement();
  //   c.reset();
    // c.hourdecrement();
    cout<<endl<<endl;
     c.submin(240);
   //  c.subhour(12);
//    c.conversion();
   c.print();
//    digit d1;d1.setnum(1);
//    d1.print();cout<<endl<<endl;
    // d1.reset();d1.setnum(8);d1.print();
    // digit d2;d2.setnum(2);d2.print();cout<<endl<<endl;
    // digit d3;d3.setnum(3);d3.print();cout<<endl<<endl;
    // digit d4;d4.setnum(4);d4.print();cout<<endl<<endl;
    // digit d5;d5.setnum(5);d5.print();cout<<endl<<endl;
    // digit d6;d6.setnum(6);d6.print();cout<<endl<<endl;
    // digit d7;d7.setnum(7);d7.print();cout<<endl<<endl;
    // digit d8;d8.setnum(8);d8.print();cout<<endl<<endl;
    // digit d9;d9.setnum(9);d9.print();cout<<endl<<endl;
    // digit d0;d0.setnum(0);d0.print();cout<<endl<<endl;
}

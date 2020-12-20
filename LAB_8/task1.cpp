#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;
class student
{
private:
    int roll;
    float marks;
    char name[50], addr[50];

public:
    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cout << "Enter address: ";
        cin >> addr;
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void putdata()
    {
        cout << setw(10) << name << setw(15) << roll << setw(20) << marks << setw(30) << "\n";
    }
    int getroll()
    {
        return roll;
    }
};

int main()
{
    student st;
    fstream inout;
    int m, roll, object, isfound;
    cout << "Select from the Menu Below" << endl;
    cout << "1. Enter Records" << endl;
    cout << "2. View Records" << endl;
    cout << "3.Update the records" << endl;
    cout << "4.Search for a record" << endl;
    cout << "5.Modify record" << endl;
    cout << "6.Delete a record" << endl;
    cout << "7. Show number of records" << endl;

    cin >> m;

    switch (m)
    {
    case 1:
        inout.open("record.txt", ios::out);
        int z;
        cout << "Enter number of students: ";
        cin >> z;
        for (int i = 0; i < z; i++)
        {
            st.getdata();
            inout.write((char *)&st, sizeof(st));
        }
        cout << "File written!" << endl;
        inout.close();
        break;

    case 2:
        inout.open("record.txt", ios::in);
        while (inout.read((char *)&st, sizeof(st)))
        {
            st.putdata();
        }

        break;
    case 3:
        inout.open("record.txt", ios::app);
        cout << "Add in the record: " << endl;
        st.getdata();
        inout.write((char *)&st, sizeof(st));
        cout << "Record Added!" << endl;
        inout.close();
        break;
    case 4:
        inout.open("record.txt", ios::in);
        isfound = 0;
        cout << "Enter Roll number: " << endl;
        cin >> roll;
        inout.seekg(0, ios::beg);
        while (inout.read((char *)&st, sizeof(st)))
        {
            if (st.getroll() == roll)
            {
                isfound = 1;
                cout << "You have searched for : " << endl;
                st.putdata();
                break;
            }
        }
        if (isfound == 0)
            cout << "Your search is not found: " << endl;
        inout.close();
        break;
    case 5:
        inout.open("record.txt", ios::out | ios::in | ios::ate);
        int loc;
        object = isfound = 0;
        cout << "Enter Roll number; " << endl;
        cin >> roll;
        inout.seekg(0, ios::beg);
        while (inout.read((char *)&st, sizeof(st)))
        {
            object++;
            if (st.getroll() == roll)
            {
                isfound = 1;
                loc = (object = 1) * sizeof(st);
                inout.seekp(loc, ios::beg);
                cout << "Enter new data" << endl;
                st.getdata();
                inout.write((char *)&st, sizeof(st)) << flush;
                cout << "Record Modified!" << endl;
                break;
            }
        }
        break;
    case 6:
        inout.open("REC.txt", ios::in);
        student stu[48];
        int i, j;
        i = 0;
        cout << "Enter Roll number:" << endl;
        cin >> roll;
        inout.seekg(0, ios::beg);
        while (inout.read((char *)&stu[i], sizeof(stu[i])))
        {
            ++i;
        }
        j = i;
        inout.close();
        inout.open("record.txt", ios::out);
        for (i = 0; i < j; i++)
        {
            if (stu[i].getroll() != roll)
            {
                inout.write((char *)&stu[i], sizeof(stu[i]));
            }
        }
        cout << "Record Deleted" << endl;
        inout.close();
        break;
    case 7:
        int size;
        inout.open("record.txt", ios::in);
        inout.seekg(0, ios::end);
        size = inout.tellg();
        cout << "Number of record=" << size / sizeof(st) << endl;
        break;
    }
}

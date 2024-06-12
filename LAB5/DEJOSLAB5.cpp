    #include <iostream>
    #include <fstream>
    #include <cmath>

    using namespace std;

    struct student
    {
        string studentName;
        double score;
    };

    void readFromRecord (student studScoreRec[]);
    double recAverage(student studScoreRec[], int s);
    double recSTDev(student studScoreRec[], int s);
    void writeResultToFile (double ave, double stDev);

    int main()
    {
        int size = 7;
        student students[size];

        readFromRecord (students);
        for(int i = 0; i<size; i++)
        {
            cout<<students[i].studentName<<'\t';
            cout<<students[i].score;
        }

        cout<<endl;
        double avg = recAverage(students, size);
        double sD = recSTDev(students, size);
        cout<<"Average: "<<avg<<endl;
        cout<<"Standard Deviation: "<<sD<<endl;

        writeResultToFile (avg, sD);
    }
    void readFromRecord (student studScoreRec[])
    {
        ifstream inRec;
        inRec.open("StudentScore.txt");
        int i=0;
        if(inRec.is_open())
        {
            while(!inRec.eof())
            {
                getline(inRec,studScoreRec[i].studentName,'\t');
                inRec>>studScoreRec[i].score;
                i++;
            }
        }
        else
        {
            cout<<"Record not found"<<endl;
        }
        inRec.close();
    }

    double recAverage(student studScoreRec[], int s)
    {
        int sum=0;
        for (int i=0; i<s; i++)
        {
            sum+=studScoreRec[i].score;
        }
        return static_cast<double>(sum)/s;
    }

    double recSTDev(student studScoreRec[], int s)
    {
        double sum=0, sDev=0;
        double ave = recAverage(studScoreRec, s);
        for(int i=0; i<s; i++)
        {
            sum += pow((studScoreRec[i].score - ave),2);
        }

        sDev = sqrt(sum/(s-1));
        return sDev;
    }

    void writeResultToFile (double ave, double stDev)
    {
        ofstream outRec("scoreDescStat.txt");
        outRec<<"Average:"<<'\t'<<ave<<endl;
        outRec<<"Standard Deviation:"<<'\t'<<stDev<<endl;
        outRec.close();
    }






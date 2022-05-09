#ifndef GRADED_ACTIVITY_H
#define GRADED_ACTIVITY_H

class GradedActivity
{
protected:
    double score;

public:
    GradedActivity()
    {
        score = 0.0;
    }
    GradedActivity(double s)
    {
        score = s;
    }
    void setScore(double s)
    {
        score = s;
    }
    double getScore()
    {
        return score;
    }
    char getLetterGrade() const;
};

#endif //GRADED_ACTIVITY_H
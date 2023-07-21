#include <stdio.h>
#include <string.h>

struct students{
    char name[100];
    char gender[10];
    int cgpa;
    int year;
    int roll;
};

void printdatabase(struct students a[],int i){
    printf("Name : %s\n",a[i].name);
    printf("Gender : %s\n",a[i].gender);
    printf("CGPA : %d\n",a[i].cgpa);
    printf("Year : %d\n",a[i].year);
    printf("Roll number : %d\n",a[i].roll);
}

int main(){
    int n;
    printf("Enter the number of students in database : ");
    scanf("%d",&n);

    struct students database[n];

    for(int i = 0 ; i<n ; i++){
        printf("Name of student %d : ",i+1);
        scanf("%s",database[i].name);
    }

    for(int i = 0 ; i<n ; i++){
        printf("Gender of student %d : ",i+1);
        scanf("%s",database[i].gender);
    }

    for(int i = 0 ; i<n ; i++){
        printf("CGPA of student %d : ",i+1);
        scanf("%d",&database[i].cgpa);
    }

    for(int i = 0 ; i<n ; i++){
        printf("Joining year of student %d : ",i+1);
        scanf("%d",&database[i].year);
    }

    for(int i = 0 ; i<n ; i++){
        printf("Roll number of student %d : ",i+1);
        scanf("%d",&database[i].roll);
    }

    for(int j=0 ; j<n ; j++){
        for(int i=0 ; i<n-1 ; i++){
            if(database[i].year>database[i+1].year){
                int a = database[i].year;
                database[i].year = database[i+1].year;
                database[i+1].year = a;

                char name[100];
                strcpy(name,database[i].name);
                strcpy(database[i].name,database[i+1].name);
                strcpy(database[i+1].name,name);

                char gender[100];
                strcpy(gender,database[i].gender);
                strcpy(database[i].gender,database[i+1].gender);
                strcpy(database[i+1].gender,gender);

                int b = database[i].roll;
                database[i].roll = database[i+1].roll;
                database[i+1].roll = b;

                int c = database[i].cgpa;
                database[i].cgpa = database[i+1].cgpa;
                database[i+1].cgpa = c;

                a=0,b=0,c=0;
            }
        }
    }

        for(int j=0 ; j<n ; j++){
            for(int i=0 ; i<n-1 ; i++){
                if(database[i].year==database[i+1].year){
                    if(database[i].roll>database[i+1].roll){
                    
                    char name[100];
                    strcpy(name,database[i].name);
                    strcpy(database[i].name,database[i+1].name);
                    strcpy(database[i+1].name,name);

                    char gender[100];
                    strcpy(gender,database[i].gender);
                    strcpy(database[i].gender,database[i+1].gender);
                    strcpy(database[i+1].gender,gender);

                    int b = database[i].roll;
                    database[i].roll = database[i+1].roll;
                    database[i+1].roll = b;

                    int c = database[i].cgpa;
                    database[i].cgpa = database[i+1].cgpa;
                    database[i+1].cgpa = c;
                }
            }
        }
    }

    for(int i = 0 ; i<n ; i++){
        printdatabase(database,i);
    }
}

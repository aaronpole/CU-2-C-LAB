#include <stdio.h>
#include <stdlib.h>


// Create Structure
struct bookdetails{
    int bookid;
    char book[50];
    char author[50];
    int nc;
}book[100],t;

// Input number of books
int main(){
    int N;
    printf("Enter number of books : ");
    scanf("%d",&N);

    // Loop and enter the books
    printf("Enter details in this format - (Book ID Name Author Number of Copies)\n");
    for (int i = 0; i < N; i++){
        scanf("%d %s %s %d",&book[i].bookid,book[i].book, book[i].author, &book[i].nc);
    }
    // Sort them wrt nc
    for(int i = 0; i < N; i++){
        for (int j = 0; j < N-1-i; j++){
            if (book[j].nc < book[j+1].nc){
                t = book[j];
                book[j] = book[j+1];
                book[j+1] = t;
            }
        }
    }

    // Display them
    printf("Book ID     Name     Author     Number of Copies\n");
    for (int i = 0; i < N; i++){
        printf("%-11d %-8s %-7s %5d\n",book[i].bookid,book[i].book,book[i].author,book[i].nc);
    }
    return 0;
}


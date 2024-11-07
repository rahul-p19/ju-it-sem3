/* Given a matrix of followers between n Facebook users (with ids from 0 to n-1) : following[i][j]=1 if user i is following user j. Thus following[i][j] is not necessarily equals to following[j][i]. Also following[i][i]=0. An influencer is a user who is followed by everybody and is not following anyone himself. Write an algorithm to find the influencers from a given matrix of followers.*/

#include <stdio.h>
#include <stdlib.h>

int i,j; // declaring global variables for ease

int main(){
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];

    printf("Enter the elements of the array:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int users = r > c? r : c;
    int *following = (int*)calloc(users,sizeof(int));
    int *followers = (int*)calloc(users,sizeof(int));

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j]){
                following[i]++;
                followers[j]++;
            }
        }
    }

    for(i=0;i<users;i++){
        if(following[i]==0 && followers[i]==users-1) printf("User %d is an influencer.\n",i+1);
    }

    return 0;
}

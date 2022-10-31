#include<stdio.h>
int main()
{
    int cost[10][10],visited[10]={0};
    int i,j,noOfNode,noOfEdges=1,min,a,b,minimumCost=0;

    //accepting the number of nodes
    printf("Enter number of nodes ");
    scanf("%d",&noOfNode);

    //accepting the cost adjacency matrix 
    printf("Enter cost (adjacency matrix)\n");
    //input graph
    for(i=1;i<=noOfNode;i++)
    {
        for(j=1;j<=noOfNode;j++)
        {
            scanf("%d",&cost[i][j]);
            // cost is 0 then initialize it by maximum value
            if(cost[i][j]==0)
              cost[i][j]=1000;
        }
    }
    
    printf("\n-------------Displaying new adjacency matrix----------------------\n");
    for(i=1;i<=noOfNode;i++)
    {
        for(j=1;j<=noOfNode;j++)
        {
            printf("\t%d\t",cost[i][j]);          
        }
        printf("\n");
    }


    //visiting the first node of graph
    visited[1]=1; 
    while(noOfEdges<noOfNode)
    {
        min=1000;
        
        //finding the minimum in each cycle
        for(i=1;i<=noOfNode;i++)
        {
            for(j=1;j<=noOfNode;j++)
            {
                if(cost[i][j]<min)
                {
                    if(visited[i]!=0)
                    {
                        min=cost[i][j];
                        a=i;
                        b=j;
                    }
                }
            }
        }


        //if the node has not been visitied yet
        if(visited[b]==0)
        {
            printf("\n%d to %d  cost=%d",a,b,min);
            minimumCost=minimumCost+min;
            noOfEdges++;
        }
        visited[b]=1;

        
        cost[a][b]=cost[b][a]=1000; 
    }

    printf("\nminimum weight is %d",minimumCost);
    return 0;
}

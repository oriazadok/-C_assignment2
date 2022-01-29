#define INF 99999
#define N 10


// This function init the graph
int initGraph(int mat[N][N]);

// This function check if there is a route between two nodes
int iaRoute(int mat[N][N]);

//This function print the route, if there isn't a route print -1 
int route(int mat[N][N]);
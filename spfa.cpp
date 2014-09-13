#include<iostream>
#include<vector>
#include<deque>
#include<cstring>

using namespace std;

#define MAXN 100
const int INF = 0x7FFFFFFF;

struct edge{
	int to;
	int weight;
};

vector<edge>adjmap[MAXN];
bool inQueue[MAXN];
int dis[MAXN];
int nodeNum;
int edgeNum;
int inQueueNum[MAXN];

void spfa(int source){
	//init
	memset(dis,0,sizeof(dis));
	deque<int>q;
	for(int i=1;i<=nodeNum;i++){
		dis[i] = INF;
		inQueueNum[i] = 0;
		inQueue[i] = false;
	}
	q.push_back(source);
	inQueue[source] = true;
	dis[source] = 0;
	inQueueNum[source]++;
	//finish init
	while(!q.empty()){
		int x = q.front();
		q.pop_front(); //pop the first item in deque
		inQueue[x] = false;
		//relaxation
		for(int i=0;i<adjmap[x].size();i++){
			int to = adjmap[x][i].to; //destination
			if((dis[x]<INF)&&(dis[to]>dis[x]+adjmap[x][i].weight)){
				//dis[x] is larger than adjmap[x][i].weight + dis[x] then relax this edge
				dis[to] = dis[x] + adjmap[x][i].weight;
				if(!inQueue[to]){ //if i is not in the deque then let it in
                    inQueue[to] = true;
                    //optimize
                    if(!q.empty()){
						//if the queue is not empty then compare the fist node's distance with to's distance
						if(dis[to]>dis[q.front()])
							q.push_back(to);
						else
							q.push_front(to);
                    }else
						q.push_back(to);
				}
			}
		}
	}

}

int main(void){

	cin>>nodeNum>>edgeNum;
	for(int i=0;i<nodeNum;i++)
		adjmap[i].clear(); //Clear the adj map
	for(int i=1;i<=edgeNum;i++){
		int s,e,w;
		cin>>s>>e>>w;
		edge t;
		t.to = e;
		t.weight = w;
		adjmap[s].push_back(t);
	}

	spfa(1);

	for(int i=1;i<=nodeNum;i++)
		cout<<dis[i]<<" ";
	cout<<endl;

	return 0;
}

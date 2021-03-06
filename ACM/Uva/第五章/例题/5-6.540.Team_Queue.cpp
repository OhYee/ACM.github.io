#include <cstdio>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

int kase=0;

class LOVE{
    private:
        vector<int> Q;
        queue<int> Q_team[1005];
        map<int,int> team;

        void debug(){
            printf("\n");
            printf("################\n");
            for(size_t i=0;i<Q.size();i++)
                printf("%d ",Q[i]);
            printf("\n");
            for(int i=0;i<1005;i++)
                if(!Q_team[i].empty())
                    printf("%d\n",i);
            printf("################\n\n");
        }

    public:
        bool start(){
            //Init
            Q.erase(Q.begin(),Q.end());
            for(int i=0;i<1005;i++)
                while(!Q_team[i].empty())
                    Q_team[i].pop();
            team.clear();

            //Input
            int n;
            scanf("%d",&n);
            if(n==0)
                return false;
            printf("Scenario #%d\n",++kase);

            for(int i=0;i<n;i++){
                int m;
                scanf("%d",&m);
                while(m--){
                    int temp;
                    scanf("%d",&temp);
                    team[temp]=i;
                }
            }

            char com[10];
            while(scanf("%s",com),com[0]!='S'){
                if(com[0]=='E'){
                    int temp;
                    scanf("%d",&temp);
                    Q_team[team[temp]].push(temp);
                    if(find(Q.begin(),Q.end(),team[temp])==Q.end()){
                        Q.push_back(team[temp]);
                    }
                }
                if(com[0]=='D'){
                    int t= *Q.begin();
                    printf("%d\n",Q_team[t].front());
                    Q_team[t].pop();
                    if(Q_team[t].empty())
                        Q.erase(Q.begin());
                }
            }
            printf("\n");
            return true;
        }
};

int main(){
    //freopen("in.txt","r",stdin);
    LOVE LIVE;
    while(LIVE.start());
    return 0;
}
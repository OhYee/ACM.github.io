/*
By:OhYee
Github:OhYee
Blog:http://www.oyohyee.com/
Email:oyohyee@oyohyee.com

かしこいかわいい？
エリーチカ！
要写出来Хорошо的代码哦~
*/
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <bitset>
using namespace std;

string dp[65] = {"1","1","5","42","462","6006","87516","1385670","23371634","414315330","7646001090","145862174640","2861142656400","57468093927120","1178095925505960","24584089974896430","521086299271824330","11198784501894470250","243661974372798631650","5360563436201569896300","119115896614816702500900","2670926804331443293626900","60386171228363065768956000","1375596980582110638216817680","31554078431506568639711925552","728440733705121725605657358256","16916012593818937850175820875056","394984727560107218767652172156480","9269882950945137003216002357575872","218589820552932101591964442689934272","5177405669064206309480641678873685136","123139887106265725065261170839575261246","2940211742938376804365727956142799686970","70461309651358512358741033490151564263034","1694426732092192797198296281548882854896770","40879953049935966764838175153044218787509460","989318124094680800242093703952690318964293660","24011992526103689868224096174884123328708261100","584414956558400574946623386902564355477176447080","14261150342358043298392602404780869211095488665940","348876433985002864104580005170614922408018905657020","8555006509113973886896694412506009110609925390878620","210257823823361408953856390159370731312558948560177500","5178713915261459187808923452167773648813573133021584000","127816663734641521693312994768720558317819058630953008000","3160890723051037742300958639363743464856851891194511344000","78316111638147520232116305011469771592038383559489541704000","1943917771018304520047172570820410402016667020494472553010000","48334523581589010102952513742546024844918906756931542442556400","1203813957908516875152358489329058054078745007110871474716375280","30029983483935083858438698423851117882968874317657169412268673840","750270153399794678576435057573545926324276055884108148422050727840","18772482769028405636917719941593858764528793976890630506115671775200","470373947038907707302405010980987131831213397364392909428995307126880","11802109943885320655951253002795677125946808879324767545672973160638080","296516920131524804299707608337156053506400465189952712435084509896783040","7459203321130790040650176332416188852363369960068846727881499803410725440","187875141510304732204453155491218970539216498205240765481036372897711988800","4737637890492057297860769571861620074038072983555206964113320603342642320960","119605940186192921945993199027326146131452990076639651225155962772912609414400","3022912056752362939484322031260179006906680462576858197252183463144268821651200"};

bool Do() {
	int n;
	if(scanf("%d",&n) == EOF)
		return false;

	cout << dp[n]<<endl<<endl;

	return true;
}

int main() {
	while(Do());
	return 0;
}
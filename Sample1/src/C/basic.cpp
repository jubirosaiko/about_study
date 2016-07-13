

#include"basic.h"



#if 0
void Printf() {


	//文字出力
	printf("Hello World\n");
	

}
#endif

#if 0
int PrintfOne(void) {

	printf("Hello World\n");
	return 0;
}
#endif

#if 0
void pf() {
	printf("五月晴れ\nプログラミング\nバグも無し\n");
}
#endif

#if 0
//文字入力
void MakeScanf() {
	int x;
	printf("整数を入力してください：");
	scanf_s("%d", &x);//整数を出力するときは%dを使う
	printf("あなたが入力した値は%dですな。\n", x);
}
#endif

#if 0
//条件分岐
void ConditionsFunction() {
	
	//int ans;
	int qans;

	//printf("貴方は男性ですか？女性ですか？\n1　男性　2女性\n");
	//scanf_s("%d", &ans);
#if 0
	//if文
	if (ans == 1) {
		printf("貴方は男性なんですね。\n");
	}
	else if (ans == 2) {
		printf("貴方は女性なんですね。\n");
	}
	else {
		printf("どっちなんですか？");
	}
	//a == b　　aとbが等しい（とき）
	//a != b　　aとbが等しくない（とき）
	//a < b 　　aがbより小さい（とき）
	//a <= b　　aがbと等しいかbより小さい（とき）
	//a > b 　　aがbより大きい（とき）
	//a >= b　　aがbと等しいかbより大きい（とき）
#endif
#if 0
	//switch文
	switch (ans) {
	case 1:
		printf("あなたは男性なんですね。\n");
		break;

	case 2:
		printf("あなたは女性なんですね。\n");
		break;

	default:
		printf("(入力は1か2です。)\n");
	}
#endif
#if 0
	printf("問題　世界一長い川は？　\n");
	printf("1 信濃川　2 アマゾン川　3 ナイル川\n");
	scanf_s("%d", &qans);
	switch (qans) {
	case 1:
		printf("日本一ですが、違います。\n");
		break;
	case 2:
		printf("そんな気もしますが、違います。\n");
		break;
	case 3:
		printf("おめでとう。正解です！\n");
		break;
	default: //TIPS:設定したcase以外になるときはdefaultで処理されるようにする
		printf("誤入力。入力は1か2か3です。\n");
	}
#endif
}
#endif

#if 0
//繰り返し
void LoopingFunction() {
#if 0
	int i;
	for (i = 0; i < 10; i++) {
		printf("Hello World\n");
	}

	for (i = 10; i > 0; i--) {

		printf("Good By World\n");
	}
#endif

#if 0
	//while文
	int i = 0; //TIPS:while文前に必ず変数の初期化をしなければならない

	while (i < 10) {
		printf("Hello World\n");
		i++;
	}
#endif

#if 0
	//do_while文
	int i = 0;
	do {
		printf("Hello World\n");
		i++;
	} while (i < 10);

#endif

#if 0
	int x;
	printf("好きな整数を入力してください。\n");
	printf("その数だけ、私の今の気持ちを繰り返します。\n");
	scanf_s("%d", &x);
#endif

}

#endif


#if 0
void TestArray() {
#if 0
	//int a[10];
	/*a[0],a[1],a[2],a[3],a[4]が定義されたことになる*/

	int b[5];
	int i;
	for (i = 0; i < 5; i++) {
		printf("数字を入力してください。");
		scanf_s("%d", &b[i]);
	}
	printf("入力された整数を逆順に出力します。\n");
	for (i = 4; i >= 0; i--) {
		printf("%d\n", b[i]);
	}

	//配列宣言時に初期化しておく
	int c[4] = {0, 1, 2, 3};//こちらの書き方だと配列数を変えるとき[]内の数字も変える
	int d[] = { 0, 1, 2, 3 };//こちらは数字を書かなくてもいい
	//宣言時の最初の生成時にしか値を与えることができない
#endif
#if 0
	//文字の配列・文字列

	char f; //文字の入れ物、文字は'で囲む。(char f = 'a';)
	
	char str[5] = { 'a', 'b', 'c','d','\0' };
	char _str[] = {'a', 'b', 'c','\0'};
	//C言語では文字列の最後に\0(null文字)を入れる
	//日本語の文字（全角文字）は、普通、半角英数字2文字分の
	//スペース（メモリ上のスペース）に1文字だけ入れられる

	char hello[] = "hello";//ともかけ、6個の要素を持つ(\0を含めるため)
	printf("私が最初に習った英単語は%sです。\n", hello);
	// %sは文字列を意味する
	// %cは文字を意味する
	printf("hello[0]は%cです。\n", hello[0]);
#endif
#if 0
	//ユーザーから文字列の入力を受け取る
	//char e[20];
	//scanf_s("%s", e);//文字列では&を付けない
	//1.scanfには、データを格納する変数のメモリ上の場所を与える。
	//2.たとえば、xをint型変数とすると、xの位置は&xで与えられる。
	//3.配列の場合、配列を表す名前が「配列のあたまの位置」を表す。
	char name[101];
	int age;
	printf("お名前を入力してください。\n");
	scanf_s("%s", name);
	printf("%sさん、こんにちは。\n", name);
	printf("年齢を入力してください。\n");
	scanf_s("%d", &age);
	printf("なるほど、%sさんは、%d歳なんですね。\n", name, age);
#endif
}
#endif

#if 0
void Ptr() {
#if 0
	int x = 10;
	
	int* p; //ポインタ変数p

	p = &x; //変数xのアドレスを持ったポインタp

	*p = 5;//pが保持しているアドレスにある変数。xに5を代入している
	printf("xの中身は%dです。\n",x);


	//& アドレス演算子
	//* 関節演算子(逆参照演算子)
#endif
#if 0
	int i;
	int a[10];
	int *p;
	p = a; //&aではない。&a[0]ならOK
	for (i = 0; i < 10; i++) {
		*(p + i) = 100 + i; // 「a[i] = 100 + i;」と同じ。
	}

	printf("配列aの中身は...\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
		
	}
	printf("\nです。\n");
#endif
#if 0
	char *p = "hello";
	printf("pの指す文字列は%sです。\n", p);
#endif
}
#endif

#if 1
void MakeRand() {
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
}
#endif












































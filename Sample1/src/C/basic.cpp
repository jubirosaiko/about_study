

#include"basic.h"



#if 0
void Printf() {


	//�����o��
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
	printf("�܌�����\n�v���O���~���O\n�o�O������\n");
}
#endif

#if 0
//��������
void MakeScanf() {
	int x;
	printf("��������͂��Ă��������F");
	scanf_s("%d", &x);//�������o�͂���Ƃ���%d���g��
	printf("���Ȃ������͂����l��%d�ł��ȁB\n", x);
}
#endif

#if 0
//��������
void ConditionsFunction() {
	
	//int ans;
	int qans;

	//printf("�M���͒j���ł����H�����ł����H\n1�@�j���@2����\n");
	//scanf_s("%d", &ans);
#if 0
	//if��
	if (ans == 1) {
		printf("�M���͒j���Ȃ�ł��ˁB\n");
	}
	else if (ans == 2) {
		printf("�M���͏����Ȃ�ł��ˁB\n");
	}
	else {
		printf("�ǂ����Ȃ�ł����H");
	}
	//a == b�@�@a��b���������i�Ƃ��j
	//a != b�@�@a��b���������Ȃ��i�Ƃ��j
	//a < b �@�@a��b��菬�����i�Ƃ��j
	//a <= b�@�@a��b�Ɠ�������b��菬�����i�Ƃ��j
	//a > b �@�@a��b���傫���i�Ƃ��j
	//a >= b�@�@a��b�Ɠ�������b���傫���i�Ƃ��j
#endif
#if 0
	//switch��
	switch (ans) {
	case 1:
		printf("���Ȃ��͒j���Ȃ�ł��ˁB\n");
		break;

	case 2:
		printf("���Ȃ��͏����Ȃ�ł��ˁB\n");
		break;

	default:
		printf("(���͂�1��2�ł��B)\n");
	}
#endif
#if 0
	printf("���@���E�꒷����́H�@\n");
	printf("1 �M�Z��@2 �A�}�]����@3 �i�C����\n");
	scanf_s("%d", &qans);
	switch (qans) {
	case 1:
		printf("���{��ł����A�Ⴂ�܂��B\n");
		break;
	case 2:
		printf("����ȋC�����܂����A�Ⴂ�܂��B\n");
		break;
	case 3:
		printf("���߂łƂ��B�����ł��I\n");
		break;
	default: //TIPS:�ݒ肵��case�ȊO�ɂȂ�Ƃ���default�ŏ��������悤�ɂ���
		printf("����́B���͂�1��2��3�ł��B\n");
	}
#endif
}
#endif

#if 0
//�J��Ԃ�
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
	//while��
	int i = 0; //TIPS:while���O�ɕK���ϐ��̏����������Ȃ���΂Ȃ�Ȃ�

	while (i < 10) {
		printf("Hello World\n");
		i++;
	}
#endif

#if 0
	//do_while��
	int i = 0;
	do {
		printf("Hello World\n");
		i++;
	} while (i < 10);

#endif

#if 0
	int x;
	printf("�D���Ȑ�������͂��Ă��������B\n");
	printf("���̐������A���̍��̋C�������J��Ԃ��܂��B\n");
	scanf_s("%d", &x);
#endif

}

#endif


#if 0
void TestArray() {
#if 0
	//int a[10];
	/*a[0],a[1],a[2],a[3],a[4]����`���ꂽ���ƂɂȂ�*/

	int b[5];
	int i;
	for (i = 0; i < 5; i++) {
		printf("��������͂��Ă��������B");
		scanf_s("%d", &b[i]);
	}
	printf("���͂��ꂽ�������t���ɏo�͂��܂��B\n");
	for (i = 4; i >= 0; i--) {
		printf("%d\n", b[i]);
	}

	//�z��錾���ɏ��������Ă���
	int c[4] = {0, 1, 2, 3};//������̏��������Ɣz�񐔂�ς���Ƃ�[]���̐������ς���
	int d[] = { 0, 1, 2, 3 };//������͐����������Ȃ��Ă�����
	//�錾���̍ŏ��̐������ɂ����l��^���邱�Ƃ��ł��Ȃ�
#endif
#if 0
	//�����̔z��E������

	char f; //�����̓��ꕨ�A������'�ň͂ށB(char f = 'a';)
	
	char str[5] = { 'a', 'b', 'c','d','\0' };
	char _str[] = {'a', 'b', 'c','\0'};
	//C����ł͕�����̍Ō��\0(null����)������
	//���{��̕����i�S�p�����j�́A���ʁA���p�p����2��������
	//�X�y�[�X�i��������̃X�y�[�X�j��1���������������

	char hello[] = "hello";//�Ƃ������A6�̗v�f������(\0���܂߂邽��)
	printf("�����ŏ��ɏK�����p�P���%s�ł��B\n", hello);
	// %s�͕�������Ӗ�����
	// %c�͕������Ӗ�����
	printf("hello[0]��%c�ł��B\n", hello[0]);
#endif
#if 0
	//���[�U�[���當����̓��͂��󂯎��
	//char e[20];
	//scanf_s("%s", e);//������ł�&��t���Ȃ�
	//1.scanf�ɂ́A�f�[�^���i�[����ϐ��̃�������̏ꏊ��^����B
	//2.���Ƃ��΁Ax��int�^�ϐ��Ƃ���ƁAx�̈ʒu��&x�ŗ^������B
	//3.�z��̏ꍇ�A�z���\�����O���u�z��̂����܂̈ʒu�v��\���B
	char name[101];
	int age;
	printf("�����O����͂��Ă��������B\n");
	scanf_s("%s", name);
	printf("%s����A����ɂ��́B\n", name);
	printf("�N�����͂��Ă��������B\n");
	scanf_s("%d", &age);
	printf("�Ȃ�قǁA%s����́A%d�΂Ȃ�ł��ˁB\n", name, age);
#endif
}
#endif

#if 0
void Ptr() {
#if 0
	int x = 10;
	
	int* p; //�|�C���^�ϐ�p

	p = &x; //�ϐ�x�̃A�h���X���������|�C���^p

	*p = 5;//p���ێ����Ă���A�h���X�ɂ���ϐ��Bx��5�������Ă���
	printf("x�̒��g��%d�ł��B\n",x);


	//& �A�h���X���Z�q
	//* �֐߉��Z�q(�t�Q�Ɖ��Z�q)
#endif
#if 0
	int i;
	int a[10];
	int *p;
	p = a; //&a�ł͂Ȃ��B&a[0]�Ȃ�OK
	for (i = 0; i < 10; i++) {
		*(p + i) = 100 + i; // �ua[i] = 100 + i;�v�Ɠ����B
	}

	printf("�z��a�̒��g��...\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
		
	}
	printf("\n�ł��B\n");
#endif
#if 0
	char *p = "hello";
	printf("p�̎w���������%s�ł��B\n", p);
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












































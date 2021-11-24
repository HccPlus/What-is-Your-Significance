#include<iostream>
#include<vector>

using namespace std;

class math
{

public:

	int pow(int n, int index)
	{
		int ret = 1;
		for (int i = 0; i < index; i++)
		{
			ret = ret * n;
		}
		return ret;
	}

};

class data_base
{

private:

	string a1[16];
	string a2[16];
	string a3[64];

	string self;

	int build()
	{

		a1[0] = "黄色";
		a1[1] = "红色";
		a1[2] = "黑色";
		a1[3] = "绿色";
		a1[4] = "晚霞";
		a1[5] = "繁星";
		a1[6] = "云朵";
		a1[7] = "月光";
		a1[8] = "小狗";
		a1[9] = "青草";
		a1[10] = "玫瑰";
		a1[11] = "森林";
		a1[12] = "海浪";
		a1[13] = "音乐";
		a1[14] = "程序";
		a1[15] = "化学";

		a2[0] = "沉默";
		a2[1] = "掌声";
		a2[2] = "希望";
		a2[3] = "自由";
		a2[4] = "坚强";
		a2[5] = "做梦";
		a2[6] = "干饭";
		a2[7] = "工作";
		a2[8] = "明天";
		a2[9] = "祈祷";
		a2[10] = "知足";
		a2[11] = "温柔";
		a2[12] = "相遇";
		a2[13] = "盛夏";
		a2[14] = "自传";
		a2[15] = "倔强";

		a3[0] = self;
		a3[1] = "你";
		a3[2] = "世界最偏僻的角落";
		a3[3] = "你的意义是什么";
		a3[4] = "高唱我心中的歌";
		a3[5] = "鬼东西";
		a3[6] = "阳光洒过的午后";
		a3[7] = "感恩节";
		a3[8] = "阴天快乐";
		a3[9] = "今天不emo";
		a3[10] = "海阔天空";
		a3[11] = "没有意义";
		a3[12] = "平凡快乐";
		a3[13] = "生日快乐";
		a3[14] = "安静的夜";
		a3[15] = "今天不加班";
		a3[16] = self;
		a3[17] = "营养快线";
		a3[18] = "维他柠檬茶";
		a3[19] = "早睡早起身体好";
		a3[20] = "吸铁石";
		a3[21] = "这瓜保熟";
		a3[22] = "好不容易心动一次";
		a3[23] = "计算机科学与技术";
		a3[24] = "追梦赤子心";
		a3[25] = "烛光终于冷却";
		a3[26] = "清澈碧蓝的天";
		a3[27] = "追忆一切的无可挽回";
		a3[28] = "The Best Is Yet To Come";
		a3[29] = "重新出发";
		a3[30] = "用心热爱世界";
		a3[31] = "明天的太阳依旧温暖";
		a3[32] = self;
		a3[33] = "永远相信美好的事情即将发生";
		a3[34] = "追求源于热爱";
		a3[35] = "不将就";
		a3[36] = "夜空中最亮的星";
		a3[37] = "沉睡的心灵";
		a3[38] = "用心呵护生活的所有美好";
		a3[39] = "明天的骄傲";
		a3[40] = "后来的我们";
		a3[41] = "最好的期许";
		a3[42] = "Windows 11";
		a3[43] = "氢气球";
		a3[44] = "万物有灵";
		a3[45] = "转眼走到自传终章";
		a3[46] = "疯狂世界";
		a3[47] = "黑暗森林";
		a3[48] = self;
		a3[49] = "流汗黄豆";
		a3[50] = "蚌埠住了";
		a3[51] = "差不多得了";
		a3[52] = "芜湖起飞";
		a3[53] = "未来可期";
		a3[54] = "为了那些不能放弃的我们究竟放弃了什么";
		a3[55] = "生活原本沉闷但跑起来就有风";
		a3[56] = "忽然间长大的我们";
		a3[57] = "一事无成的伟大";
		a3[58] = "A Sky Full of Stars";
		a3[59] = "Waiting For Love";
		a3[60] = "用心热爱";
		a3[61] = "曾梦想仗剑走天涯";
		a3[62] = "执着于年少时梦话";
		a3[63] = "意义";

		return 0;
	}

public:

	data_base(string self)
	{
		this->self = self;
		build();
	}

	int print(int n1, int n2, int n3)
	{
		cout << a1[n1] << "、" << a2[n2] << "和" << a3[n3];
		return 0;
	}

};

class manage
{

private:

	char* name_ptr;
	bool* ptr;
	int* seed_ptr;
	int* rand_ptr;

	string str;

	int str_size;
	int ascs;

	math m;

	int num1, num2, num3;

	bool able()
	{
		bool ret;
		if (str_size <= 64)
		{
			ret = true;
		}
		else
		{
			ret = false;
		}
		return ret;
	}

	int get_sum_ascii()
	{
		int n = 0;
		for (int i = 0; i < str_size; i++)
		{
			n += str[i];
		}
		ascs = n;
		return 0;
	}

	int build_array()
	{
		char* p = name_ptr;
		bool* q = new bool[8 * str_size];
		ptr = q;
		for (int i = 0; i < str_size; i++)
		{
			int ascii;
			ascii = *p;
			for (int j = 0; j < 8; j++)
			{
				int n = m.pow(2, 7 - j);
				*q = ascii / n;
				ascii = ascii % n;
				q++;
			}
			p++;
		}
		return 0;
	}

	int get_seed()
	{

		seed_ptr = new int[8];
		int* a = seed_ptr;
		bool* p = NULL;

		for (int i = 0; i < 8; i++)
		{
			a[i] = 0;
			p = ptr + i;
			for (int j = 0; j < str_size; j++)
			{
				a[i] = a[i] * 2;
				a[i] += *p;
				p += 8;
			}
		}

		//因为字符存储的特性使每个字节首个比特必为0
		//将首个随机数种子改为字符串ASCII码和值
		srand(ascs);
		a[0] = rand();

		for (int i = 0; i < 8; i++)
		{
			a[i] = a[i] * ascs;
		}

		return 0;
	}

	int get_rand()
	{
		rand_ptr = new int[8];
		for (int i = 0; i < 8; i++)
		{
			srand(seed_ptr[i]);
			rand_ptr[i] = rand();
		}
		return 0;
	}

	int get_num()
	{
		int rn;

		//数组[0], [1]两位决定num1的值
		rn = rand_ptr[0] % 4;
		num1 += rn;

		num1 = num1 * 4;
		rn = rand_ptr[1] % 4;
		num1 += rn;

		//[2], [3]两位决定num2的值
		rn = rand_ptr[2] % 4;
		num2 += rn;

		num2 = num2 * 4;
		rn = rand_ptr[3] % 4;
		num2 += rn;

		//[4]-[7]四位决定num3的值
		rn = rand_ptr[4] % 4;
		num3 += rn;

		num3 = num3 * 4;
		rn = rand_ptr[5] % 4;
		num3 += rn;

		num3 = num3 * 2;
		rn = rand_ptr[6] % 2;
		num3 += rn;

		num3 = num3 * 2;
		rn = rand_ptr[7] % 2;
		num3 += rn;

		return 0;
	}

public:

	manage(string s)
	{
		str = s;
		name_ptr = &str[0];
		ptr = NULL;
		seed_ptr = NULL;
		rand_ptr = NULL;
		str_size = s.size();
		ascs = 0;

		num1 = 0;
		num2 = 0;
		num3 = 0;
	}

	~manage()
	{
		name_ptr = NULL;

		delete[] ptr;
		ptr = NULL;

		delete[] seed_ptr;
		seed_ptr = NULL;

		delete[] rand_ptr;
		rand_ptr = NULL;
	}

	//进行运算得到8位bool型数组
	//若字符串长度大于64则return 1;
	int deal()
	{
		if (!able()) return 1;
		build_array();
		get_sum_ascii();
		get_seed();
		get_rand();
		get_num();
		return 0;
	}

	int out()
	{
		data_base db(str);
		cout << str << "的意义是";
		db.print(num1, num2, num3);
		cout << "。" << endl;

		return 0;
	}

};

class Solution
{

private:

	string name;

public:

	Solution()
	{
		cout << endl << endl;
		cout << '\t';
		cout << "你的意义是什么？" << endl;
		cout << '\t';
		cout << "每个人都有意义，每个意义一定给你温暖。" << endl;
		cout << endl;
		cout << '\t';
		cout << "（输入名字后按回车进入下一步。）" << endl;
		cout << '\t';
		cout << "名字：";
		cin >> name;
		cout << endl;

		manage m(name);
		m.deal();
		cout << '\t';
		m.out();
		cout << endl << endl;
	}
};

int main()
{
	Solution s;
	system("pause");
	return 0;
}

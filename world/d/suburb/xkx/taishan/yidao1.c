// Room: /d/shaolin/yidao1.c
// Date: YZC 96/01/19

inherit ROOM;




void create()
{
	set("short", "�����");
	set("long", @LONG
������һ����������Ĵ�����ϡ��������������������ӵ�
���̣����Ŵ󳵵������Ͼ��Ͽ��������������������ǳ����֡�
��ʱ������������������߷ɳ۶���������һ·���������ϵ���
�������ž�װ���¼��������еĻ���������ŵ�������������Щ
Щϰ��Ľ����ˡ���·��������������������֡�
LONG
	);

	set("exits", ([
		"west" : __DIR__"yidao",
		"northeast" : __DIR__"yidao2",
                "southeast" : "/d/suburb/xkx/quanzhou/qzroad1",
	]));

	set("objects",([
		__DIR__"npc/tangzi" : 2,
                "/d/suburb/xkx/quanzhou/npc/hai" : 1,
	]));

	set("outdoors", "taishan");
	setup();
	replace_program(ROOM);
}



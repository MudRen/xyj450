// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// create by snowcat jan 21 1998


inherit ROOM;

void create ()
{
  set ("short", "��ٵ�");
  set ("long", @LONG

һ��������ֱ�Ĵ�ٵ���ƽԭ���ɶ�����ԶԶ�����ӿ�������
��ƽ�����ݵ���ʮ�����ۡ���ٵ��Ķ���ͨ��Զ����

LONG);

  set("exits", ([
        "west" : __DIR__"east3",
        "east" : __DIR__"east5",
      ]));
  set("outdoors", __DIR__);

  setup();
}


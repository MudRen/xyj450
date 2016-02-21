// leader.c

inherit NPC;

void create()
{
	set_name("�϶ӳ�", ({ "leader" }));
	set("gender", "����");
	set("age", 30);
	set("long",
        	"������Ц�����ӣ�������С��פ�ذ��ڵ�С�ӳ���\n");

	set("attitude", "peaceful");

	set("str", 27);
	set("int", 25);

	set("combat_exp", 80000);
	
	set("chat_chance", 8);
	set("chat_msg", ({
	"�϶ӳ�˵������ӳ�������ط����죬������˵Щ����Ĺ��¸���������\n",
	"�϶ӳ�˵��������û�и������������������Ǵ�ӳ���·�ѣ�����������\n",
	"�϶ӳ�˵������������ڴ���������������һ���˾����Ҳ����ġ�\n",
	}) );
	
	set("inquiry", ([
		"��ʯ����" : "�����ʴ�ӳ��ɣ��Ҳ��Ǻ������\n",
		"�󱸱�" : "�󱸱���..........������ʲô����������\n",
	]) );
	
	set("force", 400);
	set("max_force", 400);
	set("force_factor", 5);

	set_skill("dodge", 60);
	set_skill("blade", 60);
	set_skill("parry", 60);
	set_skill("force", 60);
	set_skill("unarmed", 65);
	
	setup();

	carry_object( __DIR__"obj/blade")->wield();
}

		
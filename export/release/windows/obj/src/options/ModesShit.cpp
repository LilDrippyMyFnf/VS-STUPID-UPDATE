#include <hxcpp.h>

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_ModesShit
#include <options/ModesShit.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c5cf1c188d095944_34_new,"options.ModesShit","new",0x3939c752,"options.ModesShit.new","options/ModesShit.hx",34,0xcc5285df)
namespace options{

void ModesShit_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_c5cf1c188d095944_34_new)
HXLINE(  35)		this->title = HX_("Modes",90,93,85,9f);
HXLINE(  36)		this->rpcTitle = HX_("Modes Menu",4f,84,ce,a7);
HXLINE(  38)		 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Neutral Mode",1c,6d,30,60),HX_("If checked, This will enable modes: Easy,Normal,Hard",e3,07,f7,64),HX_("normalYes",40,01,95,ab),HX_("bool",2a,84,1b,41),true,null());
HXLINE(  43)		this->addOption(option);
HXLINE(  45)		 ::options::Option option1 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Erect Mode",1a,6f,b9,6a),HX_("If checked, This will only enable [ erect ] as a mode",44,e9,56,34),HX_("erectYes",9e,68,1d,c5),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  50)		this->addOption(option1);
HXLINE(  52)		 ::options::Option option2 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("D-Sides Mode",f0,63,de,55),HX_("If checked, this will add d-sides as a mode.",ce,8d,f0,45),HX_("sideYes",d0,ab,b5,80),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  57)		this->addOption(option2);
HXLINE(  59)		 ::options::Option option3 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Remixed Mode",5b,86,24,1f),HX_("If checked, this will add remixed as a mode",f5,47,6f,44),HX_("remixYes",de,64,fd,39),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  64)		this->addOption(option3);
HXLINE(  69)		 ::options::Option option4 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Encore Mode",3b,64,d4,42),HX_("If checked, This will enable encore mode",42,77,11,6d),HX_("encoreYes",bf,ff,09,2a),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  74)		this->addOption(option4);
HXLINE(  76)		super::__construct();
            	}

Dynamic ModesShit_obj::__CreateEmpty() { return new ModesShit_obj; }

void *ModesShit_obj::_hx_vtable = 0;

Dynamic ModesShit_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ModesShit_obj > _hx_result = new ModesShit_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModesShit_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x0cc50116) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cc50116;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x5c08e736 || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}


::hx::ObjectPtr< ModesShit_obj > ModesShit_obj::__new() {
	::hx::ObjectPtr< ModesShit_obj > __this = new ModesShit_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ModesShit_obj > ModesShit_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ModesShit_obj *__this = (ModesShit_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ModesShit_obj), true, "options.ModesShit"));
	*(void **)__this = ModesShit_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ModesShit_obj::ModesShit_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ModesShit_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ModesShit_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ModesShit_obj::__mClass;

void ModesShit_obj::__register()
{
	ModesShit_obj _hx_dummy;
	ModesShit_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.ModesShit",60,76,13,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ModesShit_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModesShit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModesShit_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options

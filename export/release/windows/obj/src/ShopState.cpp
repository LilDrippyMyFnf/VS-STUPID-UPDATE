#include <hxcpp.h>

#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_ShopState
#include <ShopState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEventManager
#include <flixel/input/mouse/FlxMouseEventManager.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_03069ec977d8fd51_10_new,"ShopState","new",0x0c8eff8d,"ShopState.new","ShopState.hx",10,0x8e67f083)
HX_LOCAL_STACK_FRAME(_hx_pos_03069ec977d8fd51_19_create,"ShopState","create",0xb57a31ef,"ShopState.create","ShopState.hx",19,0x8e67f083)
HX_LOCAL_STACK_FRAME(_hx_pos_03069ec977d8fd51_81_update,"ShopState","update",0xc07050fc,"ShopState.update","ShopState.hx",81,0x8e67f083)
HX_LOCAL_STACK_FRAME(_hx_pos_03069ec977d8fd51_51_update,"ShopState","update",0xc07050fc,"ShopState.update","ShopState.hx",51,0x8e67f083)
HX_LOCAL_STACK_FRAME(_hx_pos_03069ec977d8fd51_60_update,"ShopState","update",0xc07050fc,"ShopState.update","ShopState.hx",60,0x8e67f083)

void ShopState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_03069ec977d8fd51_10_new)
HXDLIN(  10)		super::__construct(TransIn,TransOut);
            	}

Dynamic ShopState_obj::__CreateEmpty() { return new ShopState_obj; }

void *ShopState_obj::_hx_vtable = 0;

Dynamic ShopState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShopState_obj > _hx_result = new ShopState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShopState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4b06aa5b) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x4b06aa5b;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void ShopState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_03069ec977d8fd51_19_create)
HXLINE(  20)		this->shopkeeper =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,100,100,null());
HXLINE(  21)		this->shopkeeper->loadGraphic(HX_("assets/shopkeeper.png",2f,3e,44,af),null(),null(),null(),null(),null());
HXLINE(  22)		this->add(this->shopkeeper);
HXLINE(  24)		this->items = ::Array_obj< ::Dynamic>::__new();
HXLINE(  25)		this->itemTexts = ::Array_obj< ::Dynamic>::__new();
HXLINE(  26)		 ::flixel::FlxSprite item;
HXLINE(  27)		 ::flixel::text::FlxText itemText;
HXLINE(  29)		{
HXLINE(  29)			int _g = 0;
HXDLIN(  29)			while((_g < 5)){
HXLINE(  29)				_g = (_g + 1);
HXDLIN(  29)				int i = (_g - 1);
HXLINE(  31)				item =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(150 + (i * 50)),200,null());
HXLINE(  32)				item->loadGraphic(((HX_("assets/item",5f,05,6d,b1) + i) + HX_(".png",3b,2d,bd,1e)),null(),null(),null(),null(),null());
HXLINE(  33)				this->items->push(item);
HXLINE(  34)				this->add(item);
HXLINE(  36)				Float item1 = item->x;
HXDLIN(  36)				Float item2 = item->y;
HXDLIN(  36)				Float itemText1 = (item2 + item->get_height());
HXDLIN(  36)				itemText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,item1,itemText1,item->get_width(),(HX_("Price: ",4f,1d,34,4a) + ((i + 1) * 10)),null(),null());
HXLINE(  37)				itemText->setFormat(null(),8,16777215,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  38)				this->itemTexts->push(itemText);
HXLINE(  39)				this->add(itemText);
            			}
            		}
HXLINE(  42)		this->moneyText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,HX_("Tri-Coins: 0",2a,11,95,86),null(),null());
HXLINE(  43)		this->moneyText->setFormat(null(),8,16777215,HX_("right",dc,0b,64,e9),null(),null(),null());
HXLINE(  44)		this->add(this->moneyText);
HXLINE(  46)		this->playerMoney = 0;
            	}


void ShopState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::ShopState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite e){
            			HX_GC_STACKFRAME(&_hx_pos_03069ec977d8fd51_81_update)
HXLINE(  82)			 ::ShopState _gthis1 = _gthis;
HXDLIN(  82)			_gthis1->playerMoney = (_gthis1->playerMoney + 10);
HXLINE(  83)			_gthis->moneyText->set_text((HX_("Tri-Coins: ",46,ac,e1,7e) + _gthis->playerMoney));
HXLINE(  84)			::haxe::Log_obj::trace((HX_("bought item with money left: ",af,03,e1,ea) + _gthis->playerMoney),::hx::SourceInfo(HX_("source/ShopState.hx",77,9d,85,93),84,HX_("ShopState",1b,35,c3,87),HX_("update",09,86,05,87)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_03069ec977d8fd51_51_update)
HXDLIN(  51)		 ::ShopState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  52)		this->super::update(elapsed);
HXLINE(  55)		{
HXLINE(  55)			int _g = 0;
HXDLIN(  55)			int _g1 = this->items->length;
HXDLIN(  55)			while((_g < _g1)){
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::ShopState,_gthis,int,i) HXARGC(1)
            				void _hx_run( ::flixel::FlxSprite e){
            					HX_STACKFRAME(&_hx_pos_03069ec977d8fd51_60_update)
HXLINE(  60)					if ((_gthis->playerMoney >= ((i + 1) * 10))) {
HXLINE(  62)						 ::ShopState _gthis1 = _gthis;
HXDLIN(  62)						_gthis1->playerMoney = (_gthis1->playerMoney - ((i + 1) * 10));
HXLINE(  63)						_gthis->moneyText->set_text((HX_("Tri-Coins: ",46,ac,e1,7e) + _gthis->playerMoney));
HXLINE(  66)						_gthis->remove(e,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  67)						_gthis->items->removeRange(i,1);
HXLINE(  68)						_gthis->remove(_gthis->itemTexts->__get(i).StaticCast<  ::flixel::text::FlxText >(),null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  69)						_gthis->itemTexts->removeRange(i,1);
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  55)				_g = (_g + 1);
HXDLIN(  55)				int i = (_g - 1);
HXLINE(  57)				 ::Dynamic onMouseDown =  ::Dynamic(new _hx_Closure_0(_gthis,i));
HXDLIN(  57)				::flixel::input::mouse::FlxMouseEventManager_obj::instance->add(this->items->__get(i).StaticCast<  ::flixel::FlxSprite >(),onMouseDown,null(),null(),null(),null(),null(),null(),null()).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  74)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  74)		if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE(  75)			::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE(  76)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  76)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
HXLINE(  80)		 ::Dynamic onMouseDown =  ::Dynamic(new _hx_Closure_1(_gthis));
HXDLIN(  80)		::flixel::input::mouse::FlxMouseEventManager_obj::instance->add(this->shopkeeper,onMouseDown,null(),null(),null(),null(),null(),null(),null()).StaticCast<  ::flixel::FlxSprite >();
            	}



::hx::ObjectPtr< ShopState_obj > ShopState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< ShopState_obj > __this = new ShopState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< ShopState_obj > ShopState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	ShopState_obj *__this = (ShopState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShopState_obj), true, "ShopState"));
	*(void **)__this = ShopState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

ShopState_obj::ShopState_obj()
{
}

void ShopState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShopState);
	HX_MARK_MEMBER_NAME(shopkeeper,"shopkeeper");
	HX_MARK_MEMBER_NAME(items,"items");
	HX_MARK_MEMBER_NAME(itemTexts,"itemTexts");
	HX_MARK_MEMBER_NAME(moneyText,"moneyText");
	HX_MARK_MEMBER_NAME(playerMoney,"playerMoney");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShopState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shopkeeper,"shopkeeper");
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(itemTexts,"itemTexts");
	HX_VISIT_MEMBER_NAME(moneyText,"moneyText");
	HX_VISIT_MEMBER_NAME(playerMoney,"playerMoney");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ShopState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return ::hx::Val( items ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemTexts") ) { return ::hx::Val( itemTexts ); }
		if (HX_FIELD_EQ(inName,"moneyText") ) { return ::hx::Val( moneyText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shopkeeper") ) { return ::hx::Val( shopkeeper ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"playerMoney") ) { return ::hx::Val( playerMoney ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShopState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemTexts") ) { itemTexts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moneyText") ) { moneyText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shopkeeper") ) { shopkeeper=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"playerMoney") ) { playerMoney=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShopState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shopkeeper",a8,05,8a,44));
	outFields->push(HX_("items",00,ac,0c,c2));
	outFields->push(HX_("itemTexts",13,b1,84,0d));
	outFields->push(HX_("moneyText",0d,d3,3c,c1));
	outFields->push(HX_("playerMoney",1f,5f,3e,13));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShopState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(ShopState_obj,shopkeeper),HX_("shopkeeper",a8,05,8a,44)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShopState_obj,items),HX_("items",00,ac,0c,c2)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShopState_obj,itemTexts),HX_("itemTexts",13,b1,84,0d)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ShopState_obj,moneyText),HX_("moneyText",0d,d3,3c,c1)},
	{::hx::fsInt,(int)offsetof(ShopState_obj,playerMoney),HX_("playerMoney",1f,5f,3e,13)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShopState_obj_sStaticStorageInfo = 0;
#endif

static ::String ShopState_obj_sMemberFields[] = {
	HX_("shopkeeper",a8,05,8a,44),
	HX_("items",00,ac,0c,c2),
	HX_("itemTexts",13,b1,84,0d),
	HX_("moneyText",0d,d3,3c,c1),
	HX_("playerMoney",1f,5f,3e,13),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class ShopState_obj::__mClass;

void ShopState_obj::__register()
{
	ShopState_obj _hx_dummy;
	ShopState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ShopState",1b,35,c3,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShopState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShopState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShopState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShopState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}


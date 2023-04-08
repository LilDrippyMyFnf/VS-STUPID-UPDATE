#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
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
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSaveStatus
#include <flixel/util/FlxSaveStatus.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b1aa19ce59d84264_23_new,"flixel.system.ui.FlxSoundTray","new",0x221b6352,"flixel.system.ui.FlxSoundTray.new","flixel/system/ui/FlxSoundTray.hx",23,0x04618f9d)
HX_LOCAL_STACK_FRAME(_hx_pos_b1aa19ce59d84264_116_update,"flixel.system.ui.FlxSoundTray","update",0x9cbad657,"flixel.system.ui.FlxSoundTray.update","flixel/system/ui/FlxSoundTray.hx",116,0x04618f9d)
HX_LOCAL_STACK_FRAME(_hx_pos_b1aa19ce59d84264_146_show,"flixel.system.ui.FlxSoundTray","show",0xb92bd5cb,"flixel.system.ui.FlxSoundTray.show","flixel/system/ui/FlxSoundTray.hx",146,0x04618f9d)
HX_LOCAL_STACK_FRAME(_hx_pos_b1aa19ce59d84264_179_screenCenter,"flixel.system.ui.FlxSoundTray","screenCenter",0x0f14ad2f,"flixel.system.ui.FlxSoundTray.screenCenter","flixel/system/ui/FlxSoundTray.hx",179,0x04618f9d)
namespace flixel{
namespace _hx_system{
namespace ui{

void FlxSoundTray_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b1aa19ce59d84264_23_new)
HXLINE(  54)		this->silent = false;
HXLINE(  51)		this->volumeDownSound = HX_("flixel/sounds/beep",e6,b5,a9,33);
HXLINE(  48)		this->volumeUpSound = HX_("flixel/sounds/beep",e6,b5,a9,33);
HXLINE(  45)		this->_defaultScale = ((Float)2.0);
HXLINE(  43)		this->_width = 80;
HXLINE(  62)		super::__construct();
HXLINE(  64)		this->set_visible(false);
HXLINE(  65)		this->set_scaleX(this->_defaultScale);
HXLINE(  66)		this->set_scaleY(this->_defaultScale);
HXLINE(  67)		 ::openfl::display::Bitmap tmp =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->_width,30,true,(int)2130706432),null(),null());
HXLINE(  68)		this->screenCenter();
HXLINE(  69)		this->addChild(tmp);
HXLINE(  71)		 ::openfl::text::TextField text =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  72)		text->set_width(tmp->get_width());
HXLINE(  73)		text->set_height(tmp->get_height());
HXLINE(  74)		text->set_multiline(true);
HXLINE(  75)		text->set_wordWrap(true);
HXLINE(  76)		text->set_selectable(false);
HXLINE(  84)		 ::openfl::text::TextFormat dtf =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,::flixel::_hx_system::FlxAssets_obj::FONT_DEFAULT,10,16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  85)		dtf->align = 0;
HXLINE(  86)		text->set_defaultTextFormat(dtf);
HXLINE(  87)		this->addChild(text);
HXLINE(  88)		text->set_text(HX_("VOLUME",da,d5,d5,11));
HXLINE(  89)		text->set_y(( (Float)(16) ));
HXLINE(  91)		int bx = 10;
HXLINE(  92)		int by = 14;
HXLINE(  93)		this->_bars = ::Array_obj< ::Dynamic>::__new();
HXLINE(  95)		{
HXLINE(  95)			int _g = 0;
HXDLIN(  95)			while((_g < 10)){
HXLINE(  95)				_g = (_g + 1);
HXDLIN(  95)				int i = (_g - 1);
HXLINE(  97)				tmp =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,4,(i + 1),false,-1),null(),null());
HXLINE(  98)				tmp->set_x(( (Float)(bx) ));
HXLINE(  99)				tmp->set_y(( (Float)(by) ));
HXLINE( 100)				this->addChild(tmp);
HXLINE( 101)				this->_bars->push(tmp);
HXLINE( 102)				bx = (bx + 6);
HXLINE( 103)				by = (by - 1);
            			}
            		}
HXLINE( 106)		this->set_y(-(this->get_height()));
HXLINE( 107)		this->set_visible(false);
            	}

Dynamic FlxSoundTray_obj::__CreateEmpty() { return new FlxSoundTray_obj; }

void *FlxSoundTray_obj::_hx_vtable = 0;

Dynamic FlxSoundTray_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSoundTray_obj > _hx_result = new FlxSoundTray_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSoundTray_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x232a5d76 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void FlxSoundTray_obj::update(Float MS){
            	HX_STACKFRAME(&_hx_pos_b1aa19ce59d84264_116_update)
HXDLIN( 116)		if ((this->_timer > 0)) {
HXLINE( 118)			 ::flixel::_hx_system::ui::FlxSoundTray _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 118)			_hx_tmp->_timer = (_hx_tmp->_timer - (MS / ( (Float)(1000) )));
            		}
            		else {
HXLINE( 120)			Float _hx_tmp = this->get_y();
HXDLIN( 120)			if ((_hx_tmp > -(this->get_height()))) {
HXLINE( 122)				Float _hx_tmp = this->get_y();
HXDLIN( 122)				this->set_y((_hx_tmp - (((MS / ( (Float)(1000) )) * ( (Float)(::flixel::FlxG_obj::height) )) * ( (Float)(2) ))));
HXLINE( 124)				Float _hx_tmp1 = this->get_y();
HXDLIN( 124)				if ((_hx_tmp1 <= -(this->get_height()))) {
HXLINE( 126)					this->set_visible(false);
HXLINE( 127)					this->active = false;
HXLINE( 130)					 ::flixel::util::FlxSaveStatus _g = ::flixel::FlxG_obj::save->status;
HXDLIN( 130)					bool _hx_tmp;
HXDLIN( 130)					if ((_g->_hx_getIndex() == 1)) {
HXLINE( 130)						::String _g1 = _g->_hx_getString(0);
HXDLIN( 130)						::String _g2 = _g->_hx_getString(1);
HXDLIN( 130)						_hx_tmp = true;
            					}
            					else {
HXLINE( 130)						_hx_tmp = false;
            					}
HXDLIN( 130)					if (_hx_tmp) {
HXLINE( 132)						::flixel::FlxG_obj::save->data->__SetField(HX_("mute",d9,6e,65,48),::flixel::FlxG_obj::sound->muted,::hx::paccDynamic);
HXLINE( 133)						::flixel::FlxG_obj::save->data->__SetField(HX_("volume",da,29,53,5f),::flixel::FlxG_obj::sound->volume,::hx::paccDynamic);
HXLINE( 134)						::flixel::FlxG_obj::save->flush(null());
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundTray_obj,update,(void))

void FlxSoundTray_obj::show(::hx::Null< bool >  __o_up){
            		bool up = __o_up.Default(false);
            	HX_STACKFRAME(&_hx_pos_b1aa19ce59d84264_146_show)
HXLINE( 147)		if (!(this->silent)) {
HXLINE( 149)			::String sound;
HXDLIN( 149)			if (up) {
HXLINE( 149)				sound = this->volumeUpSound;
            			}
            			else {
HXLINE( 149)				sound = this->volumeDownSound;
            			}
HXDLIN( 149)			 ::openfl::media::Sound sound1 = ::flixel::_hx_system::FlxAssets_obj::getSound(sound);
HXLINE( 150)			if (::hx::IsNotNull( sound1 )) {
HXLINE( 151)				::flixel::FlxG_obj::sound->load(sound1,null(),null(),null(),null(),null(),null(),null(),null())->play(null(),null(),null());
            			}
            		}
HXLINE( 154)		this->_timer = ( (Float)(1) );
HXLINE( 155)		this->set_y(( (Float)(0) ));
HXLINE( 156)		this->set_visible(true);
HXLINE( 157)		this->active = true;
HXLINE( 158)		int globalVolume = ::Math_obj::round((::flixel::FlxG_obj::sound->volume * ( (Float)(10) )));
HXLINE( 160)		if (::flixel::FlxG_obj::sound->muted) {
HXLINE( 162)			globalVolume = 0;
            		}
HXLINE( 165)		{
HXLINE( 165)			int _g = 0;
HXDLIN( 165)			int _g1 = this->_bars->length;
HXDLIN( 165)			while((_g < _g1)){
HXLINE( 165)				_g = (_g + 1);
HXDLIN( 165)				int i = (_g - 1);
HXLINE( 167)				if ((i < globalVolume)) {
HXLINE( 169)					this->_bars->__get(i).StaticCast<  ::openfl::display::Bitmap >()->set_alpha(( (Float)(1) ));
            				}
            				else {
HXLINE( 173)					this->_bars->__get(i).StaticCast<  ::openfl::display::Bitmap >()->set_alpha(((Float)0.5));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundTray_obj,show,(void))

void FlxSoundTray_obj::screenCenter(){
            	HX_STACKFRAME(&_hx_pos_b1aa19ce59d84264_179_screenCenter)
HXLINE( 180)		this->set_scaleX(this->_defaultScale);
HXLINE( 181)		this->set_scaleY(this->_defaultScale);
HXLINE( 183)		int _hx_tmp = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXDLIN( 183)		Float _hx_tmp1 = (((Float)0.5) * (( (Float)(_hx_tmp) ) - (( (Float)(this->_width) ) * this->_defaultScale)));
HXDLIN( 183)		this->set_x((_hx_tmp1 - ::flixel::FlxG_obj::game->get_x()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSoundTray_obj,screenCenter,(void))


::hx::ObjectPtr< FlxSoundTray_obj > FlxSoundTray_obj::__new() {
	::hx::ObjectPtr< FlxSoundTray_obj > __this = new FlxSoundTray_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxSoundTray_obj > FlxSoundTray_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxSoundTray_obj *__this = (FlxSoundTray_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSoundTray_obj), true, "flixel.system.ui.FlxSoundTray"));
	*(void **)__this = FlxSoundTray_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSoundTray_obj::FlxSoundTray_obj()
{
}

void FlxSoundTray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSoundTray);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_bars,"_bars");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_defaultScale,"_defaultScale");
	HX_MARK_MEMBER_NAME(volumeUpSound,"volumeUpSound");
	HX_MARK_MEMBER_NAME(volumeDownSound,"volumeDownSound");
	HX_MARK_MEMBER_NAME(silent,"silent");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSoundTray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_bars,"_bars");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_defaultScale,"_defaultScale");
	HX_VISIT_MEMBER_NAME(volumeUpSound,"volumeUpSound");
	HX_VISIT_MEMBER_NAME(volumeDownSound,"volumeDownSound");
	HX_VISIT_MEMBER_NAME(silent,"silent");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxSoundTray_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_bars") ) { return ::hx::Val( _bars ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"_timer") ) { return ::hx::Val( _timer ); }
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"silent") ) { return ::hx::Val( silent ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return ::hx::Val( screenCenter_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_defaultScale") ) { return ::hx::Val( _defaultScale ); }
		if (HX_FIELD_EQ(inName,"volumeUpSound") ) { return ::hx::Val( volumeUpSound ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"volumeDownSound") ) { return ::hx::Val( volumeDownSound ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSoundTray_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_bars") ) { _bars=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"silent") ) { silent=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_defaultScale") ) { _defaultScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volumeUpSound") ) { volumeUpSound=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"volumeDownSound") ) { volumeDownSound=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSoundTray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("_timer",06,07,1d,0c));
	outFields->push(HX_("_bars",1f,03,22,f4));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_defaultScale",e8,9c,98,10));
	outFields->push(HX_("volumeUpSound",ba,f9,db,f4));
	outFields->push(HX_("volumeDownSound",d3,0b,9f,83));
	outFields->push(HX_("silent",95,76,cd,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSoundTray_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxSoundTray_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsFloat,(int)offsetof(FlxSoundTray_obj,_timer),HX_("_timer",06,07,1d,0c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxSoundTray_obj,_bars),HX_("_bars",1f,03,22,f4)},
	{::hx::fsInt,(int)offsetof(FlxSoundTray_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsFloat,(int)offsetof(FlxSoundTray_obj,_defaultScale),HX_("_defaultScale",e8,9c,98,10)},
	{::hx::fsString,(int)offsetof(FlxSoundTray_obj,volumeUpSound),HX_("volumeUpSound",ba,f9,db,f4)},
	{::hx::fsString,(int)offsetof(FlxSoundTray_obj,volumeDownSound),HX_("volumeDownSound",d3,0b,9f,83)},
	{::hx::fsBool,(int)offsetof(FlxSoundTray_obj,silent),HX_("silent",95,76,cd,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSoundTray_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSoundTray_obj_sMemberFields[] = {
	HX_("active",c6,41,46,16),
	HX_("_timer",06,07,1d,0c),
	HX_("_bars",1f,03,22,f4),
	HX_("_width",47,fd,49,c6),
	HX_("_defaultScale",e8,9c,98,10),
	HX_("volumeUpSound",ba,f9,db,f4),
	HX_("volumeDownSound",d3,0b,9f,83),
	HX_("silent",95,76,cd,b7),
	HX_("update",09,86,05,87),
	HX_("show",fd,d4,52,4c),
	HX_("screenCenter",61,2e,f9,e2),
	::String(null()) };

::hx::Class FlxSoundTray_obj::__mClass;

void FlxSoundTray_obj::__register()
{
	FlxSoundTray_obj _hx_dummy;
	FlxSoundTray_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.ui.FlxSoundTray",60,12,f7,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSoundTray_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSoundTray_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSoundTray_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSoundTray_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace ui

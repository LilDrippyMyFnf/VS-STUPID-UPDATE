#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEvent
#include <flixel/input/mouse/FlxMouseEvent.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEventManager
#include <flixel/input/mouse/FlxMouseEventManager.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7737cad62ef16250_44_new,"flixel.input.mouse.FlxMouseEventManager","new",0xae332b17,"flixel.input.mouse.FlxMouseEventManager.new","flixel/input/mouse/FlxMouseEventManager.hx",44,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_83_destroy,"flixel.input.mouse.FlxMouseEventManager","destroy",0x1c6eaf31,"flixel.input.mouse.FlxMouseEventManager.destroy","flixel/input/mouse/FlxMouseEventManager.hx",83,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_92_update,"flixel.input.mouse.FlxMouseEventManager","update",0x84b077b2,"flixel.input.mouse.FlxMouseEventManager.update","flixel/input/mouse/FlxMouseEventManager.hx",92,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_271_addEvent,"flixel.input.mouse.FlxMouseEventManager","addEvent",0xe2ab5c22,"flixel.input.mouse.FlxMouseEventManager.addEvent","flixel/input/mouse/FlxMouseEventManager.hx",271,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_308_add,"flixel.input.mouse.FlxMouseEventManager","add",0xae294cd8,"flixel.input.mouse.FlxMouseEventManager.add","flixel/input/mouse/FlxMouseEventManager.hx",308,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_319_remove,"flixel.input.mouse.FlxMouseEventManager","remove",0x02338ded,"flixel.input.mouse.FlxMouseEventManager.remove","flixel/input/mouse/FlxMouseEventManager.hx",319,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_335_removeAll,"flixel.input.mouse.FlxMouseEventManager","removeAll",0xef9bd534,"flixel.input.mouse.FlxMouseEventManager.removeAll","flixel/input/mouse/FlxMouseEventManager.hx",335,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_358_reorder,"flixel.input.mouse.FlxMouseEventManager","reorder",0x13a3c632,"flixel.input.mouse.FlxMouseEventManager.reorder","flixel/input/mouse/FlxMouseEventManager.hx",358,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_376_setMouseDownCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseDownCallback",0xe8b31b73,"flixel.input.mouse.FlxMouseEventManager.setMouseDownCallback","flixel/input/mouse/FlxMouseEventManager.hx",376,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_392_setMouseUpCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseUpCallback",0x3b6a476c,"flixel.input.mouse.FlxMouseEventManager.setMouseUpCallback","flixel/input/mouse/FlxMouseEventManager.hx",392,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_409_setMouseClickCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseClickCallback",0x94b58581,"flixel.input.mouse.FlxMouseEventManager.setMouseClickCallback","flixel/input/mouse/FlxMouseEventManager.hx",409,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_426_setMouseDoubleClickCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseDoubleClickCallback",0x553b8ab0,"flixel.input.mouse.FlxMouseEventManager.setMouseDoubleClickCallback","flixel/input/mouse/FlxMouseEventManager.hx",426,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_442_setMouseOverCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseOverCallback",0x088af665,"flixel.input.mouse.FlxMouseEventManager.setMouseOverCallback","flixel/input/mouse/FlxMouseEventManager.hx",442,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_458_setMouseOutCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseOutCallback",0x235b22c7,"flixel.input.mouse.FlxMouseEventManager.setMouseOutCallback","flixel/input/mouse/FlxMouseEventManager.hx",458,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_475_setMouseMoveCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseMoveCallback",0x0da6cd22,"flixel.input.mouse.FlxMouseEventManager.setMouseMoveCallback","flixel/input/mouse/FlxMouseEventManager.hx",475,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_492_setMouseWheelCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseWheelCallback",0x50ce48d4,"flixel.input.mouse.FlxMouseEventManager.setMouseWheelCallback","flixel/input/mouse/FlxMouseEventManager.hx",492,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_507_setObjectMouseEnabled,"flixel.input.mouse.FlxMouseEventManager","setObjectMouseEnabled",0xe24566f4,"flixel.input.mouse.FlxMouseEventManager.setObjectMouseEnabled","flixel/input/mouse/FlxMouseEventManager.hx",507,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_520_isObjectMouseEnabled,"flixel.input.mouse.FlxMouseEventManager","isObjectMouseEnabled",0x6e5fac2e,"flixel.input.mouse.FlxMouseEventManager.isObjectMouseEnabled","flixel/input/mouse/FlxMouseEventManager.hx",520,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_539_setObjectMouseChildren,"flixel.input.mouse.FlxMouseEventManager","setObjectMouseChildren",0x9e2bdb6c,"flixel.input.mouse.FlxMouseEventManager.setObjectMouseChildren","flixel/input/mouse/FlxMouseEventManager.hx",539,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_567_isObjectMouseChildren,"flixel.input.mouse.FlxMouseEventManager","isObjectMouseChildren",0xa90e28f2,"flixel.input.mouse.FlxMouseEventManager.isObjectMouseChildren","flixel/input/mouse/FlxMouseEventManager.hx",567,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_584_setObjectMouseButtons,"flixel.input.mouse.FlxMouseEventManager","setObjectMouseButtons",0x2e89b4b4,"flixel.input.mouse.FlxMouseEventManager.setObjectMouseButtons","flixel/input/mouse/FlxMouseEventManager.hx",584,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_596_traverseFlxGroup,"flixel.input.mouse.FlxMouseEventManager","traverseFlxGroup",0xb5503c28,"flixel.input.mouse.FlxMouseEventManager.traverseFlxGroup","flixel/input/mouse/FlxMouseEventManager.hx",596,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_616_get,"flixel.input.mouse.FlxMouseEventManager","get",0xae2ddb4d,"flixel.input.mouse.FlxMouseEventManager.get","flixel/input/mouse/FlxMouseEventManager.hx",616,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_634_sortByMouseChildren,"flixel.input.mouse.FlxMouseEventManager","sortByMouseChildren",0x74c04b26,"flixel.input.mouse.FlxMouseEventManager.sortByMouseChildren","flixel/input/mouse/FlxMouseEventManager.hx",634,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_649_clearRegistry,"flixel.input.mouse.FlxMouseEventManager","clearRegistry",0xaf4f39e1,"flixel.input.mouse.FlxMouseEventManager.clearRegistry","flixel/input/mouse/FlxMouseEventManager.hx",649,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_657_checkOverlap,"flixel.input.mouse.FlxMouseEventManager","checkOverlap",0x58381208,"flixel.input.mouse.FlxMouseEventManager.checkOverlap","flixel/input/mouse/FlxMouseEventManager.hx",657,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_695_checkOverlapWithPoint,"flixel.input.mouse.FlxMouseEventManager","checkOverlapWithPoint",0x0bd96542,"flixel.input.mouse.FlxMouseEventManager.checkOverlapWithPoint","flixel/input/mouse/FlxMouseEventManager.hx",695,0x750c3856)
namespace flixel{
namespace input{
namespace mouse{

void FlxMouseEventManager_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_44_new)
HXLINE(  60)		this->maxDoubleClickDelay = 500;
HXLINE(  54)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  54)		point->_inPool = false;
HXDLIN(  54)		this->_point = point;
HXLINE(  51)		this->mouseClickedTime = -1;
HXLINE(  49)		this->_clickList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  48)		this->_downList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  47)		this->_overList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  46)		this->_list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  66)		super::__construct();
HXLINE(  68)		::flixel::input::mouse::FlxMouseEventManager_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  70)		if (::hx::IsNotNull( this->_list )) {
HXLINE(  72)			this->clearRegistry();
            		}
HXLINE(  74)		this->_list = ::Array_obj< ::Dynamic>::__new();
HXLINE(  75)		this->_overList = ::Array_obj< ::Dynamic>::__new();
HXLINE(  76)		this->_downList = ::Array_obj< ::Dynamic>::__new();
HXLINE(  77)		this->_clickList = ::Array_obj< ::Dynamic>::__new();
HXLINE(  79)		::flixel::FlxG_obj::signals->preStateSwitch->add(this->removeAll_dyn());
            	}

Dynamic FlxMouseEventManager_obj::__CreateEmpty() { return new FlxMouseEventManager_obj; }

void *FlxMouseEventManager_obj::_hx_vtable = 0;

Dynamic FlxMouseEventManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxMouseEventManager_obj > _hx_result = new FlxMouseEventManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxMouseEventManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f3827fd) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3f3827fd;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxMouseEventManager_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_83_destroy)
HXLINE(  84)		this->clearRegistry();
HXLINE(  85)		this->_point = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_point)) );
HXLINE(  86)		::flixel::FlxG_obj::signals->preStateSwitch->remove(this->removeAll_dyn());
HXLINE(  87)		::flixel::input::mouse::FlxMouseEventManager_obj::instance = null();
HXLINE(  88)		this->super::destroy();
            	}


void FlxMouseEventManager_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_92_update)
HXLINE(  93)		this->super::update(elapsed);
HXLINE(  95)		::Array< ::Dynamic> currentOverObjects = ::Array_obj< ::Dynamic>::__new();
HXLINE(  97)		{
HXLINE(  97)			int _g = 0;
HXDLIN(  97)			::Array< ::Dynamic> _g1 = this->_list;
HXDLIN(  97)			while((_g < _g1->length)){
HXLINE(  97)				 ::flixel::input::mouse::FlxMouseEvent event = _g1->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN(  97)				_g = (_g + 1);
HXLINE(  99)				bool _hx_tmp;
HXDLIN(  99)				bool _hx_tmp1;
HXDLIN(  99)				bool _hx_tmp2;
HXDLIN(  99)				if (event->object->alive) {
HXLINE(  99)					_hx_tmp2 = !(event->object->exists);
            				}
            				else {
HXLINE(  99)					_hx_tmp2 = true;
            				}
HXDLIN(  99)				if (!(_hx_tmp2)) {
HXLINE(  99)					_hx_tmp1 = !(event->object->visible);
            				}
            				else {
HXLINE(  99)					_hx_tmp1 = true;
            				}
HXDLIN(  99)				if (!(_hx_tmp1)) {
HXLINE(  99)					_hx_tmp = !(event->mouseEnabled);
            				}
            				else {
HXLINE(  99)					_hx_tmp = true;
            				}
HXDLIN(  99)				if (_hx_tmp) {
HXLINE( 101)					continue;
            				}
HXLINE( 104)				if (this->checkOverlap(event)) {
HXLINE( 106)					currentOverObjects->push(event);
HXLINE( 108)					if (!(event->mouseChildren)) {
HXLINE( 110)						goto _hx_goto_2;
            					}
            				}
            			}
            			_hx_goto_2:;
            		}
HXLINE( 116)		{
HXLINE( 116)			int _g2 = 0;
HXDLIN( 116)			::Array< ::Dynamic> _g3 = this->_overList;
HXDLIN( 116)			while((_g2 < _g3->length)){
HXLINE( 116)				 ::flixel::input::mouse::FlxMouseEvent over = _g3->__get(_g2).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 116)				_g2 = (_g2 + 1);
HXLINE( 118)				if (::hx::IsNotNull( over->onMouseOut )) {
HXLINE( 122)					bool _hx_tmp;
HXDLIN( 122)					bool _hx_tmp1;
HXDLIN( 122)					if (over->object->exists) {
HXLINE( 122)						_hx_tmp1 = !(over->object->visible);
            					}
            					else {
HXLINE( 122)						_hx_tmp1 = true;
            					}
HXDLIN( 122)					if (!(_hx_tmp1)) {
HXLINE( 122)						_hx_tmp = ::hx::IsNull( this->get(over->object,currentOverObjects) );
            					}
            					else {
HXLINE( 122)						_hx_tmp = true;
            					}
HXDLIN( 122)					if (_hx_tmp) {
HXLINE( 124)						over->onMouseOut(over->object);
            					}
            				}
            			}
            		}
HXLINE( 130)		{
HXLINE( 130)			int _g4 = 0;
HXDLIN( 130)			while((_g4 < currentOverObjects->length)){
HXLINE( 130)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g4).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 130)				_g4 = (_g4 + 1);
HXLINE( 132)				if (::hx::IsNotNull( current->onMouseOver )) {
HXLINE( 134)					bool _hx_tmp;
HXDLIN( 134)					bool _hx_tmp1;
HXDLIN( 134)					if (current->object->exists) {
HXLINE( 134)						_hx_tmp1 = current->object->visible;
            					}
            					else {
HXLINE( 134)						_hx_tmp1 = false;
            					}
HXDLIN( 134)					if (_hx_tmp1) {
HXLINE( 134)						_hx_tmp = ::hx::IsNull( this->get(current->object,this->_overList) );
            					}
            					else {
HXLINE( 134)						_hx_tmp = false;
            					}
HXDLIN( 134)					if (_hx_tmp) {
HXLINE( 136)						current->onMouseOver(current->object);
            					}
            				}
            			}
            		}
HXLINE( 144)		if (!(::flixel::FlxG_obj::mouse->enabled)) {
HXLINE( 145)			return;
            		}
HXLINE( 148)		 ::flixel::input::mouse::FlxMouse _this = ::flixel::FlxG_obj::mouse;
HXDLIN( 148)		bool _hx_tmp;
HXDLIN( 148)		if ((_this->_prevX == _this->x)) {
HXLINE( 148)			_hx_tmp = (_this->_prevY != _this->y);
            		}
            		else {
HXLINE( 148)			_hx_tmp = true;
            		}
HXDLIN( 148)		if (_hx_tmp) {
HXLINE( 150)			int _g = 0;
HXDLIN( 150)			while((_g < currentOverObjects->length)){
HXLINE( 150)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 150)				_g = (_g + 1);
HXLINE( 152)				bool _hx_tmp;
HXDLIN( 152)				bool _hx_tmp1;
HXDLIN( 152)				if (::hx::IsNotNull( current->onMouseMove )) {
HXLINE( 152)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 152)					_hx_tmp1 = false;
            				}
HXDLIN( 152)				if (_hx_tmp1) {
HXLINE( 152)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 152)					_hx_tmp = false;
            				}
HXDLIN( 152)				if (_hx_tmp) {
HXLINE( 154)					current->onMouseMove(current->object);
            				}
            			}
            		}
HXLINE( 160)		{
HXLINE( 160)			int _g5 = 0;
HXDLIN( 160)			while((_g5 < currentOverObjects->length)){
HXLINE( 160)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g5).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 160)				_g5 = (_g5 + 1);
HXLINE( 162)				bool _hx_tmp;
HXDLIN( 162)				bool _hx_tmp1;
HXDLIN( 162)				if (::hx::IsNotNull( current->onMouseDown )) {
HXLINE( 162)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 162)					_hx_tmp1 = false;
            				}
HXDLIN( 162)				if (_hx_tmp1) {
HXLINE( 162)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 162)					_hx_tmp = false;
            				}
HXDLIN( 162)				if (_hx_tmp) {
HXLINE( 164)					int _g = 0;
HXDLIN( 164)					::Array< int > _g1 = current->mouseButtons;
HXDLIN( 164)					while((_g < _g1->length)){
HXLINE( 164)						int buttonID = _g1->__get(_g);
HXDLIN( 164)						_g = (_g + 1);
HXLINE( 166)						if ((::flixel::input::mouse::FlxMouseButton_obj::getByID(buttonID)->current == 2)) {
HXLINE( 168)							current->onMouseDown(current->object);
            						}
            					}
            				}
            			}
            		}
HXLINE( 175)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 177)			int _g = 0;
HXDLIN( 177)			while((_g < currentOverObjects->length)){
HXLINE( 177)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 177)				_g = (_g + 1);
HXLINE( 179)				bool _hx_tmp;
HXDLIN( 179)				bool _hx_tmp1;
HXDLIN( 179)				bool _hx_tmp2;
HXDLIN( 179)				if (::hx::IsNull( current->onMouseClick )) {
HXLINE( 179)					_hx_tmp2 = ::hx::IsNotNull( current->onMouseDoubleClick );
            				}
            				else {
HXLINE( 179)					_hx_tmp2 = true;
            				}
HXDLIN( 179)				if (_hx_tmp2) {
HXLINE( 179)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 179)					_hx_tmp1 = false;
            				}
HXDLIN( 179)				if (_hx_tmp1) {
HXLINE( 179)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 179)					_hx_tmp = false;
            				}
HXDLIN( 179)				if (_hx_tmp) {
HXLINE( 183)					this->_downList->push(current);
            				}
            			}
            		}
HXLINE( 189)		{
HXLINE( 189)			int _g6 = 0;
HXDLIN( 189)			while((_g6 < currentOverObjects->length)){
HXLINE( 189)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g6).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 189)				_g6 = (_g6 + 1);
HXLINE( 191)				bool _hx_tmp;
HXDLIN( 191)				bool _hx_tmp1;
HXDLIN( 191)				if (::hx::IsNotNull( current->onMouseUp )) {
HXLINE( 191)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 191)					_hx_tmp1 = false;
            				}
HXDLIN( 191)				if (_hx_tmp1) {
HXLINE( 191)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 191)					_hx_tmp = false;
            				}
HXDLIN( 191)				if (_hx_tmp) {
HXLINE( 193)					int _g = 0;
HXDLIN( 193)					::Array< int > _g1 = current->mouseButtons;
HXDLIN( 193)					while((_g < _g1->length)){
HXLINE( 193)						int buttonID = _g1->__get(_g);
HXDLIN( 193)						_g = (_g + 1);
HXLINE( 195)						if ((::flixel::input::mouse::FlxMouseButton_obj::getByID(buttonID)->current == -1)) {
HXLINE( 197)							current->onMouseUp(current->object);
            						}
            					}
            				}
            			}
            		}
HXLINE( 205)		bool _hx_tmp1;
HXDLIN( 205)		if ((this->_clickList->length > 0)) {
HXLINE( 205)			_hx_tmp1 = ((::flixel::FlxG_obj::game->ticks - this->mouseClickedTime) > this->maxDoubleClickDelay);
            		}
            		else {
HXLINE( 205)			_hx_tmp1 = false;
            		}
HXDLIN( 205)		if (_hx_tmp1) {
HXLINE( 207)			this->_clickList = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 210)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == -1)) {
HXLINE( 212)			this->mouseClickedTime = ::flixel::FlxG_obj::game->ticks;
HXLINE( 214)			::Array< ::Dynamic> previousClickedObjects = this->_clickList;
HXLINE( 216)			if ((this->_clickList->length > 0)) {
HXLINE( 218)				this->_clickList = ::Array_obj< ::Dynamic>::__new(0);
            			}
HXLINE( 221)			{
HXLINE( 221)				int _g = 0;
HXDLIN( 221)				::Array< ::Dynamic> _g1 = this->_downList;
HXDLIN( 221)				while((_g < _g1->length)){
HXLINE( 221)					 ::flixel::input::mouse::FlxMouseEvent down = _g1->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 221)					_g = (_g + 1);
HXLINE( 223)					bool _hx_tmp;
HXDLIN( 223)					bool _hx_tmp1;
HXDLIN( 223)					bool _hx_tmp2;
HXDLIN( 223)					if (::hx::IsNotNull( down->object )) {
HXLINE( 223)						_hx_tmp2 = down->object->exists;
            					}
            					else {
HXLINE( 223)						_hx_tmp2 = false;
            					}
HXDLIN( 223)					if (_hx_tmp2) {
HXLINE( 223)						_hx_tmp1 = down->object->visible;
            					}
            					else {
HXLINE( 223)						_hx_tmp1 = false;
            					}
HXDLIN( 223)					if (_hx_tmp1) {
HXLINE( 223)						_hx_tmp = ::hx::IsNotNull( this->get(down->object,currentOverObjects) );
            					}
            					else {
HXLINE( 223)						_hx_tmp = false;
            					}
HXDLIN( 223)					if (_hx_tmp) {
HXLINE( 228)						if (::hx::IsNotNull( down->onMouseClick )) {
HXLINE( 230)							down->onMouseClick(down->object);
            						}
HXLINE( 233)						if (::hx::IsNotNull( down->onMouseDoubleClick )) {
HXLINE( 235)							if (::hx::IsNotNull( this->get(down->object,previousClickedObjects) )) {
HXLINE( 237)								down->onMouseDoubleClick(down->object);
            							}
            							else {
HXLINE( 241)								this->_clickList->push(down);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 248)		bool _hx_tmp2;
HXDLIN( 248)		if ((this->_downList->length > 0)) {
HXLINE( 248)			 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN( 248)			bool _hx_tmp;
HXDLIN( 248)			if ((_this->current != 1)) {
HXLINE( 248)				_hx_tmp = (_this->current == 2);
            			}
            			else {
HXLINE( 248)				_hx_tmp = true;
            			}
HXDLIN( 248)			_hx_tmp2 = !(_hx_tmp);
            		}
            		else {
HXLINE( 248)			_hx_tmp2 = false;
            		}
HXDLIN( 248)		if (_hx_tmp2) {
HXLINE( 251)			this->_downList = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 255)		if ((::flixel::FlxG_obj::mouse->wheel != 0)) {
HXLINE( 257)			int _g = 0;
HXDLIN( 257)			while((_g < currentOverObjects->length)){
HXLINE( 257)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 257)				_g = (_g + 1);
HXLINE( 259)				bool _hx_tmp;
HXDLIN( 259)				bool _hx_tmp1;
HXDLIN( 259)				if (::hx::IsNotNull( current->onMouseWheel )) {
HXLINE( 259)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 259)					_hx_tmp1 = false;
            				}
HXDLIN( 259)				if (_hx_tmp1) {
HXLINE( 259)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 259)					_hx_tmp = false;
            				}
HXDLIN( 259)				if (_hx_tmp) {
HXLINE( 261)					current->onMouseWheel(current->object);
            				}
            			}
            		}
HXLINE( 267)		this->_overList = currentOverObjects;
            	}


 ::flixel::input::mouse::FlxMouseEvent FlxMouseEventManager_obj::addEvent( ::flixel::input::mouse::FlxMouseEvent event){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_271_addEvent)
HXLINE( 272)		if (!(event->mouseChildren)) {
HXLINE( 274)			this->_list->unshift(event);
            		}
            		else {
HXLINE( 279)			int index = 0;
HXLINE( 281)			while(true){
HXLINE( 281)				bool _hx_tmp;
HXDLIN( 281)				if ((index < this->_list->length)) {
HXLINE( 281)					_hx_tmp = !(this->_list->__get(index).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >()->mouseChildren);
            				}
            				else {
HXLINE( 281)					_hx_tmp = false;
            				}
HXDLIN( 281)				if (!(_hx_tmp)) {
HXLINE( 281)					goto _hx_goto_14;
            				}
HXLINE( 282)				index = (index + 1);
            			}
            			_hx_goto_14:;
HXLINE( 284)			this->_list->insert(index,event);
            		}
HXLINE( 287)		return event;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,addEvent,return )

 ::Dynamic FlxMouseEventManager_obj::add( ::Dynamic object, ::Dynamic onMouseDown, ::Dynamic onMouseUp, ::Dynamic onMouseOver, ::Dynamic onMouseOut,::hx::Null< bool >  __o_mouseChildren,::hx::Null< bool >  __o_mouseEnabled,::hx::Null< bool >  __o_pixelPerfect,::Array< int > mouseButtons){
            		bool mouseChildren = __o_mouseChildren.Default(false);
            		bool mouseEnabled = __o_mouseEnabled.Default(true);
            		bool pixelPerfect = __o_pixelPerfect.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_7737cad62ef16250_308_add)
HXLINE( 309)		 ::flixel::input::mouse::FlxMouseEvent event =  ::flixel::input::mouse::FlxMouseEvent_obj::__alloc( HX_CTX ,object,onMouseDown,onMouseUp,onMouseOver,onMouseOut,mouseChildren,mouseEnabled,pixelPerfect,mouseButtons);
HXLINE( 310)		this->addEvent(event);
HXLINE( 312)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC9(FlxMouseEventManager_obj,add,return )

 ::Dynamic FlxMouseEventManager_obj::remove( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_319_remove)
HXLINE( 320)		{
HXLINE( 320)			int _g = 0;
HXDLIN( 320)			::Array< ::Dynamic> _g1 = this->_list;
HXDLIN( 320)			while((_g < _g1->length)){
HXLINE( 320)				 ::flixel::input::mouse::FlxMouseEvent event = _g1->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 320)				_g = (_g + 1);
HXLINE( 322)				if (::hx::IsInstanceEq( event->object,object )) {
HXLINE( 324)					event->destroy();
HXLINE( 325)					this->_list->remove(event);
            				}
            			}
            		}
HXLINE( 328)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,remove,return )

void FlxMouseEventManager_obj::removeAll(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_335_removeAll)
HXLINE( 336)		if (::hx::IsNotNull( this->_list )) {
HXLINE( 338)			int _g = 0;
HXDLIN( 338)			::Array< ::Dynamic> _g1 = this->_list;
HXDLIN( 338)			while((_g < _g1->length)){
HXLINE( 338)				 ::flixel::input::mouse::FlxMouseEvent event = _g1->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 338)				_g = (_g + 1);
HXLINE( 340)				event->destroy();
            			}
            		}
HXLINE( 344)		this->_list->removeRange(0,this->_list->length);
HXLINE( 345)		this->_overList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 346)		this->_downList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 347)		this->_clickList = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEventManager_obj,removeAll,(void))

void FlxMouseEventManager_obj::reorder(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_358_reorder)
HXLINE( 359)		::Array< ::Dynamic> orderedObjects = ::Array_obj< ::Dynamic>::__new();
HXLINE( 361)		this->traverseFlxGroup(::flixel::FlxG_obj::game->_state,orderedObjects);
HXLINE( 363)		orderedObjects->reverse();
HXLINE( 364)		this->_list = orderedObjects;
HXLINE( 366)		::haxe::ds::ArraySort_obj::sort(this->_list,this->sortByMouseChildren_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEventManager_obj,reorder,(void))

void FlxMouseEventManager_obj::setMouseDownCallback( ::Dynamic object, ::Dynamic onMouseDown){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_376_setMouseDownCallback)
HXLINE( 377)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 379)		if (::hx::IsNotNull( event )) {
HXLINE( 381)			event->onMouseDown = onMouseDown;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseDownCallback,(void))

void FlxMouseEventManager_obj::setMouseUpCallback( ::Dynamic object, ::Dynamic onMouseUp){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_392_setMouseUpCallback)
HXLINE( 393)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 395)		if (::hx::IsNotNull( event )) {
HXLINE( 397)			event->onMouseUp = onMouseUp;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseUpCallback,(void))

void FlxMouseEventManager_obj::setMouseClickCallback( ::Dynamic object, ::Dynamic onMouseClick){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_409_setMouseClickCallback)
HXLINE( 410)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 412)		if (::hx::IsNotNull( event )) {
HXLINE( 414)			event->onMouseClick = onMouseClick;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseClickCallback,(void))

void FlxMouseEventManager_obj::setMouseDoubleClickCallback( ::Dynamic object, ::Dynamic onMouseDoubleClick){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_426_setMouseDoubleClickCallback)
HXLINE( 427)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 429)		if (::hx::IsNotNull( event )) {
HXLINE( 431)			event->onMouseDoubleClick = onMouseDoubleClick;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseDoubleClickCallback,(void))

void FlxMouseEventManager_obj::setMouseOverCallback( ::Dynamic object, ::Dynamic onMouseOver){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_442_setMouseOverCallback)
HXLINE( 443)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 445)		if (::hx::IsNotNull( event )) {
HXLINE( 447)			event->onMouseOver = onMouseOver;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseOverCallback,(void))

void FlxMouseEventManager_obj::setMouseOutCallback( ::Dynamic object, ::Dynamic onMouseOut){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_458_setMouseOutCallback)
HXLINE( 459)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 461)		if (::hx::IsNotNull( event )) {
HXLINE( 463)			event->onMouseOut = onMouseOut;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseOutCallback,(void))

void FlxMouseEventManager_obj::setMouseMoveCallback( ::Dynamic object, ::Dynamic onMouseMove){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_475_setMouseMoveCallback)
HXLINE( 476)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 478)		if (::hx::IsNotNull( event )) {
HXLINE( 480)			event->onMouseMove = onMouseMove;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseMoveCallback,(void))

void FlxMouseEventManager_obj::setMouseWheelCallback( ::Dynamic object, ::Dynamic onMouseWheel){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_492_setMouseWheelCallback)
HXLINE( 493)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 495)		if (::hx::IsNotNull( event )) {
HXLINE( 497)			event->onMouseWheel = onMouseWheel;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseWheelCallback,(void))

void FlxMouseEventManager_obj::setObjectMouseEnabled( ::Dynamic object,bool MouseEnabled){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_507_setObjectMouseEnabled)
HXLINE( 508)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 510)		if (::hx::IsNotNull( event )) {
HXLINE( 512)			event->mouseEnabled = MouseEnabled;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setObjectMouseEnabled,(void))

bool FlxMouseEventManager_obj::isObjectMouseEnabled( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_520_isObjectMouseEnabled)
HXLINE( 521)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 523)		if (::hx::IsNotNull( event )) {
HXLINE( 525)			return event->mouseEnabled;
            		}
            		else {
HXLINE( 529)			return false;
            		}
HXLINE( 523)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,isObjectMouseEnabled,return )

void FlxMouseEventManager_obj::setObjectMouseChildren( ::Dynamic object,bool mouseChildren){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_539_setObjectMouseChildren)
HXLINE( 540)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 542)		if (::hx::IsNotNull( event )) {
HXLINE( 544)			event->mouseChildren = mouseChildren;
HXLINE( 545)			this->_list->remove(event);
HXLINE( 547)			if (!(mouseChildren)) {
HXLINE( 549)				this->_list->unshift(event);
            			}
            			else {
HXLINE( 553)				int index = 0;
HXLINE( 555)				while(true){
HXLINE( 555)					bool _hx_tmp;
HXDLIN( 555)					if ((index < this->_list->length)) {
HXLINE( 555)						_hx_tmp = !(this->_list->__get(index).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >()->mouseChildren);
            					}
            					else {
HXLINE( 555)						_hx_tmp = false;
            					}
HXDLIN( 555)					if (!(_hx_tmp)) {
HXLINE( 555)						goto _hx_goto_32;
            					}
HXLINE( 556)					index = (index + 1);
            				}
            				_hx_goto_32:;
HXLINE( 558)				this->_list->insert(index,event);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setObjectMouseChildren,(void))

bool FlxMouseEventManager_obj::isObjectMouseChildren( ::Dynamic object){
            	HX_GC_STACKFRAME(&_hx_pos_7737cad62ef16250_567_isObjectMouseChildren)
HXLINE( 568)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 570)		if (::hx::IsNotNull( event )) {
HXLINE( 572)			return event->mouseChildren;
            		}
            		else {
HXLINE( 576)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("FlxMouseEventManager , isObjectMouseChildren() : object not found",2c,1c,56,e2),null()));
            		}
HXLINE( 570)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,isObjectMouseChildren,return )

void FlxMouseEventManager_obj::setObjectMouseButtons( ::Dynamic object,::Array< int > mouseButtons){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_584_setObjectMouseButtons)
HXLINE( 585)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 587)		if (::hx::IsNotNull( event )) {
HXLINE( 589)			event->mouseButtons = mouseButtons;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setObjectMouseButtons,(void))

void FlxMouseEventManager_obj::traverseFlxGroup( ::flixel::group::FlxTypedGroup group,::Array< ::Dynamic> orderedObjects){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_596_traverseFlxGroup)
HXDLIN( 596)		int _g = 0;
HXDLIN( 596)		::cpp::VirtualArray _g1 = group->members;
HXDLIN( 596)		while((_g < _g1->get_length())){
HXDLIN( 596)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 596)			_g = (_g + 1);
HXLINE( 598)			 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 599)			if (::hx::IsNotNull( group )) {
HXLINE( 601)				this->traverseFlxGroup(group,orderedObjects);
            			}
HXLINE( 603)			if (::Std_obj::isOfType(basic,::hx::ClassOf< ::flixel::FlxObject >())) {
HXLINE( 605)				 ::flixel::input::mouse::FlxMouseEvent event = this->get(( ( ::flixel::FlxObject)(basic) ),null());
HXLINE( 607)				if (::hx::IsNotNull( event )) {
HXLINE( 609)					orderedObjects->push(event);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,traverseFlxGroup,(void))

 ::flixel::input::mouse::FlxMouseEvent FlxMouseEventManager_obj::get( ::Dynamic object,::Array< ::Dynamic> list){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_616_get)
HXLINE( 617)		if (::hx::IsNull( list )) {
HXLINE( 619)			list = this->_list;
            		}
HXLINE( 622)		{
HXLINE( 622)			int _g = 0;
HXDLIN( 622)			while((_g < list->length)){
HXLINE( 622)				 ::flixel::input::mouse::FlxMouseEvent event = list->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 622)				_g = (_g + 1);
HXLINE( 624)				if (::hx::IsInstanceEq( event->object,object )) {
HXLINE( 626)					return event;
            				}
            			}
            		}
HXLINE( 630)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,get,return )

int FlxMouseEventManager_obj::sortByMouseChildren( ::flixel::input::mouse::FlxMouseEvent event1, ::flixel::input::mouse::FlxMouseEvent event2){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_634_sortByMouseChildren)
HXLINE( 635)		if ((event1->mouseChildren == event2->mouseChildren)) {
HXLINE( 637)			return 0;
            		}
HXLINE( 640)		if (!(event1->mouseChildren)) {
HXLINE( 642)			return -1;
            		}
HXLINE( 645)		return 1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,sortByMouseChildren,return )

void FlxMouseEventManager_obj::clearRegistry(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_649_clearRegistry)
HXLINE( 650)		this->_overList = null();
HXLINE( 651)		this->_downList = null();
HXLINE( 652)		this->_clickList = null();
HXLINE( 653)		this->_list = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_list);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEventManager_obj,clearRegistry,(void))

bool FlxMouseEventManager_obj::checkOverlap( ::flixel::input::mouse::FlxMouseEvent event){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_657_checkOverlap)
HXLINE( 658)		{
HXLINE( 658)			int _g = 0;
HXDLIN( 658)			::Array< ::Dynamic> _g1 = event->object->get_cameras();
HXDLIN( 658)			while((_g < _g1->length)){
HXLINE( 658)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 658)				_g = (_g + 1);
HXLINE( 661)				this->_point = ::flixel::FlxG_obj::mouse->getPositionInCameraView(camera,this->_point);
HXLINE( 662)				 ::flixel::math::FlxBasePoint point = this->_point;
HXDLIN( 662)				bool contained;
HXDLIN( 662)				bool contained1;
HXDLIN( 662)				bool contained2;
HXDLIN( 662)				if (((point->x + ( (Float)(0) )) > camera->viewOffsetX)) {
HXLINE( 662)					contained2 = (point->x < camera->viewOffsetWidth);
            				}
            				else {
HXLINE( 662)					contained2 = false;
            				}
HXDLIN( 662)				if (contained2) {
HXLINE( 662)					contained1 = ((point->y + ( (Float)(0) )) > camera->viewOffsetY);
            				}
            				else {
HXLINE( 662)					contained1 = false;
            				}
HXDLIN( 662)				if (contained1) {
HXLINE( 662)					contained = (point->y < camera->viewOffsetHeight);
            				}
            				else {
HXLINE( 662)					contained = false;
            				}
HXDLIN( 662)				if (point->_weak) {
HXLINE( 662)					point->put();
            				}
HXDLIN( 662)				if (contained) {
HXLINE( 664)					this->_point = ::flixel::FlxG_obj::mouse->getWorldPosition(camera,this->_point);
HXLINE( 666)					 ::flixel::math::FlxBasePoint point = this->_point;
HXDLIN( 666)					bool _hx_tmp;
HXDLIN( 666)					bool _hx_tmp1;
HXDLIN( 666)					if (event->pixelPerfect) {
HXLINE( 666)						_hx_tmp1 = ::hx::IsNotNull( event->sprite );
            					}
            					else {
HXLINE( 666)						_hx_tmp1 = false;
            					}
HXDLIN( 666)					if (_hx_tmp1) {
HXLINE( 666)						_hx_tmp = event->sprite->pixelsOverlapPoint(point,1,camera);
            					}
            					else {
HXLINE( 666)						_hx_tmp = event->object->overlapsPoint(point,true,camera);
            					}
HXDLIN( 666)					if (_hx_tmp) {
HXLINE( 668)						return true;
            					}
            				}
HXLINE( 674)				{
HXLINE( 674)					int _g2 = 0;
HXDLIN( 674)					::Array< ::Dynamic> _g3 = ::flixel::FlxG_obj::touches->list;
HXDLIN( 674)					while((_g2 < _g3->length)){
HXLINE( 674)						 ::flixel::input::touch::FlxTouch touch = _g3->__get(_g2).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN( 674)						_g2 = (_g2 + 1);
HXLINE( 676)						this->_point = touch->getPositionInCameraView(camera,this->_point);
HXLINE( 677)						 ::flixel::math::FlxBasePoint point = this->_point;
HXDLIN( 677)						bool contained;
HXDLIN( 677)						bool contained1;
HXDLIN( 677)						bool contained2;
HXDLIN( 677)						if (((point->x + ( (Float)(0) )) > camera->viewOffsetX)) {
HXLINE( 677)							contained2 = (point->x < camera->viewOffsetWidth);
            						}
            						else {
HXLINE( 677)							contained2 = false;
            						}
HXDLIN( 677)						if (contained2) {
HXLINE( 677)							contained1 = ((point->y + ( (Float)(0) )) > camera->viewOffsetY);
            						}
            						else {
HXLINE( 677)							contained1 = false;
            						}
HXDLIN( 677)						if (contained1) {
HXLINE( 677)							contained = (point->y < camera->viewOffsetHeight);
            						}
            						else {
HXLINE( 677)							contained = false;
            						}
HXDLIN( 677)						if (point->_weak) {
HXLINE( 677)							point->put();
            						}
HXDLIN( 677)						if (contained) {
HXLINE( 679)							this->_point = touch->getWorldPosition(camera,this->_point);
HXLINE( 681)							 ::flixel::math::FlxBasePoint point = this->_point;
HXDLIN( 681)							bool _hx_tmp;
HXDLIN( 681)							bool _hx_tmp1;
HXDLIN( 681)							if (event->pixelPerfect) {
HXLINE( 681)								_hx_tmp1 = ::hx::IsNotNull( event->sprite );
            							}
            							else {
HXLINE( 681)								_hx_tmp1 = false;
            							}
HXDLIN( 681)							if (_hx_tmp1) {
HXLINE( 681)								_hx_tmp = event->sprite->pixelsOverlapPoint(point,1,camera);
            							}
            							else {
HXLINE( 681)								_hx_tmp = event->object->overlapsPoint(point,true,camera);
            							}
HXDLIN( 681)							if (_hx_tmp) {
HXLINE( 683)								return true;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 690)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,checkOverlap,return )

bool FlxMouseEventManager_obj::checkOverlapWithPoint( ::flixel::input::mouse::FlxMouseEvent event, ::flixel::math::FlxBasePoint point, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_695_checkOverlapWithPoint)
HXDLIN( 695)		bool _hx_tmp;
HXDLIN( 695)		if (event->pixelPerfect) {
HXDLIN( 695)			_hx_tmp = ::hx::IsNotNull( event->sprite );
            		}
            		else {
HXDLIN( 695)			_hx_tmp = false;
            		}
HXDLIN( 695)		if (_hx_tmp) {
HXLINE( 697)			return event->sprite->pixelsOverlapPoint(point,1,camera);
            		}
            		else {
HXLINE( 701)			return event->object->overlapsPoint(point,true,camera);
            		}
HXLINE( 695)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxMouseEventManager_obj,checkOverlapWithPoint,return )

 ::flixel::input::mouse::FlxMouseEventManager FlxMouseEventManager_obj::instance;


::hx::ObjectPtr< FlxMouseEventManager_obj > FlxMouseEventManager_obj::__new() {
	::hx::ObjectPtr< FlxMouseEventManager_obj > __this = new FlxMouseEventManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxMouseEventManager_obj > FlxMouseEventManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxMouseEventManager_obj *__this = (FlxMouseEventManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxMouseEventManager_obj), true, "flixel.input.mouse.FlxMouseEventManager"));
	*(void **)__this = FlxMouseEventManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxMouseEventManager_obj::FlxMouseEventManager_obj()
{
}

void FlxMouseEventManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouseEventManager);
	HX_MARK_MEMBER_NAME(_list,"_list");
	HX_MARK_MEMBER_NAME(_overList,"_overList");
	HX_MARK_MEMBER_NAME(_downList,"_downList");
	HX_MARK_MEMBER_NAME(_clickList,"_clickList");
	HX_MARK_MEMBER_NAME(mouseClickedTime,"mouseClickedTime");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(maxDoubleClickDelay,"maxDoubleClickDelay");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxMouseEventManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_list,"_list");
	HX_VISIT_MEMBER_NAME(_overList,"_overList");
	HX_VISIT_MEMBER_NAME(_downList,"_downList");
	HX_VISIT_MEMBER_NAME(_clickList,"_clickList");
	HX_VISIT_MEMBER_NAME(mouseClickedTime,"mouseClickedTime");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(maxDoubleClickDelay,"maxDoubleClickDelay");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxMouseEventManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { return ::hx::Val( _list ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return ::hx::Val( _point ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"reorder") ) { return ::hx::Val( reorder_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addEvent") ) { return ::hx::Val( addEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_overList") ) { return ::hx::Val( _overList ); }
		if (HX_FIELD_EQ(inName,"_downList") ) { return ::hx::Val( _downList ); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return ::hx::Val( removeAll_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_clickList") ) { return ::hx::Val( _clickList ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkOverlap") ) { return ::hx::Val( checkOverlap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearRegistry") ) { return ::hx::Val( clearRegistry_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mouseClickedTime") ) { return ::hx::Val( mouseClickedTime ); }
		if (HX_FIELD_EQ(inName,"traverseFlxGroup") ) { return ::hx::Val( traverseFlxGroup_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setMouseUpCallback") ) { return ::hx::Val( setMouseUpCallback_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"maxDoubleClickDelay") ) { return ::hx::Val( maxDoubleClickDelay ); }
		if (HX_FIELD_EQ(inName,"setMouseOutCallback") ) { return ::hx::Val( setMouseOutCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"sortByMouseChildren") ) { return ::hx::Val( sortByMouseChildren_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setMouseDownCallback") ) { return ::hx::Val( setMouseDownCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMouseOverCallback") ) { return ::hx::Val( setMouseOverCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMouseMoveCallback") ) { return ::hx::Val( setMouseMoveCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"isObjectMouseEnabled") ) { return ::hx::Val( isObjectMouseEnabled_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setMouseClickCallback") ) { return ::hx::Val( setMouseClickCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMouseWheelCallback") ) { return ::hx::Val( setMouseWheelCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"setObjectMouseEnabled") ) { return ::hx::Val( setObjectMouseEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"isObjectMouseChildren") ) { return ::hx::Val( isObjectMouseChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"setObjectMouseButtons") ) { return ::hx::Val( setObjectMouseButtons_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkOverlapWithPoint") ) { return ::hx::Val( checkOverlapWithPoint_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setObjectMouseChildren") ) { return ::hx::Val( setObjectMouseChildren_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setMouseDoubleClickCallback") ) { return ::hx::Val( setMouseDoubleClickCallback_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxMouseEventManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
	}
	return false;
}

::hx::Val FlxMouseEventManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { _list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_overList") ) { _overList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downList") ) { _downList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_clickList") ) { _clickList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mouseClickedTime") ) { mouseClickedTime=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"maxDoubleClickDelay") ) { maxDoubleClickDelay=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxMouseEventManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::flixel::input::mouse::FlxMouseEventManager >(); return true; }
	}
	return false;
}

void FlxMouseEventManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_list",3d,38,c4,fa));
	outFields->push(HX_("_overList",31,0b,a0,77));
	outFields->push(HX_("_downList",3f,11,31,c4));
	outFields->push(HX_("_clickList",87,04,55,82));
	outFields->push(HX_("mouseClickedTime",2f,68,64,b4));
	outFields->push(HX_("_point",91,fb,76,c2));
	outFields->push(HX_("maxDoubleClickDelay",50,c3,5f,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxMouseEventManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxMouseEventManager_obj,_list),HX_("_list",3d,38,c4,fa)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxMouseEventManager_obj,_overList),HX_("_overList",31,0b,a0,77)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxMouseEventManager_obj,_downList),HX_("_downList",3f,11,31,c4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxMouseEventManager_obj,_clickList),HX_("_clickList",87,04,55,82)},
	{::hx::fsInt,(int)offsetof(FlxMouseEventManager_obj,mouseClickedTime),HX_("mouseClickedTime",2f,68,64,b4)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxMouseEventManager_obj,_point),HX_("_point",91,fb,76,c2)},
	{::hx::fsInt,(int)offsetof(FlxMouseEventManager_obj,maxDoubleClickDelay),HX_("maxDoubleClickDelay",50,c3,5f,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxMouseEventManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::mouse::FlxMouseEventManager */ ,(void *) &FlxMouseEventManager_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxMouseEventManager_obj_sMemberFields[] = {
	HX_("_list",3d,38,c4,fa),
	HX_("_overList",31,0b,a0,77),
	HX_("_downList",3f,11,31,c4),
	HX_("_clickList",87,04,55,82),
	HX_("mouseClickedTime",2f,68,64,b4),
	HX_("_point",91,fb,76,c2),
	HX_("maxDoubleClickDelay",50,c3,5f,52),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("addEvent",39,ee,21,ef),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("removeAll",3d,17,e5,ca),
	HX_("reorder",fb,43,bb,1b),
	HX_("setMouseDownCallback",0a,f4,07,da),
	HX_("setMouseUpCallback",43,fc,86,24),
	HX_("setMouseClickCallback",0a,31,9e,cd),
	HX_("setMouseDoubleClickCallback",f9,02,73,43),
	HX_("setMouseOverCallback",fc,ce,df,f9),
	HX_("setMouseOutCallback",10,aa,5c,33),
	HX_("setMouseMoveCallback",b9,a5,fb,fe),
	HX_("setMouseWheelCallback",5d,f4,b6,89),
	HX_("setObjectMouseEnabled",7d,12,2e,1b),
	HX_("isObjectMouseEnabled",c5,84,b4,5f),
	HX_("setObjectMouseChildren",c3,47,d9,30),
	HX_("isObjectMouseChildren",7b,d4,f6,e1),
	HX_("setObjectMouseButtons",3d,60,72,67),
	HX_("traverseFlxGroup",3f,3d,59,c9),
	HX_("get",96,80,4e,00),
	HX_("sortByMouseChildren",6f,d2,c1,84),
	HX_("clearRegistry",6a,b4,fc,03),
	HX_("checkOverlap",9f,fb,96,96),
	HX_("checkOverlapWithPoint",cb,10,c2,44),
	::String(null()) };

static void FlxMouseEventManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouseEventManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxMouseEventManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouseEventManager_obj::instance,"instance");
};

#endif

::hx::Class FlxMouseEventManager_obj::__mClass;

static ::String FlxMouseEventManager_obj_sStaticFields[] = {
	HX_("instance",95,1f,e1,59),
	::String(null())
};

void FlxMouseEventManager_obj::__register()
{
	FlxMouseEventManager_obj _hx_dummy;
	FlxMouseEventManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.mouse.FlxMouseEventManager",a5,53,34,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxMouseEventManager_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxMouseEventManager_obj::__SetStatic;
	__mClass->mMarkFunc = FlxMouseEventManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxMouseEventManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxMouseEventManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxMouseEventManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxMouseEventManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMouseEventManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMouseEventManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse

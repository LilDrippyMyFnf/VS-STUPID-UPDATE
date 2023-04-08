#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_sys_thread_EventLoop
#include <sys/thread/EventLoop.h>
#endif
#ifndef INCLUDED_sys_thread_Lock
#include <sys/thread/Lock.h>
#endif
#ifndef INCLUDED_sys_thread_Mutex
#include <sys/thread/Mutex.h>
#endif
#ifndef INCLUDED_sys_thread_NextEventTime
#include <sys/thread/NextEventTime.h>
#endif
#ifndef INCLUDED_sys_thread__EventLoop_RegularEvent
#include <sys/thread/_EventLoop/RegularEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d9357d86f6a2fb2a_24_new,"sys.thread.EventLoop","new",0xafe12fcd,"sys.thread.EventLoop.new","C:\\HaxeToolkit\\haxe\\std/sys/thread/EventLoop.hx",24,0x60c7a9aa)
HX_LOCAL_STACK_FRAME(_hx_pos_d9357d86f6a2fb2a_140_progress,"sys.thread.EventLoop","progress",0xd3ab8d20,"sys.thread.EventLoop.progress","C:\\HaxeToolkit\\haxe\\std/sys/thread/EventLoop.hx",140,0x60c7a9aa)
HX_LOCAL_STACK_FRAME(_hx_pos_d9357d86f6a2fb2a_173_loop,"sys.thread.EventLoop","loop",0x33ddc657,"sys.thread.EventLoop.loop","C:\\HaxeToolkit\\haxe\\std/sys/thread/EventLoop.hx",173,0x60c7a9aa)
namespace sys{
namespace thread{

void EventLoop_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d9357d86f6a2fb2a_24_new)
HXLINE(  29)		this->promisedEventsCount = 0;
HXLINE(  28)		this->waitLock =  ::sys::thread::Lock_obj::__alloc( HX_CTX );
HXLINE(  27)		this->oneTimeEventsIdx = 0;
HXLINE(  26)		this->oneTimeEvents = ::Array_obj< ::Dynamic>::__new();
HXLINE(  25)		this->mutex =  ::sys::thread::Mutex_obj::__alloc( HX_CTX );
            	}

Dynamic EventLoop_obj::__CreateEmpty() { return new EventLoop_obj; }

void *EventLoop_obj::_hx_vtable = 0;

Dynamic EventLoop_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventLoop_obj > _hx_result = new EventLoop_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventLoop_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6a581147;
}

 ::sys::thread::NextEventTime EventLoop_obj::progress(){
            	HX_STACKFRAME(&_hx_pos_d9357d86f6a2fb2a_140_progress)
HXDLIN( 140)		Float now = ::Sys_obj::time();
HXDLIN( 140)		::Array< ::Dynamic> regularsToRun = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 140)		int eventsToRunIdx = 0;
HXDLIN( 140)		Float nextEventAt = ( (Float)(-1) );
HXDLIN( 140)		this->mutex->acquire();
HXDLIN( 140)		while(this->waitLock->wait(((Float)0.0))){
            		}
HXDLIN( 140)		 ::sys::thread::_EventLoop::RegularEvent current = this->regularEvents;
HXDLIN( 140)		while(::hx::IsNotNull( current )){
HXDLIN( 140)			if ((current->nextRunTime <= now)) {
HXDLIN( 140)				eventsToRunIdx = (eventsToRunIdx + 1);
HXDLIN( 140)				regularsToRun[(eventsToRunIdx - 1)] = current;
HXDLIN( 140)				 ::sys::thread::_EventLoop::RegularEvent current1 = current;
HXDLIN( 140)				current1->nextRunTime = (current1->nextRunTime + current->interval);
HXLINE( 214)				nextEventAt = ( (Float)(-2) );
            			}
            			else {
HXDLIN( 140)				bool _hx_tmp;
HXDLIN( 140)				if ((nextEventAt != -1)) {
HXDLIN( 140)					_hx_tmp = (current->nextRunTime < nextEventAt);
            				}
            				else {
HXDLIN( 140)					_hx_tmp = true;
            				}
HXDLIN( 140)				if (_hx_tmp) {
HXLINE( 216)					nextEventAt = current->nextRunTime;
            				}
            			}
HXLINE( 218)			current = current->next;
            		}
HXLINE( 140)		this->mutex->release();
HXDLIN( 140)		int _g = 0;
HXDLIN( 140)		int _g1 = eventsToRunIdx;
HXDLIN( 140)		while((_g < _g1)){
HXDLIN( 140)			_g = (_g + 1);
HXDLIN( 140)			int i = (_g - 1);
HXDLIN( 140)			if (!(regularsToRun->__get(i).StaticCast<  ::sys::thread::_EventLoop::RegularEvent >()->cancelled)) {
HXDLIN( 140)				regularsToRun->__get(i).StaticCast<  ::sys::thread::_EventLoop::RegularEvent >()->run();
            			}
HXDLIN( 140)			regularsToRun[i] = null();
            		}
HXLINE( 228)		eventsToRunIdx = 0;
HXLINE( 140)		::Array< ::Dynamic> oneTimersToRun = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 140)		this->mutex->acquire();
HXDLIN( 140)		int _g2_current = 0;
HXDLIN( 140)		::Array< ::Dynamic> _g2_array = this->oneTimeEvents;
HXDLIN( 140)		while((_g2_current < _g2_array->length)){
HXDLIN( 140)			 ::Dynamic _g3_value = _g2_array->__get(_g2_current);
HXDLIN( 140)			_g2_current = (_g2_current + 1);
HXDLIN( 140)			int _g3_key = (_g2_current - 1);
HXDLIN( 140)			int i = _g3_key;
HXDLIN( 140)			 ::Dynamic event = _g3_value;
HXDLIN( 140)			if (::hx::IsNull( event )) {
HXDLIN( 140)				goto _hx_goto_4;
            			}
            			else {
HXDLIN( 140)				eventsToRunIdx = (eventsToRunIdx + 1);
HXDLIN( 140)				oneTimersToRun[(eventsToRunIdx - 1)] = event;
HXDLIN( 140)				this->oneTimeEvents[i] = null();
            			}
            		}
            		_hx_goto_4:;
HXDLIN( 140)		this->oneTimeEventsIdx = 0;
HXDLIN( 140)		bool hasPromisedEvents = (this->promisedEventsCount > 0);
HXDLIN( 140)		this->mutex->release();
HXDLIN( 140)		int _g2 = 0;
HXDLIN( 140)		int _g3 = eventsToRunIdx;
HXDLIN( 140)		while((_g2 < _g3)){
HXDLIN( 140)			_g2 = (_g2 + 1);
HXDLIN( 140)			int i = (_g2 - 1);
HXDLIN( 140)			oneTimersToRun->__get(i)();
HXDLIN( 140)			oneTimersToRun[i] = null();
            		}
HXDLIN( 140)		if ((eventsToRunIdx > 0)) {
HXLINE( 254)			nextEventAt = ( (Float)(-2) );
            		}
HXLINE( 140)		Float _g_nextEventAt = nextEventAt;
HXDLIN( 140)		bool _g_anyTime = hasPromisedEvents;
HXDLIN( 140)		bool _g4 = _g_anyTime;
HXDLIN( 140)		Float _g5 = _g_nextEventAt;
HXDLIN( 140)		Float _hx_switch_0 = _g5;
            		if (  (_hx_switch_0==( (Float)(-2) )) ){
HXLINE( 141)			return ::sys::thread::NextEventTime_obj::Now_dyn();
HXDLIN( 141)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==( (Float)(-1) )) ){
HXDLIN( 140)			if (_g4) {
HXLINE( 143)				return ::sys::thread::NextEventTime_obj::AnyTime(null());
            			}
            			else {
HXLINE( 142)				return ::sys::thread::NextEventTime_obj::Never_dyn();
            			}
HXLINE( 140)			goto _hx_goto_6;
            		}
            		/* default */{
HXDLIN( 140)			if (_g4) {
HXLINE( 144)				Float time = _g5;
HXDLIN( 144)				return ::sys::thread::NextEventTime_obj::AnyTime(time);
            			}
            			else {
HXLINE( 145)				Float time = _g5;
HXDLIN( 145)				return ::sys::thread::NextEventTime_obj::At(time);
            			}
            		}
            		_hx_goto_6:;
HXLINE( 140)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventLoop_obj,progress,return )

void EventLoop_obj::loop(){
            	HX_STACKFRAME(&_hx_pos_d9357d86f6a2fb2a_173_loop)
HXLINE( 174)		::Array< ::Dynamic> recycleRegular = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 175)		::Array< ::Dynamic> recycleOneTimers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 176)		while(true){
HXLINE( 177)			Float now = ::Sys_obj::time();
HXDLIN( 177)			::Array< ::Dynamic> regularsToRun = recycleRegular;
HXDLIN( 177)			int eventsToRunIdx = 0;
HXDLIN( 177)			Float nextEventAt = ( (Float)(-1) );
HXDLIN( 177)			this->mutex->acquire();
HXDLIN( 177)			while(this->waitLock->wait(((Float)0.0))){
            			}
HXLINE( 177)			 ::sys::thread::_EventLoop::RegularEvent current = this->regularEvents;
HXDLIN( 177)			while(::hx::IsNotNull( current )){
HXLINE( 177)				if ((current->nextRunTime <= now)) {
HXLINE( 177)					eventsToRunIdx = (eventsToRunIdx + 1);
HXDLIN( 177)					regularsToRun[(eventsToRunIdx - 1)] = current;
HXDLIN( 177)					 ::sys::thread::_EventLoop::RegularEvent current1 = current;
HXDLIN( 177)					current1->nextRunTime = (current1->nextRunTime + current->interval);
HXLINE( 214)					nextEventAt = ( (Float)(-2) );
            				}
            				else {
HXLINE( 177)					bool _hx_tmp;
HXDLIN( 177)					if ((nextEventAt != -1)) {
HXLINE( 177)						_hx_tmp = (current->nextRunTime < nextEventAt);
            					}
            					else {
HXLINE( 177)						_hx_tmp = true;
            					}
HXDLIN( 177)					if (_hx_tmp) {
HXLINE( 216)						nextEventAt = current->nextRunTime;
            					}
            				}
HXLINE( 218)				current = current->next;
            			}
HXLINE( 177)			this->mutex->release();
HXDLIN( 177)			int _g = 0;
HXDLIN( 177)			int _g1 = eventsToRunIdx;
HXDLIN( 177)			while((_g < _g1)){
HXLINE( 177)				_g = (_g + 1);
HXDLIN( 177)				int i = (_g - 1);
HXDLIN( 177)				if (!(regularsToRun->__get(i).StaticCast<  ::sys::thread::_EventLoop::RegularEvent >()->cancelled)) {
HXLINE( 177)					regularsToRun->__get(i).StaticCast<  ::sys::thread::_EventLoop::RegularEvent >()->run();
            				}
HXDLIN( 177)				regularsToRun[i] = null();
            			}
HXLINE( 228)			eventsToRunIdx = 0;
HXLINE( 177)			::Array< ::Dynamic> oneTimersToRun = recycleOneTimers;
HXDLIN( 177)			this->mutex->acquire();
HXDLIN( 177)			int _g2_current = 0;
HXDLIN( 177)			::Array< ::Dynamic> _g2_array = this->oneTimeEvents;
HXDLIN( 177)			while((_g2_current < _g2_array->length)){
HXLINE( 177)				 ::Dynamic _g3_value = _g2_array->__get(_g2_current);
HXDLIN( 177)				_g2_current = (_g2_current + 1);
HXDLIN( 177)				int _g3_key = (_g2_current - 1);
HXDLIN( 177)				int i = _g3_key;
HXDLIN( 177)				 ::Dynamic event = _g3_value;
HXDLIN( 177)				if (::hx::IsNull( event )) {
HXLINE( 177)					goto _hx_goto_12;
            				}
            				else {
HXLINE( 177)					eventsToRunIdx = (eventsToRunIdx + 1);
HXDLIN( 177)					oneTimersToRun[(eventsToRunIdx - 1)] = event;
HXDLIN( 177)					this->oneTimeEvents[i] = null();
            				}
            			}
            			_hx_goto_12:;
HXDLIN( 177)			this->oneTimeEventsIdx = 0;
HXDLIN( 177)			bool hasPromisedEvents = (this->promisedEventsCount > 0);
HXDLIN( 177)			this->mutex->release();
HXDLIN( 177)			int _g2 = 0;
HXDLIN( 177)			int _g3 = eventsToRunIdx;
HXDLIN( 177)			while((_g2 < _g3)){
HXLINE( 177)				_g2 = (_g2 + 1);
HXDLIN( 177)				int i = (_g2 - 1);
HXDLIN( 177)				oneTimersToRun->__get(i)();
HXDLIN( 177)				oneTimersToRun[i] = null();
            			}
HXDLIN( 177)			if ((eventsToRunIdx > 0)) {
HXLINE( 254)				nextEventAt = ( (Float)(-2) );
            			}
HXLINE( 177)			Float r_nextEventAt = nextEventAt;
HXDLIN( 177)			bool r_anyTime = hasPromisedEvents;
HXLINE( 178)			{
HXLINE( 178)				bool _g4 = r_anyTime;
HXDLIN( 178)				Float _g5 = r_nextEventAt;
HXDLIN( 178)				Float _hx_switch_0 = _g5;
            				if (  (_hx_switch_0==( (Float)(-2) )) ){
HXLINE( 179)					goto _hx_goto_14;
            				}
            				if (  (_hx_switch_0==( (Float)(-1) )) ){
HXLINE( 178)					if (_g4) {
HXLINE( 183)						this->waitLock->wait(null());
            					}
            					else {
HXLINE( 181)						goto _hx_goto_8;
            					}
HXLINE( 178)					goto _hx_goto_14;
            				}
            				/* default */{
HXLINE( 184)					Float time = _g5;
HXDLIN( 184)					{
HXLINE( 185)						Float timeout = (time - ::Sys_obj::time());
HXLINE( 186)						this->waitLock->wait(::Math_obj::max(( (Float)(0) ),timeout));
            					}
            				}
            				_hx_goto_14:;
            			}
            		}
            		_hx_goto_8:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventLoop_obj,loop,(void))


::hx::ObjectPtr< EventLoop_obj > EventLoop_obj::__new() {
	::hx::ObjectPtr< EventLoop_obj > __this = new EventLoop_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< EventLoop_obj > EventLoop_obj::__alloc(::hx::Ctx *_hx_ctx) {
	EventLoop_obj *__this = (EventLoop_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventLoop_obj), true, "sys.thread.EventLoop"));
	*(void **)__this = EventLoop_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EventLoop_obj::EventLoop_obj()
{
}

void EventLoop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventLoop);
	HX_MARK_MEMBER_NAME(mutex,"mutex");
	HX_MARK_MEMBER_NAME(oneTimeEvents,"oneTimeEvents");
	HX_MARK_MEMBER_NAME(oneTimeEventsIdx,"oneTimeEventsIdx");
	HX_MARK_MEMBER_NAME(waitLock,"waitLock");
	HX_MARK_MEMBER_NAME(promisedEventsCount,"promisedEventsCount");
	HX_MARK_MEMBER_NAME(regularEvents,"regularEvents");
	HX_MARK_END_CLASS();
}

void EventLoop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mutex,"mutex");
	HX_VISIT_MEMBER_NAME(oneTimeEvents,"oneTimeEvents");
	HX_VISIT_MEMBER_NAME(oneTimeEventsIdx,"oneTimeEventsIdx");
	HX_VISIT_MEMBER_NAME(waitLock,"waitLock");
	HX_VISIT_MEMBER_NAME(promisedEventsCount,"promisedEventsCount");
	HX_VISIT_MEMBER_NAME(regularEvents,"regularEvents");
}

::hx::Val EventLoop_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return ::hx::Val( loop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { return ::hx::Val( mutex ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"waitLock") ) { return ::hx::Val( waitLock ); }
		if (HX_FIELD_EQ(inName,"progress") ) { return ::hx::Val( progress_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"oneTimeEvents") ) { return ::hx::Val( oneTimeEvents ); }
		if (HX_FIELD_EQ(inName,"regularEvents") ) { return ::hx::Val( regularEvents ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"oneTimeEventsIdx") ) { return ::hx::Val( oneTimeEventsIdx ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"promisedEventsCount") ) { return ::hx::Val( promisedEventsCount ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EventLoop_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { mutex=inValue.Cast<  ::sys::thread::Mutex >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"waitLock") ) { waitLock=inValue.Cast<  ::sys::thread::Lock >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"oneTimeEvents") ) { oneTimeEvents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regularEvents") ) { regularEvents=inValue.Cast<  ::sys::thread::_EventLoop::RegularEvent >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"oneTimeEventsIdx") ) { oneTimeEventsIdx=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"promisedEventsCount") ) { promisedEventsCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventLoop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mutex",7f,8f,5b,10));
	outFields->push(HX_("oneTimeEvents",0c,71,5c,81));
	outFields->push(HX_("oneTimeEventsIdx",91,7a,66,79));
	outFields->push(HX_("waitLock",00,01,9a,50));
	outFields->push(HX_("promisedEventsCount",0d,bf,c2,9b));
	outFields->push(HX_("regularEvents",95,42,47,b5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EventLoop_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::Mutex */ ,(int)offsetof(EventLoop_obj,mutex),HX_("mutex",7f,8f,5b,10)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(EventLoop_obj,oneTimeEvents),HX_("oneTimeEvents",0c,71,5c,81)},
	{::hx::fsInt,(int)offsetof(EventLoop_obj,oneTimeEventsIdx),HX_("oneTimeEventsIdx",91,7a,66,79)},
	{::hx::fsObject /*  ::sys::thread::Lock */ ,(int)offsetof(EventLoop_obj,waitLock),HX_("waitLock",00,01,9a,50)},
	{::hx::fsInt,(int)offsetof(EventLoop_obj,promisedEventsCount),HX_("promisedEventsCount",0d,bf,c2,9b)},
	{::hx::fsObject /*  ::sys::thread::_EventLoop::RegularEvent */ ,(int)offsetof(EventLoop_obj,regularEvents),HX_("regularEvents",95,42,47,b5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EventLoop_obj_sStaticStorageInfo = 0;
#endif

static ::String EventLoop_obj_sMemberFields[] = {
	HX_("mutex",7f,8f,5b,10),
	HX_("oneTimeEvents",0c,71,5c,81),
	HX_("oneTimeEventsIdx",91,7a,66,79),
	HX_("waitLock",00,01,9a,50),
	HX_("promisedEventsCount",0d,bf,c2,9b),
	HX_("regularEvents",95,42,47,b5),
	HX_("progress",ad,f7,2a,86),
	HX_("loop",64,a6,b7,47),
	::String(null()) };

::hx::Class EventLoop_obj::__mClass;

void EventLoop_obj::__register()
{
	EventLoop_obj _hx_dummy;
	EventLoop_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.thread.EventLoop",5b,45,a8,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EventLoop_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EventLoop_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventLoop_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventLoop_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace thread

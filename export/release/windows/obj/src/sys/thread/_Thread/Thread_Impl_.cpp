#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_sys_thread_EventLoop
#include <sys/thread/EventLoop.h>
#endif
#ifndef INCLUDED_sys_thread_NoEventLoopException
#include <sys/thread/NoEventLoopException.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_Thread_Impl_
#include <sys/thread/_Thread/Thread_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1eb101978d3f352a_54_get_events,"sys.thread._Thread.Thread_Impl_","get_events",0x2940127e,"sys.thread._Thread.Thread_Impl_.get_events","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/thread/Thread.hx",54,0x5ec2eeb7)
HX_LOCAL_STACK_FRAME(_hx_pos_1eb101978d3f352a_62_processEvents,"sys.thread._Thread.Thread_Impl_","processEvents",0xf30238cc,"sys.thread._Thread.Thread_Impl_.processEvents","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/thread/Thread.hx",62,0x5ec2eeb7)
namespace sys{
namespace thread{
namespace _Thread{

void Thread_Impl__obj::__construct() { }

Dynamic Thread_Impl__obj::__CreateEmpty() { return new Thread_Impl__obj; }

void *Thread_Impl__obj::_hx_vtable = 0;

Dynamic Thread_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Thread_Impl__obj > _hx_result = new Thread_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Thread_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3097b824;
}

 ::sys::thread::EventLoop Thread_Impl__obj::get_events( ::sys::thread::_Thread::HaxeThread this1){
            	HX_GC_STACKFRAME(&_hx_pos_1eb101978d3f352a_54_get_events)
HXLINE(  55)		if (::hx::IsNull( this1->events )) {
HXLINE(  56)			HX_STACK_DO_THROW( ::sys::thread::NoEventLoopException_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE(  57)		return this1->events;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Thread_Impl__obj,get_events,return )

void Thread_Impl__obj::processEvents(){
            	HX_STACKFRAME(&_hx_pos_1eb101978d3f352a_62_processEvents)
HXDLIN(  62)		::sys::thread::_Thread::HaxeThread_obj::current()->events->loop();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Thread_Impl__obj,processEvents,(void))


Thread_Impl__obj::Thread_Impl__obj()
{
}

bool Thread_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"get_events") ) { outValue = get_events_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"processEvents") ) { outValue = processEvents_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Thread_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Thread_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Thread_Impl__obj::__mClass;

static ::String Thread_Impl__obj_sStaticFields[] = {
	HX_("get_events",e2,be,f1,86),
	HX_("processEvents",e8,62,bd,6c),
	::String(null())
};

void Thread_Impl__obj::__register()
{
	Thread_Impl__obj _hx_dummy;
	Thread_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.thread._Thread.Thread_Impl_",52,6f,c2,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Thread_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Thread_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Thread_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Thread_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Thread_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace thread
} // end namespace _Thread

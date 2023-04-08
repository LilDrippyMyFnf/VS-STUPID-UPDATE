#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_sys_thread_NoEventLoopException
#include <sys/thread/NoEventLoopException.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aef99a7c708d87b0_7_new,"sys.thread.NoEventLoopException","new",0x6e47ae47,"sys.thread.NoEventLoopException.new","C:\\HaxeToolkit\\haxe\\std/sys/thread/NoEventLoopException.hx",7,0xf0ee9102)
namespace sys{
namespace thread{

void NoEventLoopException_obj::__construct(::String __o_msg, ::haxe::Exception previous){
            		::String msg = __o_msg;
            		if (::hx::IsNull(__o_msg)) msg = HX_("Event loop is not available. Refer to sys.thread.Thread.runWithEventLoop.",89,e6,4c,1c);
            	HX_STACKFRAME(&_hx_pos_aef99a7c708d87b0_7_new)
HXDLIN(   7)		super::__construct(msg,previous,null());
            	}

Dynamic NoEventLoopException_obj::__CreateEmpty() { return new NoEventLoopException_obj; }

void *NoEventLoopException_obj::_hx_vtable = 0;

Dynamic NoEventLoopException_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NoEventLoopException_obj > _hx_result = new NoEventLoopException_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool NoEventLoopException_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x00a9e885) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x00a9e885;
	} else {
		return inClassId==(int)0x677ddc49;
	}
}


NoEventLoopException_obj::NoEventLoopException_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NoEventLoopException_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NoEventLoopException_obj_sStaticStorageInfo = 0;
#endif

::hx::Class NoEventLoopException_obj::__mClass;

void NoEventLoopException_obj::__register()
{
	NoEventLoopException_obj _hx_dummy;
	NoEventLoopException_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.thread.NoEventLoopException",d5,7e,9b,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NoEventLoopException_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NoEventLoopException_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NoEventLoopException_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace thread

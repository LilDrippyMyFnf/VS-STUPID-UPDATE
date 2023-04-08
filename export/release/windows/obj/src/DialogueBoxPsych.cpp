#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DialogueBoxPsych
#include <DialogueBoxPsych.h>
#endif
#ifndef INCLUDED_DialogueCharacter
#include <DialogueCharacter.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_TypedAlphabet
#include <TypedAlphabet.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_128129519e640548_161_new,"DialogueBoxPsych","new",0x1a49b57a,"DialogueBoxPsych.new","DialogueBoxPsych.hx",161,0xf6ef1736)
static const ::String _hx_array_data_c9b73088_1[] = {
	HX_("normal",27,72,69,30),HX_("angry",21,49,e2,22),
};
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_234_spawnCharacters,"DialogueBoxPsych","spawnCharacters",0xbe2056df,"DialogueBoxPsych.spawnCharacters","DialogueBoxPsych.hx",234,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_290_update,"DialogueBoxPsych","update",0xc33c4d2f,"DialogueBoxPsych.update","DialogueBoxPsych.hx",290,0xf6ef1736)
static const ::String _hx_array_data_c9b73088_17[] = {
	HX_("",00,00,00,00),HX_("center-",b8,f4,e5,19),
};
static const ::String _hx_array_data_c9b73088_18[] = {
	HX_("",00,00,00,00),HX_("center-",b8,f4,e5,19),
};
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_447_startNextDialog,"DialogueBoxPsych","startNextDialog",0x95e56137,"DialogueBoxPsych.startNextDialog","DialogueBoxPsych.hx",447,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_512_parseDialogue,"DialogueBoxPsych","parseDialogue",0xf7806e05,"DialogueBoxPsych.parseDialogue","DialogueBoxPsych.hx",512,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_522_updateBoxOffsets,"DialogueBoxPsych","updateBoxOffsets",0xb38f5cc4,"DialogueBoxPsych.updateBoxOffsets","DialogueBoxPsych.hx",522,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_230_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",230,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_231_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",231,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_232_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",232,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_280_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",280,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_281_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",281,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_282_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",282,0xf6ef1736)

void DialogueBoxPsych_obj::__construct( ::Dynamic dialogueList,::String song){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_161_new)
HXLINE( 445)		this->lastBoxType = HX_("",00,00,00,00);
HXLINE( 444)		this->lastCharacter = -1;
HXLINE( 288)		this->closeVolume = ((Float)1);
HXLINE( 287)		this->closeSound = HX_("dialogueClose",80,e3,49,e3);
HXLINE( 285)		this->ignoreThisFrame = true;
HXLINE( 284)		this->daText = null();
HXLINE( 283)		this->scrollSpeed = 4000;
HXLINE( 228)		this->dialogueEnded = false;
HXLINE( 227)		this->dialogueStarted = false;
HXLINE( 180)		this->curCharacter = HX_("",00,00,00,00);
HXLINE( 178)		this->textBoxTypes = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_1,2);
HXLINE( 176)		this->offsetPos = ((Float)-600);
HXLINE( 175)		this->currentText = 0;
HXLINE( 173)		this->arrayCharacters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 171)		this->textToType = HX_("",00,00,00,00);
HXLINE( 169)		this->bgFade = null();
HXLINE( 168)		this->skipDialogueThing = null();
HXLINE( 167)		this->nextDialogueThing = null();
HXLINE( 164)		this->dialogueList = null();
HXLINE( 185)		super::__construct(null(),null(),null());
HXLINE( 187)		bool _hx_tmp;
HXDLIN( 187)		if (::hx::IsNotNull( song )) {
HXLINE( 187)			_hx_tmp = (song != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 187)			_hx_tmp = false;
            		}
HXDLIN( 187)		if (_hx_tmp) {
HXLINE( 188)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 188)			::String library = null();
HXDLIN( 188)			 ::openfl::media::Sound file = ::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),song,library);
HXDLIN( 188)			_hx_tmp->playMusic(file,0,null(),null());
HXLINE( 189)			{
HXLINE( 189)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 189)				 ::Dynamic onComplete = null();
HXDLIN( 189)				if (::hx::IsNull( _this->_channel )) {
HXLINE( 189)					_this->play(null(),null(),null());
            				}
HXDLIN( 189)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 189)					_this->fadeTween->cancel();
            				}
HXDLIN( 189)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),( (Float)(1) ),2, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
            		}
HXLINE( 192)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-500,-500,null());
HXDLIN( 192)		this->bgFade = _hx_tmp1->makeGraphic((::flixel::FlxG_obj::width * 2),(::flixel::FlxG_obj::height * 2),-1,null(),null());
HXLINE( 193)		{
HXLINE( 193)			 ::flixel::math::FlxBasePoint this1 = this->bgFade->scrollFactor;
HXDLIN( 193)			this1->set_x(( (Float)(0) ));
HXDLIN( 193)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 194)		this->bgFade->set_visible(true);
HXLINE( 195)		this->bgFade->set_alpha(( (Float)(0) ));
HXLINE( 196)		this->add(this->bgFade);
HXLINE( 198)		this->dialogueList = dialogueList;
HXLINE( 199)		this->spawnCharacters();
HXLINE( 201)		this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,70,370,null());
HXLINE( 202)		 ::flixel::FlxSprite _hx_tmp2 = this->box;
HXDLIN( 202)		::String library = null();
HXDLIN( 202)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("speech_bubble",49,db,97,da),null());
HXDLIN( 202)		bool xmlExists = false;
HXDLIN( 202)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 202)			xmlExists = true;
            		}
HXDLIN( 202)		 ::Dynamic _hx_tmp3;
HXDLIN( 202)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 202)			_hx_tmp3 = imageLoaded;
            		}
            		else {
HXLINE( 202)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("speech_bubble",49,db,97,da),library);
HXDLIN( 202)			_hx_tmp3 = returnAsset;
            		}
HXDLIN( 202)		::String _hx_tmp4;
HXDLIN( 202)		if (xmlExists) {
HXLINE( 202)			_hx_tmp4 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 202)			_hx_tmp4 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN( 202)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,_hx_tmp4));
HXLINE( 203)		{
HXLINE( 203)			 ::flixel::math::FlxBasePoint this2 = this->box->scrollFactor;
HXDLIN( 203)			this2->set_x(( (Float)(0) ));
HXDLIN( 203)			this2->set_y(( (Float)(0) ));
            		}
HXLINE( 204)		this->box->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 205)		this->box->animation->addByPrefix(HX_("normal",27,72,69,30),HX_("speech bubble normal",bd,d5,bc,a7),24,null(),null(),null());
HXLINE( 206)		this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Speech Bubble Normal Open",0d,59,3f,7c),24,false,null(),null());
HXLINE( 207)		this->box->animation->addByPrefix(HX_("angry",21,49,e2,22),HX_("AHH speech bubble",eb,de,b2,20),24,null(),null(),null());
HXLINE( 208)		this->box->animation->addByPrefix(HX_("angryOpen",8b,1d,01,b1),HX_("speech bubble loud open",42,35,10,f0),24,false,null(),null());
HXLINE( 209)		this->box->animation->addByPrefix(HX_("center-normal",df,c0,ab,9c),HX_("speech bubble middle",eb,36,b2,c3),24,null(),null(),null());
HXLINE( 210)		this->box->animation->addByPrefix(HX_("center-normalOpen",49,4c,74,58),HX_("Speech Bubble Middle Open",1f,f1,94,ea),24,false,null(),null());
HXLINE( 211)		this->box->animation->addByPrefix(HX_("center-angry",69,39,92,b0),HX_("AHH Speech Bubble middle",ea,0b,3d,74),24,null(),null(),null());
HXLINE( 212)		this->box->animation->addByPrefix(HX_("center-angryOpen",d3,d1,42,e2),HX_("speech bubble Middle loud open",c3,b9,85,ee),24,false,null(),null());
HXLINE( 213)		this->box->animation->play(HX_("normal",27,72,69,30),true,null(),null());
HXLINE( 214)		this->box->set_visible(false);
HXLINE( 215)		 ::flixel::FlxSprite _hx_tmp5 = this->box;
HXDLIN( 215)		_hx_tmp5->setGraphicSize(::Std_obj::_hx_int((this->box->get_width() * ((Float)0.9))),null());
HXLINE( 216)		this->box->updateHitbox();
HXLINE( 217)		this->add(this->box);
HXLINE( 219)		this->daText =  ::TypedAlphabet_obj::__alloc( HX_CTX ,( (Float)(::DialogueBoxPsych_obj::DEFAULT_TEXT_X) ),( (Float)(::DialogueBoxPsych_obj::DEFAULT_TEXT_Y) ),HX_("",00,00,00,00),null(),null());
HXLINE( 220)		this->daText->set_scaleX(((Float)0.7));
HXLINE( 221)		this->daText->set_scaleY(((Float)0.7));
HXLINE( 222)		this->add(this->daText);
HXLINE( 224)		this->startNextDialog();
            	}

Dynamic DialogueBoxPsych_obj::__CreateEmpty() { return new DialogueBoxPsych_obj; }

void *DialogueBoxPsych_obj::_hx_vtable = 0;

Dynamic DialogueBoxPsych_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueBoxPsych_obj > _hx_result = new DialogueBoxPsych_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DialogueBoxPsych_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7d24723c || inClassId==(int)0x7dab0655;
	}
}

void DialogueBoxPsych_obj::spawnCharacters(){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_234_spawnCharacters)
HXLINE( 236)		 ::haxe::ds::StringMap charsMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 240)		{
HXLINE( 240)			int _g = 0;
HXDLIN( 240)			int _g1 = ( (::Array< ::Dynamic>)(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic)) )->length;
HXDLIN( 240)			while((_g < _g1)){
HXLINE( 240)				_g = (_g + 1);
HXDLIN( 240)				int i = (_g - 1);
HXLINE( 241)				if (::hx::IsNotNull(  ::Dynamic(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic))->__GetItem(i) )) {
HXLINE( 242)					::String charToAdd = ( (::String)( ::Dynamic(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("portrait",5b,21,af,b8),::hx::paccDynamic)) );
HXLINE( 243)					bool _hx_tmp;
HXDLIN( 243)					if (charsMap->exists(charToAdd)) {
HXLINE( 243)						_hx_tmp = !(( (bool)(charsMap->get(charToAdd)) ));
            					}
            					else {
HXLINE( 243)						_hx_tmp = true;
            					}
HXDLIN( 243)					if (_hx_tmp) {
HXLINE( 244)						charsMap->set(charToAdd,true);
            					}
            				}
            			}
            		}
HXLINE( 249)		{
HXLINE( 249)			 ::Dynamic individualChar = charsMap->keys();
HXDLIN( 249)			while(( (bool)(individualChar->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 249)				::String individualChar1 = ( (::String)(individualChar->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 250)				Float x = ::DialogueBoxPsych_obj::LEFT_CHAR_X;
HXLINE( 251)				Float y = ::DialogueBoxPsych_obj::DEFAULT_CHAR_Y;
HXLINE( 252)				 ::DialogueCharacter _hx_char =  ::DialogueCharacter_obj::__alloc( HX_CTX ,(x + this->offsetPos),y,individualChar1);
HXLINE( 253)				Float _hx_tmp = (_hx_char->get_width() * ((Float)0.7));
HXDLIN( 253)				_hx_char->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ( (Float)(_hx_char->jsonFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) ))),null());
HXLINE( 254)				_hx_char->updateHitbox();
HXLINE( 255)				{
HXLINE( 255)					 ::flixel::math::FlxBasePoint this1 = _hx_char->scrollFactor;
HXDLIN( 255)					this1->set_x(( (Float)(0) ));
HXDLIN( 255)					this1->set_y(( (Float)(0) ));
            				}
HXLINE( 256)				_hx_char->set_alpha(((Float)0.00001));
HXLINE( 257)				this->add(_hx_char);
HXLINE( 259)				bool saveY = false;
HXLINE( 260)				::String _hx_switch_0 = ( (::String)(_hx_char->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 262)					_hx_char->set_x((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )));
HXLINE( 263)					Float char1 = _hx_char->x;
HXDLIN( 263)					_hx_char->set_x((char1 - (_hx_char->get_width() / ( (Float)(2) ))));
HXLINE( 264)					y = _hx_char->y;
HXLINE( 265)					_hx_char->set_y(( (Float)((::flixel::FlxG_obj::height + 50)) ));
HXLINE( 266)					saveY = true;
HXLINE( 261)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 268)					int x1 = ::flixel::FlxG_obj::width;
HXDLIN( 268)					Float x2 = (( (Float)(x1) ) - _hx_char->get_width());
HXDLIN( 268)					x = (x2 + ::DialogueBoxPsych_obj::RIGHT_CHAR_X);
HXLINE( 269)					_hx_char->set_x((x - this->offsetPos));
HXLINE( 267)					goto _hx_goto_4;
            				}
            				_hx_goto_4:;
HXLINE( 271)				x = (x +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0));
HXLINE( 272)				y = (y +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1));
HXLINE( 273)				_hx_char->set_x((_hx_char->x +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0)));
HXLINE( 274)				_hx_char->set_y((_hx_char->y +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1)));
HXLINE( 275)				Float _hx_tmp1;
HXDLIN( 275)				if (saveY) {
HXLINE( 275)					_hx_tmp1 = y;
            				}
            				else {
HXLINE( 275)					_hx_tmp1 = x;
            				}
HXDLIN( 275)				_hx_char->startingPos = _hx_tmp1;
HXLINE( 276)				this->arrayCharacters->push(_hx_char);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBoxPsych_obj,spawnCharacters,(void))

void DialogueBoxPsych_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_128129519e640548_290_update)
HXLINE( 291)		if (this->ignoreThisFrame) {
HXLINE( 292)			this->ignoreThisFrame = false;
HXLINE( 293)			this->super::update(elapsed);
HXLINE( 294)			return;
            		}
HXLINE( 297)		if (!(this->dialogueEnded)) {
HXLINE( 298)			 ::flixel::FlxSprite fh = this->bgFade;
HXDLIN( 298)			fh->set_alpha((fh->alpha + (((Float)0.5) * elapsed)));
HXLINE( 299)			if ((this->bgFade->alpha > ((Float)0.5))) {
HXLINE( 299)				this->bgFade->set_alpha(((Float)0.5));
            			}
HXLINE( 301)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 302)				if (!(this->daText->finishedText)) {
HXLINE( 303)					this->daText->finishText();
HXLINE( 304)					if (::hx::IsNotNull( this->skipDialogueThing )) {
HXLINE( 305)						this->skipDialogueThing();
            					}
            				}
            				else {
HXLINE( 307)					if ((this->currentText >= ( (::Array< ::Dynamic>)(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic)) )->length)) {
HXLINE( 308)						this->dialogueEnded = true;
HXLINE( 309)						{
HXLINE( 309)							int _g = 0;
HXDLIN( 309)							int _g1 = this->textBoxTypes->length;
HXDLIN( 309)							while((_g < _g1)){
HXLINE( 309)								_g = (_g + 1);
HXDLIN( 309)								int i = (_g - 1);
HXLINE( 310)								::Array< ::String > checkArray = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_17,2);
HXLINE( 311)								::String animName = this->box->animation->_curAnim->name;
HXLINE( 312)								{
HXLINE( 312)									int _g1 = 0;
HXDLIN( 312)									int _g2 = checkArray->length;
HXDLIN( 312)									while((_g1 < _g2)){
HXLINE( 312)										_g1 = (_g1 + 1);
HXDLIN( 312)										int j = (_g1 - 1);
HXLINE( 313)										bool _hx_tmp;
HXDLIN( 313)										if ((animName != (checkArray->__get(j) + this->textBoxTypes->__get(i)))) {
HXLINE( 313)											_hx_tmp = (animName == ((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)));
            										}
            										else {
HXLINE( 313)											_hx_tmp = true;
            										}
HXDLIN( 313)										if (_hx_tmp) {
HXLINE( 314)											this->box->animation->play(((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)),true,null(),null());
            										}
            									}
            								}
            							}
            						}
HXLINE( 319)						this->box->animation->_curAnim->set_curFrame((this->box->animation->_curAnim->frames->length - 1));
HXLINE( 320)						this->box->animation->_curAnim->reverse();
HXLINE( 321)						if (::hx::IsNotNull( this->daText )) {
HXLINE( 323)							this->daText->kill();
HXLINE( 324)							this->remove(this->daText,null());
HXLINE( 325)							this->daText->destroy();
            						}
HXLINE( 327)						::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
HXLINE( 328)						{
HXLINE( 328)							 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 328)							 ::Dynamic To = 0;
HXDLIN( 328)							 ::Dynamic onComplete = null();
HXDLIN( 328)							if (::hx::IsNull( To )) {
HXLINE( 328)								To = 0;
            							}
HXDLIN( 328)							if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 328)								_this->fadeTween->cancel();
            							}
HXDLIN( 328)							_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),1, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            						}
            					}
            					else {
HXLINE( 330)						this->startNextDialog();
            					}
            				}
HXLINE( 332)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 332)				 ::openfl::media::Sound _hx_tmp1 = ::Paths_obj::sound(this->closeSound,null());
HXDLIN( 332)				_hx_tmp->play(_hx_tmp1,this->closeVolume,null(),null(),null(),null());
            			}
            			else {
HXLINE( 333)				if (this->daText->finishedText) {
HXLINE( 334)					 ::DialogueCharacter _hx_char = this->arrayCharacters->__get(this->lastCharacter).StaticCast<  ::DialogueCharacter >();
HXLINE( 335)					bool _hx_tmp;
HXDLIN( 335)					bool _hx_tmp1;
HXDLIN( 335)					bool _hx_tmp2;
HXDLIN( 335)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 335)						_hx_tmp2 = ::hx::IsNotNull( _hx_char->animation->_curAnim );
            					}
            					else {
HXLINE( 335)						_hx_tmp2 = false;
            					}
HXDLIN( 335)					if (_hx_tmp2) {
HXLINE( 335)						_hx_tmp1 = _hx_char->animationIsLoop();
            					}
            					else {
HXLINE( 335)						_hx_tmp1 = false;
            					}
HXDLIN( 335)					if (_hx_tmp1) {
HXLINE( 335)						_hx_tmp = _hx_char->animation->get_finished();
            					}
            					else {
HXLINE( 335)						_hx_tmp = false;
            					}
HXDLIN( 335)					if (_hx_tmp) {
HXLINE( 336)						_hx_char->playAnim(_hx_char->animation->_curAnim->name,true);
            					}
            				}
            				else {
HXLINE( 339)					 ::DialogueCharacter _hx_char = this->arrayCharacters->__get(this->lastCharacter).StaticCast<  ::DialogueCharacter >();
HXLINE( 340)					bool _hx_tmp;
HXDLIN( 340)					bool _hx_tmp1;
HXDLIN( 340)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 340)						_hx_tmp1 = ::hx::IsNotNull( _hx_char->animation->_curAnim );
            					}
            					else {
HXLINE( 340)						_hx_tmp1 = false;
            					}
HXDLIN( 340)					if (_hx_tmp1) {
HXLINE( 340)						_hx_tmp = _hx_char->animation->get_finished();
            					}
            					else {
HXLINE( 340)						_hx_tmp = false;
            					}
HXDLIN( 340)					if (_hx_tmp) {
HXLINE( 341)						_hx_char->animation->_curAnim->restart();
            					}
            				}
            			}
HXLINE( 345)			if (this->box->animation->_curAnim->finished) {
HXLINE( 346)				{
HXLINE( 346)					int _g = 0;
HXDLIN( 346)					int _g1 = this->textBoxTypes->length;
HXDLIN( 346)					while((_g < _g1)){
HXLINE( 346)						_g = (_g + 1);
HXDLIN( 346)						int i = (_g - 1);
HXLINE( 347)						::Array< ::String > checkArray = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_18,2);
HXLINE( 348)						::String animName = this->box->animation->_curAnim->name;
HXLINE( 349)						{
HXLINE( 349)							int _g1 = 0;
HXDLIN( 349)							int _g2 = checkArray->length;
HXDLIN( 349)							while((_g1 < _g2)){
HXLINE( 349)								_g1 = (_g1 + 1);
HXDLIN( 349)								int j = (_g1 - 1);
HXLINE( 350)								bool _hx_tmp;
HXDLIN( 350)								if ((animName != (checkArray->__get(j) + this->textBoxTypes->__get(i)))) {
HXLINE( 350)									_hx_tmp = (animName == ((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)));
            								}
            								else {
HXLINE( 350)									_hx_tmp = true;
            								}
HXDLIN( 350)								if (_hx_tmp) {
HXLINE( 351)									this->box->animation->play((checkArray->__get(j) + this->textBoxTypes->__get(i)),true,null(),null());
            								}
            							}
            						}
            					}
            				}
HXLINE( 355)				::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
            			}
HXLINE( 358)			bool _hx_tmp;
HXDLIN( 358)			if ((this->lastCharacter != -1)) {
HXLINE( 358)				_hx_tmp = (this->arrayCharacters->length > 0);
            			}
            			else {
HXLINE( 358)				_hx_tmp = false;
            			}
HXDLIN( 358)			if (_hx_tmp) {
HXLINE( 359)				int _g = 0;
HXDLIN( 359)				int _g1 = this->arrayCharacters->length;
HXDLIN( 359)				while((_g < _g1)){
HXLINE( 359)					_g = (_g + 1);
HXDLIN( 359)					int i = (_g - 1);
HXLINE( 360)					 ::DialogueCharacter _hx_char = this->arrayCharacters->__get(i).StaticCast<  ::DialogueCharacter >();
HXLINE( 361)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 362)						if ((i != this->lastCharacter)) {
HXLINE( 363)							::String _hx_switch_0 = ( (::String)(_hx_char->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            							if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 368)								_hx_char->set_y((_hx_char->y + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 369)								if ((_hx_char->y > (_hx_char->startingPos + ::flixel::FlxG_obj::height))) {
HXLINE( 369)									_hx_char->set_y((_hx_char->startingPos + ::flixel::FlxG_obj::height));
            								}
HXLINE( 367)								goto _hx_goto_11;
            							}
            							if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 365)								_hx_char->set_x((_hx_char->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 366)								if ((_hx_char->x < (_hx_char->startingPos + this->offsetPos))) {
HXLINE( 366)									_hx_char->set_x((_hx_char->startingPos + this->offsetPos));
            								}
HXLINE( 364)								goto _hx_goto_11;
            							}
            							if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 371)								_hx_char->set_x((_hx_char->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 372)								if ((_hx_char->x > (_hx_char->startingPos - this->offsetPos))) {
HXLINE( 372)									_hx_char->set_x((_hx_char->startingPos - this->offsetPos));
            								}
HXLINE( 370)								goto _hx_goto_11;
            							}
            							_hx_goto_11:;
HXLINE( 374)							_hx_char->set_alpha((_hx_char->alpha - (( (Float)(3) ) * elapsed)));
HXLINE( 375)							if ((_hx_char->alpha < ((Float)0.00001))) {
HXLINE( 375)								_hx_char->set_alpha(((Float)0.00001));
            							}
            						}
            						else {
HXLINE( 377)							::String _hx_switch_1 = ( (::String)(_hx_char->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            							if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE( 382)								_hx_char->set_y((_hx_char->y - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 383)								if ((_hx_char->y < _hx_char->startingPos)) {
HXLINE( 383)									_hx_char->set_y(_hx_char->startingPos);
            								}
HXLINE( 381)								goto _hx_goto_12;
            							}
            							if (  (_hx_switch_1==HX_("left",07,08,b0,47)) ){
HXLINE( 379)								_hx_char->set_x((_hx_char->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 380)								if ((_hx_char->x > _hx_char->startingPos)) {
HXLINE( 380)									_hx_char->set_x(_hx_char->startingPos);
            								}
HXLINE( 378)								goto _hx_goto_12;
            							}
            							if (  (_hx_switch_1==HX_("right",dc,0b,64,e9)) ){
HXLINE( 385)								_hx_char->set_x((_hx_char->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 386)								if ((_hx_char->x < _hx_char->startingPos)) {
HXLINE( 386)									_hx_char->set_x(_hx_char->startingPos);
            								}
HXLINE( 384)								goto _hx_goto_12;
            							}
            							_hx_goto_12:;
HXLINE( 388)							_hx_char->set_alpha((_hx_char->alpha + (( (Float)(3) ) * elapsed)));
HXLINE( 389)							if ((_hx_char->alpha > 1)) {
HXLINE( 389)								_hx_char->set_alpha(( (Float)(1) ));
            							}
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 395)			bool _hx_tmp;
HXDLIN( 395)			if (::hx::IsNotNull( this->box )) {
HXLINE( 395)				_hx_tmp = (this->box->animation->_curAnim->curFrame <= 0);
            			}
            			else {
HXLINE( 395)				_hx_tmp = false;
            			}
HXDLIN( 395)			if (_hx_tmp) {
HXLINE( 396)				this->box->kill();
HXLINE( 397)				this->remove(this->box,null());
HXLINE( 398)				this->box->destroy();
HXLINE( 399)				this->box = null();
            			}
HXLINE( 402)			if (::hx::IsNotNull( this->bgFade )) {
HXLINE( 403)				 ::flixel::FlxSprite fh = this->bgFade;
HXDLIN( 403)				fh->set_alpha((fh->alpha - (((Float)0.5) * elapsed)));
HXLINE( 404)				if ((this->bgFade->alpha <= 0)) {
HXLINE( 405)					this->bgFade->kill();
HXLINE( 406)					this->remove(this->bgFade,null());
HXLINE( 407)					this->bgFade->destroy();
HXLINE( 408)					this->bgFade = null();
            				}
            			}
HXLINE( 412)			{
HXLINE( 412)				int _g = 0;
HXDLIN( 412)				int _g1 = this->arrayCharacters->length;
HXDLIN( 412)				while((_g < _g1)){
HXLINE( 412)					_g = (_g + 1);
HXDLIN( 412)					int i = (_g - 1);
HXLINE( 413)					 ::DialogueCharacter leChar = this->arrayCharacters->__get(i).StaticCast<  ::DialogueCharacter >();
HXLINE( 414)					if (::hx::IsNotNull( leChar )) {
HXLINE( 415)						::String _hx_switch_2 = ( (::String)(this->arrayCharacters->__get(i).StaticCast<  ::DialogueCharacter >()->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            						if (  (_hx_switch_2==HX_("center",d5,25,db,05)) ){
HXLINE( 419)							leChar->set_y((leChar->y + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXDLIN( 419)							goto _hx_goto_14;
            						}
            						if (  (_hx_switch_2==HX_("left",07,08,b0,47)) ){
HXLINE( 417)							leChar->set_x((leChar->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXDLIN( 417)							goto _hx_goto_14;
            						}
            						if (  (_hx_switch_2==HX_("right",dc,0b,64,e9)) ){
HXLINE( 421)							leChar->set_x((leChar->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXDLIN( 421)							goto _hx_goto_14;
            						}
            						_hx_goto_14:;
HXLINE( 423)						leChar->set_alpha((leChar->alpha - (elapsed * ( (Float)(10) ))));
            					}
            				}
            			}
HXLINE( 427)			bool _hx_tmp1;
HXDLIN( 427)			if (::hx::IsNull( this->box )) {
HXLINE( 427)				_hx_tmp1 = ::hx::IsNull( this->bgFade );
            			}
            			else {
HXLINE( 427)				_hx_tmp1 = false;
            			}
HXDLIN( 427)			if (_hx_tmp1) {
HXLINE( 428)				{
HXLINE( 428)					int _g = 0;
HXDLIN( 428)					int _g1 = this->arrayCharacters->length;
HXDLIN( 428)					while((_g < _g1)){
HXLINE( 428)						_g = (_g + 1);
HXDLIN( 428)						int i = (_g - 1);
HXLINE( 429)						 ::DialogueCharacter leChar = this->arrayCharacters->__get(0).StaticCast<  ::DialogueCharacter >();
HXLINE( 430)						if (::hx::IsNotNull( leChar )) {
HXLINE( 431)							this->arrayCharacters->remove(leChar);
HXLINE( 432)							leChar->kill();
HXLINE( 433)							this->remove(leChar,null());
HXLINE( 434)							leChar->destroy();
            						}
            					}
            				}
HXLINE( 437)				this->finishThing();
HXLINE( 438)				this->kill();
            			}
            		}
HXLINE( 441)		this->super::update(elapsed);
            	}


void DialogueBoxPsych_obj::startNextDialog(){
            	HX_STACKFRAME(&_hx_pos_128129519e640548_447_startNextDialog)
HXLINE( 448)		 ::Dynamic curDialogue = null();
HXLINE( 449)		while(true){
HXLINE( 450)			curDialogue =  ::Dynamic(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic))->__GetItem(this->currentText);
HXLINE( 449)			if (!(::hx::IsNull( curDialogue ))) {
HXLINE( 449)				goto _hx_goto_19;
            			}
            		}
            		_hx_goto_19:;
HXLINE( 453)		bool _hx_tmp;
HXDLIN( 453)		if (::hx::IsNotNull( curDialogue->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic) )) {
HXLINE( 453)			_hx_tmp = (( (::String)(curDialogue->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) ).length < 1);
            		}
            		else {
HXLINE( 453)			_hx_tmp = true;
            		}
HXDLIN( 453)		if (_hx_tmp) {
HXLINE( 453)			curDialogue->__SetField(HX_("text",ad,cc,f9,4c),HX_(" ",20,00,00,00),::hx::paccDynamic);
            		}
HXLINE( 454)		if (::hx::IsNull( curDialogue->__Field(HX_("boxState",06,60,2a,ff),::hx::paccDynamic) )) {
HXLINE( 454)			curDialogue->__SetField(HX_("boxState",06,60,2a,ff),HX_("normal",27,72,69,30),::hx::paccDynamic);
            		}
HXLINE( 455)		bool _hx_tmp1;
HXDLIN( 455)		if (::hx::IsNotNull( curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic) )) {
HXLINE( 455)			_hx_tmp1 = ::Math_obj::isNaN(( (Float)(curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 455)			_hx_tmp1 = true;
            		}
HXDLIN( 455)		if (_hx_tmp1) {
HXLINE( 455)			curDialogue->__SetField(HX_("speed",87,97,69,81),((Float)0.05),::hx::paccDynamic);
            		}
HXLINE( 457)		::String animName = ( (::String)(curDialogue->__Field(HX_("boxState",06,60,2a,ff),::hx::paccDynamic)) );
HXLINE( 458)		::String boxType = this->textBoxTypes->__get(0);
HXLINE( 459)		{
HXLINE( 459)			int _g = 0;
HXDLIN( 459)			int _g1 = this->textBoxTypes->length;
HXDLIN( 459)			while((_g < _g1)){
HXLINE( 459)				_g = (_g + 1);
HXDLIN( 459)				int i = (_g - 1);
HXLINE( 460)				if ((this->textBoxTypes->__get(i) == animName)) {
HXLINE( 461)					boxType = animName;
            				}
            			}
            		}
HXLINE( 465)		int character = 0;
HXLINE( 466)		this->box->set_visible(true);
HXLINE( 467)		{
HXLINE( 467)			int _g2 = 0;
HXDLIN( 467)			int _g3 = this->arrayCharacters->length;
HXDLIN( 467)			while((_g2 < _g3)){
HXLINE( 467)				_g2 = (_g2 + 1);
HXDLIN( 467)				int i = (_g2 - 1);
HXLINE( 468)				if (::hx::IsEq( this->arrayCharacters->__get(i).StaticCast<  ::DialogueCharacter >()->curCharacter,curDialogue->__Field(HX_("portrait",5b,21,af,b8),::hx::paccDynamic) )) {
HXLINE( 469)					character = i;
HXLINE( 470)					goto _hx_goto_21;
            				}
            			}
            			_hx_goto_21:;
            		}
HXLINE( 473)		::String centerPrefix = HX_("",00,00,00,00);
HXLINE( 474)		::String lePosition = ( (::String)(this->arrayCharacters->__get(character).StaticCast<  ::DialogueCharacter >()->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
HXLINE( 475)		if ((lePosition == HX_("center",d5,25,db,05))) {
HXLINE( 475)			centerPrefix = HX_("center-",b8,f4,e5,19);
            		}
HXLINE( 477)		if ((character != this->lastCharacter)) {
HXLINE( 478)			this->box->animation->play(((centerPrefix + boxType) + HX_("Open",ea,2f,8d,34)),true,null(),null());
HXLINE( 479)			::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
HXLINE( 480)			this->box->set_flipX((lePosition == HX_("left",07,08,b0,47)));
            		}
            		else {
HXLINE( 481)			if ((boxType != this->lastBoxType)) {
HXLINE( 482)				this->box->animation->play((centerPrefix + boxType),true,null(),null());
HXLINE( 483)				::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
            			}
            		}
HXLINE( 485)		this->lastCharacter = character;
HXLINE( 486)		this->lastBoxType = boxType;
HXLINE( 488)		this->daText->set_text(( (::String)(curDialogue->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) ));
HXLINE( 489)		this->daText->sound = ( (::String)(curDialogue->__Field(HX_("sound",cf,8c,cc,80),::hx::paccDynamic)) );
HXLINE( 490)		bool _hx_tmp2;
HXDLIN( 490)		if (::hx::IsNotNull( this->daText->sound )) {
HXLINE( 490)			_hx_tmp2 = (::StringTools_obj::trim(this->daText->sound) == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 490)			_hx_tmp2 = true;
            		}
HXDLIN( 490)		if (_hx_tmp2) {
HXLINE( 490)			this->daText->sound = HX_("dialogue",18,2d,94,a7);
            		}
HXLINE( 492)		this->daText->set_y(( (Float)(::DialogueBoxPsych_obj::DEFAULT_TEXT_Y) ));
HXLINE( 493)		if ((this->daText->rows > 2)) {
HXLINE( 493)			 ::TypedAlphabet fh = this->daText;
HXDLIN( 493)			fh->set_y((fh->y - ( (Float)(::DialogueBoxPsych_obj::LONG_TEXT_ADD) )));
            		}
HXLINE( 495)		 ::DialogueCharacter _hx_char = this->arrayCharacters->__get(character).StaticCast<  ::DialogueCharacter >();
HXLINE( 496)		if (::hx::IsNotNull( _hx_char )) {
HXLINE( 497)			_hx_char->playAnim(( (::String)(curDialogue->__Field(HX_("expression",98,11,9f,2e),::hx::paccDynamic)) ),this->daText->finishedText);
HXLINE( 498)			if (::hx::IsNotNull( _hx_char->animation->_curAnim )) {
HXLINE( 499)				Float rate = (( (Float)(24) ) - (((( (Float)(curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic)) ) - ((Float)0.05)) / ( (Float)(5) )) * ( (Float)(480) )));
HXLINE( 500)				if ((rate < 12)) {
HXLINE( 500)					rate = ( (Float)(12) );
            				}
            				else {
HXLINE( 501)					if ((rate > 48)) {
HXLINE( 501)						rate = ( (Float)(48) );
            					}
            				}
HXLINE( 502)				_hx_char->animation->_curAnim->set_frameRate(rate);
            			}
            		}
HXLINE( 505)		this->currentText++;
HXLINE( 507)		if (::hx::IsNotNull( this->nextDialogueThing )) {
HXLINE( 508)			this->nextDialogueThing();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBoxPsych_obj,startNextDialog,(void))

Float DialogueBoxPsych_obj::LEFT_CHAR_X;

Float DialogueBoxPsych_obj::RIGHT_CHAR_X;

Float DialogueBoxPsych_obj::DEFAULT_CHAR_Y;

int DialogueBoxPsych_obj::DEFAULT_TEXT_X;

int DialogueBoxPsych_obj::DEFAULT_TEXT_Y;

int DialogueBoxPsych_obj::LONG_TEXT_ADD;

 ::Dynamic DialogueBoxPsych_obj::parseDialogue(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_512_parseDialogue)
HXLINE( 514)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 516)			return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::sys::io::File_obj::getContent(path))->doParse();
            		}
HXLINE( 519)		return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::openfl::utils::Assets_obj::getText(path))->doParse();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DialogueBoxPsych_obj,parseDialogue,return )

void DialogueBoxPsych_obj::updateBoxOffsets( ::flixel::FlxSprite box){
            	HX_STACKFRAME(&_hx_pos_128129519e640548_522_updateBoxOffsets)
HXLINE( 523)		box->centerOffsets(null());
HXLINE( 524)		box->updateHitbox();
HXLINE( 525)		if (::StringTools_obj::startsWith(box->animation->_curAnim->name,HX_("angry",21,49,e2,22))) {
HXLINE( 526)			 ::flixel::math::FlxBasePoint this1 = box->offset;
HXDLIN( 526)			this1->set_x(( (Float)(50) ));
HXDLIN( 526)			this1->set_y(( (Float)(65) ));
            		}
            		else {
HXLINE( 527)			if (::StringTools_obj::startsWith(box->animation->_curAnim->name,HX_("center-angry",69,39,92,b0))) {
HXLINE( 528)				 ::flixel::math::FlxBasePoint this1 = box->offset;
HXDLIN( 528)				this1->set_x(( (Float)(50) ));
HXDLIN( 528)				this1->set_y(( (Float)(30) ));
            			}
            			else {
HXLINE( 530)				 ::flixel::math::FlxBasePoint this1 = box->offset;
HXDLIN( 530)				this1->set_x(( (Float)(10) ));
HXDLIN( 530)				this1->set_y(( (Float)(0) ));
            			}
            		}
HXLINE( 533)		if (!(box->flipX)) {
HXLINE( 533)			box->offset->set_y((box->offset->y + 10));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DialogueBoxPsych_obj,updateBoxOffsets,(void))


::hx::ObjectPtr< DialogueBoxPsych_obj > DialogueBoxPsych_obj::__new( ::Dynamic dialogueList,::String song) {
	::hx::ObjectPtr< DialogueBoxPsych_obj > __this = new DialogueBoxPsych_obj();
	__this->__construct(dialogueList,song);
	return __this;
}

::hx::ObjectPtr< DialogueBoxPsych_obj > DialogueBoxPsych_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic dialogueList,::String song) {
	DialogueBoxPsych_obj *__this = (DialogueBoxPsych_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueBoxPsych_obj), true, "DialogueBoxPsych"));
	*(void **)__this = DialogueBoxPsych_obj::_hx_vtable;
	__this->__construct(dialogueList,song);
	return __this;
}

DialogueBoxPsych_obj::DialogueBoxPsych_obj()
{
}

void DialogueBoxPsych_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueBoxPsych);
	HX_MARK_MEMBER_NAME(dialogue,"dialogue");
	HX_MARK_MEMBER_NAME(dialogueList,"dialogueList");
	HX_MARK_MEMBER_NAME(finishThing,"finishThing");
	HX_MARK_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_MARK_MEMBER_NAME(skipDialogueThing,"skipDialogueThing");
	HX_MARK_MEMBER_NAME(bgFade,"bgFade");
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(textToType,"textToType");
	HX_MARK_MEMBER_NAME(arrayCharacters,"arrayCharacters");
	HX_MARK_MEMBER_NAME(currentText,"currentText");
	HX_MARK_MEMBER_NAME(offsetPos,"offsetPos");
	HX_MARK_MEMBER_NAME(textBoxTypes,"textBoxTypes");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_MARK_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_MARK_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_MARK_MEMBER_NAME(daText,"daText");
	HX_MARK_MEMBER_NAME(ignoreThisFrame,"ignoreThisFrame");
	HX_MARK_MEMBER_NAME(closeSound,"closeSound");
	HX_MARK_MEMBER_NAME(closeVolume,"closeVolume");
	HX_MARK_MEMBER_NAME(lastCharacter,"lastCharacter");
	HX_MARK_MEMBER_NAME(lastBoxType,"lastBoxType");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueBoxPsych_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dialogue,"dialogue");
	HX_VISIT_MEMBER_NAME(dialogueList,"dialogueList");
	HX_VISIT_MEMBER_NAME(finishThing,"finishThing");
	HX_VISIT_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_VISIT_MEMBER_NAME(skipDialogueThing,"skipDialogueThing");
	HX_VISIT_MEMBER_NAME(bgFade,"bgFade");
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(textToType,"textToType");
	HX_VISIT_MEMBER_NAME(arrayCharacters,"arrayCharacters");
	HX_VISIT_MEMBER_NAME(currentText,"currentText");
	HX_VISIT_MEMBER_NAME(offsetPos,"offsetPos");
	HX_VISIT_MEMBER_NAME(textBoxTypes,"textBoxTypes");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_VISIT_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_VISIT_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_VISIT_MEMBER_NAME(daText,"daText");
	HX_VISIT_MEMBER_NAME(ignoreThisFrame,"ignoreThisFrame");
	HX_VISIT_MEMBER_NAME(closeSound,"closeSound");
	HX_VISIT_MEMBER_NAME(closeVolume,"closeVolume");
	HX_VISIT_MEMBER_NAME(lastCharacter,"lastCharacter");
	HX_VISIT_MEMBER_NAME(lastBoxType,"lastBoxType");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueBoxPsych_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { return ::hx::Val( bgFade ); }
		if (HX_FIELD_EQ(inName,"daText") ) { return ::hx::Val( daText ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { return ::hx::Val( dialogue ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetPos") ) { return ::hx::Val( offsetPos ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textToType") ) { return ::hx::Val( textToType ); }
		if (HX_FIELD_EQ(inName,"closeSound") ) { return ::hx::Val( closeSound ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { return ::hx::Val( finishThing ); }
		if (HX_FIELD_EQ(inName,"currentText") ) { return ::hx::Val( currentText ); }
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { return ::hx::Val( scrollSpeed ); }
		if (HX_FIELD_EQ(inName,"closeVolume") ) { return ::hx::Val( closeVolume ); }
		if (HX_FIELD_EQ(inName,"lastBoxType") ) { return ::hx::Val( lastBoxType ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dialogueList") ) { return ::hx::Val( dialogueList ); }
		if (HX_FIELD_EQ(inName,"textBoxTypes") ) { return ::hx::Val( textBoxTypes ); }
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { return ::hx::Val( dialogueEnded ); }
		if (HX_FIELD_EQ(inName,"lastCharacter") ) { return ::hx::Val( lastCharacter ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"arrayCharacters") ) { return ::hx::Val( arrayCharacters ); }
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { return ::hx::Val( dialogueStarted ); }
		if (HX_FIELD_EQ(inName,"spawnCharacters") ) { return ::hx::Val( spawnCharacters_dyn() ); }
		if (HX_FIELD_EQ(inName,"ignoreThisFrame") ) { return ::hx::Val( ignoreThisFrame ); }
		if (HX_FIELD_EQ(inName,"startNextDialog") ) { return ::hx::Val( startNextDialog_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { return ::hx::Val( nextDialogueThing ); }
		if (HX_FIELD_EQ(inName,"skipDialogueThing") ) { return ::hx::Val( skipDialogueThing ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DialogueBoxPsych_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"LEFT_CHAR_X") ) { outValue = ( LEFT_CHAR_X ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RIGHT_CHAR_X") ) { outValue = ( RIGHT_CHAR_X ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"LONG_TEXT_ADD") ) { outValue = ( LONG_TEXT_ADD ); return true; }
		if (HX_FIELD_EQ(inName,"parseDialogue") ) { outValue = parseDialogue_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHAR_Y") ) { outValue = ( DEFAULT_CHAR_Y ); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_X") ) { outValue = ( DEFAULT_TEXT_X ); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_Y") ) { outValue = ( DEFAULT_TEXT_Y ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateBoxOffsets") ) { outValue = updateBoxOffsets_dyn(); return true; }
	}
	return false;
}

::hx::Val DialogueBoxPsych_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { bgFade=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"daText") ) { daText=inValue.Cast<  ::TypedAlphabet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { dialogue=inValue.Cast<  ::TypedAlphabet >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetPos") ) { offsetPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textToType") ) { textToType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"closeSound") ) { closeSound=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { finishThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentText") ) { currentText=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { scrollSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"closeVolume") ) { closeVolume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastBoxType") ) { lastBoxType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dialogueList") ) { dialogueList=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textBoxTypes") ) { textBoxTypes=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { dialogueEnded=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastCharacter") ) { lastCharacter=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"arrayCharacters") ) { arrayCharacters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { dialogueStarted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreThisFrame") ) { ignoreThisFrame=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { nextDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipDialogueThing") ) { skipDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DialogueBoxPsych_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"LEFT_CHAR_X") ) { LEFT_CHAR_X=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RIGHT_CHAR_X") ) { RIGHT_CHAR_X=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"LONG_TEXT_ADD") ) { LONG_TEXT_ADD=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHAR_Y") ) { DEFAULT_CHAR_Y=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_X") ) { DEFAULT_TEXT_X=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_Y") ) { DEFAULT_TEXT_Y=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void DialogueBoxPsych_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dialogue",18,2d,94,a7));
	outFields->push(HX_("dialogueList",96,e1,d8,0d));
	outFields->push(HX_("bgFade",e1,fd,cd,ab));
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("textToType",62,de,b2,b9));
	outFields->push(HX_("arrayCharacters",a3,23,67,53));
	outFields->push(HX_("currentText",86,a5,8b,85));
	outFields->push(HX_("offsetPos",c1,3b,c0,41));
	outFields->push(HX_("textBoxTypes",3b,d8,65,ca));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("dialogueStarted",09,77,22,70));
	outFields->push(HX_("dialogueEnded",c2,14,61,0b));
	outFields->push(HX_("scrollSpeed",3a,e0,46,cb));
	outFields->push(HX_("daText",ca,52,61,0d));
	outFields->push(HX_("ignoreThisFrame",7d,81,d2,40));
	outFields->push(HX_("closeSound",f7,e9,ad,4b));
	outFields->push(HX_("closeVolume",b2,4f,a3,19));
	outFields->push(HX_("lastCharacter",73,b6,0a,40));
	outFields->push(HX_("lastBoxType",af,f2,77,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueBoxPsych_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::TypedAlphabet */ ,(int)offsetof(DialogueBoxPsych_obj,dialogue),HX_("dialogue",18,2d,94,a7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,dialogueList),HX_("dialogueList",96,e1,d8,0d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,finishThing),HX_("finishThing",9b,aa,8e,36)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,nextDialogueThing),HX_("nextDialogueThing",c3,c2,a1,d9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,skipDialogueThing),HX_("skipDialogueThing",b7,29,12,4e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBoxPsych_obj,bgFade),HX_("bgFade",e1,fd,cd,ab)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBoxPsych_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,textToType),HX_("textToType",62,de,b2,b9)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DialogueBoxPsych_obj,arrayCharacters),HX_("arrayCharacters",a3,23,67,53)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,currentText),HX_("currentText",86,a5,8b,85)},
	{::hx::fsFloat,(int)offsetof(DialogueBoxPsych_obj,offsetPos),HX_("offsetPos",c1,3b,c0,41)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBoxPsych_obj,textBoxTypes),HX_("textBoxTypes",3b,d8,65,ca)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,dialogueStarted),HX_("dialogueStarted",09,77,22,70)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,dialogueEnded),HX_("dialogueEnded",c2,14,61,0b)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,scrollSpeed),HX_("scrollSpeed",3a,e0,46,cb)},
	{::hx::fsObject /*  ::TypedAlphabet */ ,(int)offsetof(DialogueBoxPsych_obj,daText),HX_("daText",ca,52,61,0d)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,ignoreThisFrame),HX_("ignoreThisFrame",7d,81,d2,40)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,closeSound),HX_("closeSound",f7,e9,ad,4b)},
	{::hx::fsFloat,(int)offsetof(DialogueBoxPsych_obj,closeVolume),HX_("closeVolume",b2,4f,a3,19)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,lastCharacter),HX_("lastCharacter",73,b6,0a,40)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,lastBoxType),HX_("lastBoxType",af,f2,77,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DialogueBoxPsych_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &DialogueBoxPsych_obj::LEFT_CHAR_X,HX_("LEFT_CHAR_X",e7,bb,19,61)},
	{::hx::fsFloat,(void *) &DialogueBoxPsych_obj::RIGHT_CHAR_X,HX_("RIGHT_CHAR_X",d2,58,47,14)},
	{::hx::fsFloat,(void *) &DialogueBoxPsych_obj::DEFAULT_CHAR_Y,HX_("DEFAULT_CHAR_Y",8e,06,1f,4b)},
	{::hx::fsInt,(void *) &DialogueBoxPsych_obj::DEFAULT_TEXT_X,HX_("DEFAULT_TEXT_X",24,d8,31,6c)},
	{::hx::fsInt,(void *) &DialogueBoxPsych_obj::DEFAULT_TEXT_Y,HX_("DEFAULT_TEXT_Y",25,d8,31,6c)},
	{::hx::fsInt,(void *) &DialogueBoxPsych_obj::LONG_TEXT_ADD,HX_("LONG_TEXT_ADD",92,bc,1d,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DialogueBoxPsych_obj_sMemberFields[] = {
	HX_("dialogue",18,2d,94,a7),
	HX_("dialogueList",96,e1,d8,0d),
	HX_("finishThing",9b,aa,8e,36),
	HX_("nextDialogueThing",c3,c2,a1,d9),
	HX_("skipDialogueThing",b7,29,12,4e),
	HX_("bgFade",e1,fd,cd,ab),
	HX_("box",0b,be,4a,00),
	HX_("textToType",62,de,b2,b9),
	HX_("arrayCharacters",a3,23,67,53),
	HX_("currentText",86,a5,8b,85),
	HX_("offsetPos",c1,3b,c0,41),
	HX_("textBoxTypes",3b,d8,65,ca),
	HX_("curCharacter",09,86,7c,d7),
	HX_("dialogueStarted",09,77,22,70),
	HX_("dialogueEnded",c2,14,61,0b),
	HX_("spawnCharacters",c5,32,da,c2),
	HX_("scrollSpeed",3a,e0,46,cb),
	HX_("daText",ca,52,61,0d),
	HX_("ignoreThisFrame",7d,81,d2,40),
	HX_("closeSound",f7,e9,ad,4b),
	HX_("closeVolume",b2,4f,a3,19),
	HX_("update",09,86,05,87),
	HX_("lastCharacter",73,b6,0a,40),
	HX_("lastBoxType",af,f2,77,51),
	HX_("startNextDialog",1d,3d,9f,9a),
	::String(null()) };

static void DialogueBoxPsych_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::LEFT_CHAR_X,"LEFT_CHAR_X");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::RIGHT_CHAR_X,"RIGHT_CHAR_X");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_CHAR_Y,"DEFAULT_CHAR_Y");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_X,"DEFAULT_TEXT_X");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_Y,"DEFAULT_TEXT_Y");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::LONG_TEXT_ADD,"LONG_TEXT_ADD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DialogueBoxPsych_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::LEFT_CHAR_X,"LEFT_CHAR_X");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::RIGHT_CHAR_X,"RIGHT_CHAR_X");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_CHAR_Y,"DEFAULT_CHAR_Y");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_X,"DEFAULT_TEXT_X");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_Y,"DEFAULT_TEXT_Y");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::LONG_TEXT_ADD,"LONG_TEXT_ADD");
};

#endif

::hx::Class DialogueBoxPsych_obj::__mClass;

static ::String DialogueBoxPsych_obj_sStaticFields[] = {
	HX_("LEFT_CHAR_X",e7,bb,19,61),
	HX_("RIGHT_CHAR_X",d2,58,47,14),
	HX_("DEFAULT_CHAR_Y",8e,06,1f,4b),
	HX_("DEFAULT_TEXT_X",24,d8,31,6c),
	HX_("DEFAULT_TEXT_Y",25,d8,31,6c),
	HX_("LONG_TEXT_ADD",92,bc,1d,a5),
	HX_("parseDialogue",6b,64,c3,ec),
	HX_("updateBoxOffsets",1e,ea,75,d1),
	::String(null())
};

void DialogueBoxPsych_obj::__register()
{
	DialogueBoxPsych_obj _hx_dummy;
	DialogueBoxPsych_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DialogueBoxPsych",88,30,b7,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DialogueBoxPsych_obj::__GetStatic;
	__mClass->mSetStaticField = &DialogueBoxPsych_obj::__SetStatic;
	__mClass->mMarkFunc = DialogueBoxPsych_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DialogueBoxPsych_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueBoxPsych_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueBoxPsych_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DialogueBoxPsych_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueBoxPsych_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueBoxPsych_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DialogueBoxPsych_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_230_boot)
HXDLIN( 230)		LEFT_CHAR_X = ((Float)-60);
            	}
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_231_boot)
HXDLIN( 231)		RIGHT_CHAR_X = ((Float)-100);
            	}
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_232_boot)
HXDLIN( 232)		DEFAULT_CHAR_Y = ((Float)60);
            	}
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_280_boot)
HXDLIN( 280)		DEFAULT_TEXT_X = 175;
            	}
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_281_boot)
HXDLIN( 281)		DEFAULT_TEXT_Y = 432;
            	}
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_282_boot)
HXDLIN( 282)		LONG_TEXT_ADD = 24;
            	}
}


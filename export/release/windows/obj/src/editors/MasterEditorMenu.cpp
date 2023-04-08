#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_ShopState
#include <ShopState.h>
#endif
#ifndef INCLUDED_WeekData
#include <WeekData.h>
#endif
#ifndef INCLUDED_editors_CharacterEditorState
#include <editors/CharacterEditorState.h>
#endif
#ifndef INCLUDED_editors_ChartingState
#include <editors/ChartingState.h>
#endif
#ifndef INCLUDED_editors_DialogueCharacterEditorState
#include <editors/DialogueCharacterEditorState.h>
#endif
#ifndef INCLUDED_editors_DialogueEditorState
#include <editors/DialogueEditorState.h>
#endif
#ifndef INCLUDED_editors_MasterEditorMenu
#include <editors/MasterEditorMenu.h>
#endif
#ifndef INCLUDED_editors_MenuCharacterEditorState
#include <editors/MenuCharacterEditorState.h>
#endif
#ifndef INCLUDED_editors_WeekEditorState
#include <editors/WeekEditorState.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aa1a162bced268b8_21_new,"editors.MasterEditorMenu","new",0xa289ac88,"editors.MasterEditorMenu.new","editors/MasterEditorMenu.hx",21,0x3933e087)
static const ::String _hx_array_data_7d8f0896_1[] = {
	HX_("Week Editor",59,6c,6c,6d),HX_("Menu Character Editor",05,2d,60,f9),HX_("Dialogue Editor",b5,bb,62,71),HX_("Dialogue Portrait Editor",ea,22,45,b5),HX_("Character Editor",84,45,58,b1),HX_("Chart Editor",ef,b4,29,e9),HX_("Unused Shop Menu",9f,39,12,d7),
};
HX_LOCAL_STACK_FRAME(_hx_pos_aa1a162bced268b8_40_create,"editors.MasterEditorMenu","create",0xee5b93d4,"editors.MasterEditorMenu.create","editors/MasterEditorMenu.hx",40,0x3933e087)
HX_LOCAL_STACK_FRAME(_hx_pos_aa1a162bced268b8_90_update,"editors.MasterEditorMenu","update",0xf951b2e1,"editors.MasterEditorMenu.update","editors/MasterEditorMenu.hx",90,0x3933e087)
HX_LOCAL_STACK_FRAME(_hx_pos_aa1a162bced268b8_158_changeSelection,"editors.MasterEditorMenu","changeSelection",0x385910e4,"editors.MasterEditorMenu.changeSelection","editors/MasterEditorMenu.hx",158,0x3933e087)
HX_LOCAL_STACK_FRAME(_hx_pos_aa1a162bced268b8_171_changeDirectory,"editors.MasterEditorMenu","changeDirectory",0xba830b05,"editors.MasterEditorMenu.changeDirectory","editors/MasterEditorMenu.hx",171,0x3933e087)
namespace editors{

void MasterEditorMenu_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_aa1a162bced268b8_21_new)
HXLINE(  36)		this->curDirectory = 0;
HXLINE(  35)		this->curSelected = 0;
HXLINE(  33)		this->directories = ::Array_obj< ::String >::__new(1)->init(0,null());
HXLINE(  23)		this->options = ::Array_obj< ::String >::fromData( _hx_array_data_7d8f0896_1,7);
HXLINE(  21)		super::__construct(TransIn,TransOut);
            	}

Dynamic MasterEditorMenu_obj::__CreateEmpty() { return new MasterEditorMenu_obj; }

void *MasterEditorMenu_obj::_hx_vtable = 0;

Dynamic MasterEditorMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MasterEditorMenu_obj > _hx_result = new MasterEditorMenu_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MasterEditorMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x01c92cf4) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x01c92cf4;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void MasterEditorMenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_aa1a162bced268b8_40_create)
HXLINE(  41)		::flixel::FlxG_obj::camera->bgColor = -16777216;
HXLINE(  44)		::DiscordClient_obj::changePresence(HX_("Modding Menu",3f,53,19,4d),null(),null(),null(),null());
HXLINE(  47)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  47)		::String library = null();
HXDLIN(  47)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("menuDesat",26,91,04,72),library);
HXDLIN(  47)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE(  48)		{
HXLINE(  48)			 ::flixel::math::FlxBasePoint this1 = bg1->scrollFactor;
HXDLIN(  48)			this1->set_x(( (Float)(0) ));
HXDLIN(  48)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  49)		bg1->set_color(-13290187);
HXLINE(  50)		this->add(bg1);
HXLINE(  52)		this->grpTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  53)		this->add(this->grpTexts);
HXLINE(  55)		{
HXLINE(  55)			int _g = 0;
HXDLIN(  55)			int _g1 = this->options->length;
HXDLIN(  55)			while((_g < _g1)){
HXLINE(  55)				_g = (_g + 1);
HXDLIN(  55)				int i = (_g - 1);
HXLINE(  57)				 ::Alphabet leText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(90) ),( (Float)(320) ),this->options->__get(i),true);
HXLINE(  58)				leText->isMenuItem = true;
HXLINE(  59)				leText->targetY = i;
HXLINE(  60)				this->grpTexts->add(leText).StaticCast<  ::Alphabet >();
HXLINE(  61)				leText->snapToPosition();
            			}
            		}
HXLINE(  65)		 ::flixel::FlxSprite textBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(::flixel::FlxG_obj::height - 42),null())->makeGraphic(::flixel::FlxG_obj::width,42,-16777216,null(),null());
HXLINE(  66)		textBG->set_alpha(((Float)0.6));
HXLINE(  67)		this->add(textBG);
HXLINE(  69)		this->directoryTxt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,textBG->x,(textBG->y + 4),::flixel::FlxG_obj::width,HX_("",00,00,00,00),32,null());
HXLINE(  70)		 ::flixel::text::FlxText _hx_tmp = this->directoryTxt;
HXDLIN(  70)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  70)		::String _hx_tmp1;
HXDLIN(  70)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  70)			_hx_tmp1 = file;
            		}
            		else {
HXLINE(  70)			_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  70)		_hx_tmp->setFormat(_hx_tmp1,32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  71)		{
HXLINE(  71)			 ::flixel::math::FlxBasePoint this2 = this->directoryTxt->scrollFactor;
HXDLIN(  71)			this2->set_x(( (Float)(0) ));
HXDLIN(  71)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  72)		this->add(this->directoryTxt);
HXLINE(  74)		{
HXLINE(  74)			int _g2 = 0;
HXDLIN(  74)			::Array< ::String > _g3 = ::Paths_obj::getModDirectories();
HXDLIN(  74)			while((_g2 < _g3->length)){
HXLINE(  74)				::String folder = _g3->__get(_g2);
HXDLIN(  74)				_g2 = (_g2 + 1);
HXLINE(  76)				this->directories->push(folder);
            			}
            		}
HXLINE(  79)		int found = this->directories->indexOf(::Paths_obj::currentModDirectory,null());
HXLINE(  80)		if ((found > -1)) {
HXLINE(  80)			this->curDirectory = found;
            		}
HXLINE(  81)		this->changeDirectory(null());
HXLINE(  83)		this->changeSelection(null());
HXLINE(  85)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE(  86)		this->super::create();
            	}


void MasterEditorMenu_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_aa1a162bced268b8_90_update)
HXLINE(  91)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE(  93)			this->changeSelection(-1);
            		}
HXLINE(  95)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE(  97)			this->changeSelection(1);
            		}
HXLINE( 100)		if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 102)			this->changeDirectory(-1);
            		}
HXLINE( 104)		if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 106)			this->changeDirectory(1);
            		}
HXLINE( 110)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 112)			::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 115)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 117)			::String _hx_switch_0 = this->options->__get(this->curSelected);
            			if (  (_hx_switch_0==HX_("Character Editor",84,45,58,b1)) ){
HXLINE( 119)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::editors::CharacterEditorState_obj::__alloc( HX_CTX ,::Character_obj::DEFAULT_CHARACTER,false)) ),false));
HXDLIN( 119)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Chart Editor",ef,b4,29,e9)) ){
HXLINE( 129)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::editors::ChartingState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN( 129)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Dialogue Editor",b5,bb,62,71)) ){
HXLINE( 127)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::editors::DialogueEditorState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN( 127)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Dialogue Portrait Editor",ea,22,45,b5)) ){
HXLINE( 125)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::editors::DialogueCharacterEditorState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN( 125)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Menu Character Editor",05,2d,60,f9)) ){
HXLINE( 123)				::MusicBeatState_obj::switchState( ::editors::MenuCharacterEditorState_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 123)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Unused Shop Menu",9f,39,12,d7)) ){
HXLINE( 131)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::ShopState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN( 131)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Week Editor",59,6c,6c,6d)) ){
HXLINE( 121)				::MusicBeatState_obj::switchState( ::editors::WeekEditorState_obj::__alloc( HX_CTX ,null()));
HXDLIN( 121)				goto _hx_goto_5;
            			}
            			_hx_goto_5:;
HXLINE( 133)			::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 135)			::FreeplayState_obj::destroyFreeplayVocals();
            		}
HXLINE( 139)		int bullShit = 0;
HXLINE( 140)		{
HXLINE( 140)			int _g = 0;
HXDLIN( 140)			::Array< ::Dynamic> _g1 = this->grpTexts->members;
HXDLIN( 140)			while((_g < _g1->length)){
HXLINE( 140)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 140)				_g = (_g + 1);
HXLINE( 142)				item->targetY = (bullShit - this->curSelected);
HXLINE( 143)				bullShit = (bullShit + 1);
HXLINE( 145)				item->set_alpha(((Float)0.6));
HXLINE( 148)				if ((item->targetY == 0)) {
HXLINE( 150)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 154)		this->super::update(elapsed);
            	}


void MasterEditorMenu_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_aa1a162bced268b8_158_changeSelection)
HXLINE( 159)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 159)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 161)		 ::editors::MasterEditorMenu _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 161)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + change);
HXLINE( 163)		if ((this->curSelected < 0)) {
HXLINE( 164)			this->curSelected = (this->options->length - 1);
            		}
HXLINE( 165)		if ((this->curSelected >= this->options->length)) {
HXLINE( 166)			this->curSelected = 0;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MasterEditorMenu_obj,changeSelection,(void))

void MasterEditorMenu_obj::changeDirectory(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_aa1a162bced268b8_171_changeDirectory)
HXLINE( 172)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 172)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 174)		 ::editors::MasterEditorMenu _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 174)		_hx_tmp1->curDirectory = (_hx_tmp1->curDirectory + change);
HXLINE( 176)		if ((this->curDirectory < 0)) {
HXLINE( 177)			this->curDirectory = (this->directories->length - 1);
            		}
HXLINE( 178)		if ((this->curDirectory >= this->directories->length)) {
HXLINE( 179)			this->curDirectory = 0;
            		}
HXLINE( 181)		::WeekData_obj::setDirectoryFromWeek(null());
HXLINE( 182)		bool _hx_tmp2;
HXDLIN( 182)		if (::hx::IsNotNull( this->directories->__get(this->curDirectory) )) {
HXLINE( 182)			_hx_tmp2 = (this->directories->__get(this->curDirectory).length < 1);
            		}
            		else {
HXLINE( 182)			_hx_tmp2 = true;
            		}
HXDLIN( 182)		if (_hx_tmp2) {
HXLINE( 183)			this->directoryTxt->set_text(HX_("< No Installed Mods Detected >",4e,7c,50,25));
            		}
            		else {
HXLINE( 186)			::Paths_obj::currentModDirectory = this->directories->__get(this->curDirectory);
HXLINE( 187)			this->directoryTxt->set_text(((HX_("< DETECTED:Installed Mod: ",2e,76,00,db) + ::Paths_obj::currentModDirectory) + HX_(" >",1e,1c,00,00)));
            		}
HXLINE( 189)		 ::flixel::text::FlxText _hx_tmp3 = this->directoryTxt;
HXDLIN( 189)		_hx_tmp3->set_text(this->directoryTxt->text.toUpperCase());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MasterEditorMenu_obj,changeDirectory,(void))


::hx::ObjectPtr< MasterEditorMenu_obj > MasterEditorMenu_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MasterEditorMenu_obj > __this = new MasterEditorMenu_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MasterEditorMenu_obj > MasterEditorMenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MasterEditorMenu_obj *__this = (MasterEditorMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MasterEditorMenu_obj), true, "editors.MasterEditorMenu"));
	*(void **)__this = MasterEditorMenu_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MasterEditorMenu_obj::MasterEditorMenu_obj()
{
}

void MasterEditorMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MasterEditorMenu);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(grpTexts,"grpTexts");
	HX_MARK_MEMBER_NAME(directories,"directories");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(curDirectory,"curDirectory");
	HX_MARK_MEMBER_NAME(directoryTxt,"directoryTxt");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MasterEditorMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(grpTexts,"grpTexts");
	HX_VISIT_MEMBER_NAME(directories,"directories");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(curDirectory,"curDirectory");
	HX_VISIT_MEMBER_NAME(directoryTxt,"directoryTxt");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MasterEditorMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { return ::hx::Val( grpTexts ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"directories") ) { return ::hx::Val( directories ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curDirectory") ) { return ::hx::Val( curDirectory ); }
		if (HX_FIELD_EQ(inName,"directoryTxt") ) { return ::hx::Val( directoryTxt ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeDirectory") ) { return ::hx::Val( changeDirectory_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MasterEditorMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { grpTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"directories") ) { directories=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curDirectory") ) { curDirectory=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"directoryTxt") ) { directoryTxt=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MasterEditorMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("grpTexts",01,f1,99,f0));
	outFields->push(HX_("directories",0b,5c,2c,61));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("curDirectory",cd,9c,ef,a5));
	outFields->push(HX_("directoryTxt",03,b6,2a,b0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MasterEditorMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MasterEditorMenu_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MasterEditorMenu_obj,grpTexts),HX_("grpTexts",01,f1,99,f0)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MasterEditorMenu_obj,directories),HX_("directories",0b,5c,2c,61)},
	{::hx::fsInt,(int)offsetof(MasterEditorMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsInt,(int)offsetof(MasterEditorMenu_obj,curDirectory),HX_("curDirectory",cd,9c,ef,a5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MasterEditorMenu_obj,directoryTxt),HX_("directoryTxt",03,b6,2a,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MasterEditorMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String MasterEditorMenu_obj_sMemberFields[] = {
	HX_("options",5e,33,fe,df),
	HX_("grpTexts",01,f1,99,f0),
	HX_("directories",0b,5c,2c,61),
	HX_("curSelected",fb,eb,ab,32),
	HX_("curDirectory",cd,9c,ef,a5),
	HX_("directoryTxt",03,b6,2a,b0),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeDirectory",dd,92,df,ca),
	::String(null()) };

::hx::Class MasterEditorMenu_obj::__mClass;

void MasterEditorMenu_obj::__register()
{
	MasterEditorMenu_obj _hx_dummy;
	MasterEditorMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("editors.MasterEditorMenu",96,08,8f,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MasterEditorMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MasterEditorMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MasterEditorMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MasterEditorMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace editors

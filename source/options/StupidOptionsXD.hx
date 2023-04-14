package options;

#if desktop
import Discord.DiscordClient;
#end
import flash.text.TextField;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxGridOverlay;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import lime.utils.Assets;
import flixel.FlxSubState;
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxSave;
import haxe.Json;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;
import flixel.input.keyboard.FlxKey;
import flixel.graphics.FlxGraphic;
import Controls;
import openfl.Lib;

using StringTools;

class StupidOptionsXD extends BaseOptionsMenu
{
	public function new()
	{
		title = 'Vs Stupid Options'; //additon to 'modes' menu ^^
		rpcTitle = 'Vs Stupid Options Menu'; //for Discord Rich Presence

		var option:Option = new Option('Neutral Mode',
			'If checked, This will enable modes: Easy,Normal,Hard',
			'normalYes',
			'bool',
			true);
		addOption(option);

		var option:Option = new Option('Erect Mode',
			'If checked, This will only enable [ erect ] as a mode', // you should've read the goddamn option title >:(
		        'erectYes',
			'bool',
			false);
		addOption(option);

		var option:Option = new Option('D-Sides Mode', // d-sides mods these days Xdddd
			'If checked, this will add d-sides as a mode.',
			'sideYes', 
			'bool',
			false);
		addOption(option);

		var option:Option = new Option('Remixed Mode', // im splitting it >:]]
		'If checked, this will add remixed as a mode',
		'remixYes', 
		'bool',
		false);
	addOption(option);
		
		

		//stop committing and telling me that Vs Stupid should have encore remixes, I'm gonna add them in v2.
		var option:Option = new Option('Encore Mode', // stupid thing with "<>"
			"If checked, This will enable encore mode",
			'encoreYes',
			'bool',
			false);
		addOption(option);

		var option:Option = new Option('Vs Stupid v2 Vanilla assets',
		"This will enable some v2 features \n( DONT USE CUZ ITS BETA AND ITS USELESS )",
		'vanillaV2',
		'bool',
		false);
	 addOption(option); // re-adding, but its still wip!

	 var option:Option = new Option('Botplay Text:',
	 "How should the botplay tet display as? \n( This Feature is being fixed due to a issue in playstate.hx! ).",
	 'botPlayType',
	 'string',
	 'BOTPLAY',
	 ['BOTPLAY', 'SHOWCASE']);
     addOption(option);

	

		super();
	}
	/*there is no FUCKING GODDAMN WAY 
	 im gonna be able to make encore, d-sides, remixed, and erect songs 
	 with my LAZY team ( half of the team is offline and they do nothing )*/
	 //statement = true;
}

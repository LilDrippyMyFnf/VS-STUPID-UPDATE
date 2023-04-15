-- hey there people! this lua script is all the hud for vs stupid! if you want to make this softcoded in a gb submission or something you can do so! you must credit tho!

-- enjoy!



function onCreatePost() --everything written by Rhy

    makeLuaText('songName', "Song: ", 0, 15, 495) --song name
    setTextSize('songName', 24)
    setTextFont('songName', 'PhantomMuff.ttf')
    setTextColor('songName', 'FF000000')
    addLuaText('songName', "Song: ", 0, 15, 595)
    setObjectCamera('songName', 'other')

    makeLuaText('score', "Score: ", 0, 15, 375) --score
    setTextSize('score', 24)
    setTextFont('score', 'PhantomMuff.ttf')
    setTextColor('score', 'FF000000')
    addLuaText('score', "Score: ", 0, 150, 150)
    setObjectCamera('score', 'other')

    makeLuaText('misses', "Combo Breaks: ", 0, 15, 400) -- misses / combo breaks
    setTextSize('misses', 24)
    setTextFont('misses', 'PhantomMuff.ttf')
    setTextColor('misses', 'FF000000')
    addLuaText('misses', "Combo Breaks: ", 0, 150, 140)
    setObjectCamera('misses', 'other')

    makeLuaText('ratingName', "Rating: ", 0, 15, 425) --rating
    setTextSize('ratingName', 24)
    setTextFont('ratingName', 'PhantomMuff.ttf')
    setTextColor('ratingName', 'FF000000')
    addLuaText('ratingName', "Rating: ", 0, 150, 150)
    setObjectCamera('ratingName', 'other')

    makeLuaText('difficultyName', "Difficulty: ", 0, 15, 455) --ratingFC
    setTextSize('difficultyName', 24)
    setTextFont('difficultyName', 'PhantomMuff.ttf')
    setTextColor('difficultyName', 'FF000000')
    addLuaText('difficultyName', "Difficulty: ", 0, 150, 150)
    setObjectCamera('difficultyName', 'other')

end

function onUpdatePost()

    setTextString('score', 'Score: '.. getPropertyFromClass(score))

    setTextString('misses', 'Combo Breaks: '.. getPropertyFromClass(misses))

    setTextString('ratingName', 'Rating: '.. getPropertyFromClass(ratingName))

    setTextString('difficultyName', "Difficulty: ".. getPropertyFromClass(difficultyName))

    setTextString('songName', "Song: ".. getPropertyFromClass(songName))

end

function getIconColor(chr)
	return getColorFromHex(rgbToHex(getProperty(chr .. ".healthColorArray")))
end

function rgbToHex(array)
	return string.format('%.2x%.2x%.2x', array[1], array[2], array[3])
end

function goodNoteHit(id, direction, noteType, isSustainNote)
	if _G['boyfriendGhostData.strumTime'] == getPropertyFromGroup('notes', id, 'strumTime') and not isSustainNote then
		createGhost('boyfriend')
	end
	if not isSustainNote then
		_G['boyfriendGhostData.strumTime'] = getPropertyFromGroup('notes', id, 'strumTime')
		updateGData('boyfriend')	
	end
end
function opponentNoteHit(id, direction, noteType, isSustainNote)
	if _G['dadGhostData.strumTime'] == getPropertyFromGroup('notes', id, 'strumTime') and not isSustainNote then
		createGhost('dad')
	end
	if not isSustainNote then
		_G['dadGhostData.strumTime'] = getPropertyFromGroup('notes', id, 'strumTime')
		updateGData('dad')	
	end
end

function createGhost(char)
	songPos = getSongPosition() --in case game stutters
    makeAnimatedLuaSprite(char..'Ghost'..songPos, getProperty(char..'.imageFile'),getProperty(char..'.x'),getProperty(char..'.y'))
    addLuaSprite(char..'Ghost'..songPos, false)
    setProperty(char..'Ghost'..songPos..'.scale.x',getProperty(char..'.scale.x'))
	setProperty(char..'Ghost'..songPos..'.scale.y',getProperty(char..'.scale.y'))
	setProperty(char..'Ghost'..songPos..'.flipX', getProperty(char..'.flipX'))
	setProperty(char..'Ghost'..songPos..'.color', getIconColor(char))
	setProperty(char..'Ghost'..songPos..'.alpha', 1)
	doTweenAlpha(char..'Ghost'..songPos..'delete', char..'Ghost'..songPos, 0, 1.5)
	setProperty(char..'Ghost'..songPos..'.animation.frameName', _G[char..'GhostData.frameName'])
	setProperty(char..'Ghost'..songPos..'.offset.x', _G[char..'GhostData.offsetX'])
	setProperty(char..'Ghost'..songPos..'.offset.y', _G[char..'GhostData.offsetY'])
	setObjectOrder(char..'Ghost'..songPos, getObjectOrder(char..'Group')-1)
end

function onTweenCompleted(tag)
	if (tag:sub(#tag- 5, #tag)) == 'delete' then
		removeLuaSprite(tag:sub(1, #tag - 6), true)
	end
end

function updateGData(char)
	_G[char..'GhostData.frameName'] = getProperty(char..'.animation.frameName')
	_G[char..'GhostData.offsetX'] = getProperty(char..'.offset.x')
	_G[char..'GhostData.offsetY'] = getProperty(char..'.offset.y')
end

-- i like number 45 :thumbs_up:

--[[
Made by an epic gamer chad (omotashi) with lots of help from other epic coder (legole0)
https://www.twitter.com/omotashi // https://www.twitter.com/legole0

I also copied the design from Piggyfriend1792 :)
--]]

local songdata = {

    ['Knowledge'] = {
    'Knowledge', -- Song Name [1]
    'MyFnf', -- Composer [2]
    '5', --  Length for onscreen [3]
    },

    ['Warning'] = {
        'Warning',
        'MyFnf',
        '5',
    },

    ['UnNatural-Substance'] = {
        'UnNatural Substance',
        'MyFnf',
        '5'
    },    
    
    ['Legacy'] = {
    'Legacy', -- Song Name [1]
    'MyFnf', -- Composer [2]
    '5', --  Length for onscreen [3]
    },

    ['Animosity'] = {
        'Animosity',
        'MyFnf',
        '5',
    },

    ['Static-Hit'] = {
        'Static Hit',
        'MyFnf',
        '5'
    }, 
        ['Retro-Swag'] = {
        'Retro Swag',
        'MyFnf',
        '5'
    },    
    
-- Replace this data with your songs and the song composer. 
-- The song name in the [] MUST be the same song in the JSON file
-- The Next two are just string values, have fun :3
}

local offsetX = 10
local offsetY = 500
local objWidth = 500


function ifExists(table, valuecheck) -- This stupid function stops your game from throwing up errors when you play a main week song thats not in the Song Data Folder
    if table[valuecheck] then
        return true
    else
        return false
    end
end


function onCreatePost() -- This creates all the placeholder shit B) ((THIS PART OF THE SCRIPT WAS MADE BY PIGGY))
    luaDebugMode = true

    makeLuaSprite('creditBox', 'empty', 0 - objWidth, offsetY)
    makeGraphic('creditBox', objWidth, 150, '000000')
    setObjectCamera('creditBox', 'other')
    setProperty("creditBox.alpha", 0.7)
    addLuaSprite('creditBox', true)

    makeLuaText('creditTitle', 'PlaceholderTitle', objWidth, offsetX - objWidth, offsetY+25)
    setTextSize('creditTitle', 45)
    setTextAlignment('creditTitle', 'left')
    setObjectCamera('creditTitle', 'other')
    addLuaText("creditTitle",true)

    makeLuaText('creditCreator', 'PlaceholderCreator', objWidth, offsetX - objWidth, offsetY+80)
    setTextSize('creditCreator', 30)
    setTextAlignment('creditCreator', 'left')
    setObjectCamera('creditCreator', 'other')
    addLuaText("creditCreator",true)
end


function onSongStart()

 songExists = ifExists(songdata, songName) -- Checks to see if song exists

 if songExists == true then
    local curSongTable = songdata[songName]
    setTextString('creditTitle', curSongTable[1]) -- Sets the actual things
    setTextString('creditCreator', "Made by: "..curSongTable[2])

    --Tweens--
    doTweenX("creditBoxTween", "creditBox", getProperty("creditBox.x") + objWidth, 1, "expoOut")
    doTweenX("creditTitleTween", "creditTitle", getProperty("creditTitle.x") + objWidth, 1, "expoOut")
    doTweenX("creditCreatorTween", "creditCreator", getProperty("creditCreator.x") + objWidth, 1, "expoOut")
    runTimer("creditDisplay",curSongTable[3],1)
 else

    debugPrint("Song does not exist within the song data table")

 end
end

function onTimerCompleted(timerName)

    if timerName == "creditDisplay" then
        doTweenX("creditBoxTween", "creditBox", getProperty("creditBox.x") - objWidth, 0.5, "sineIn")
        doTweenX("creditTitleTween", "creditTitle", getProperty("creditTitle.x") - objWidth, 0.5, "sineIn")
        doTweenX("creditCreatorTween", "creditCreator", getProperty("creditCreator.x") - objWidth, 0.5, "sineIn")

    end

end

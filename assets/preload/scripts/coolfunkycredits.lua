--[[
Made by an epic gamer chad (omotashi) with lots of help from other epic coder (legole0)
https://www.twitter.com/omotashi // https://www.twitter.com/legole0

I also copied the design from Piggyfriend1792 :)
--]]

local songdata = {

    ['Bopeebo'] = {
    'Bopeebo', -- Song Name [1]
    'Kawai Sprite', -- Composer [2]
    '5', --  Length for onscreen [3]
    },

    ['Fresh'] = {
        'Fresh',
        'Kawai Sprite',
        '7',
    },

    ['Dad Battle'] = {
        'Dadbattle',
        'Kawai Sprite',
        '12'
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
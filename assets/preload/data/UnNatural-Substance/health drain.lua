function opponentNoteHit()
    health = getProperty('health')
    if getProperty('health') > 0.63 then
        setProperty('health', health- 0.021);
    end
end
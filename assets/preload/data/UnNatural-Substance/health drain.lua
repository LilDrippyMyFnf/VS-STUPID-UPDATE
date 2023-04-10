function opponentNoteHit()
    health = getProperty('health')
    if getProperty('health') > 0.10 then
        setProperty('health', health- 0.020);
    end
end
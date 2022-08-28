function love.load()
    number = 0
end


function love.update(dt)
    number = number + 1
end

function love.draw()
    love.graphics.rectangle("fill", 0, 0, 200, 100)
    love.graphics.rectangle("fill", 800, 800, 200, 100)

end

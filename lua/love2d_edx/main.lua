function love.load()
    target = {}
    target.x = 300
    target.y = 300
    target.radius = 50

    score = 0
    timer = 0
end

function love.update(dt)
end

function love.draw()
    love.graphics.rectangle("fill", 200, 200, 50, 50)
    love.graphics.circle("line", target.x, target.y, target.radius)
    love.graphics.setColor(255/255, 1/1, 2/2)


end

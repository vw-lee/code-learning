import pygame
pygame.init()
width = 800
height = 400
game_title = "Runner"

screen = pygame.display.set_mode((width,height))
pygame.display.set_caption(game_title)
clock = pygame.time.Clock()
test_font = pygame.font.Font('font/Pixeltype.ttf', 50)

# convert_alpha() makes the game run faster
canvas_sky = pygame.image.load('graphics/sky.png').convert_alpha()
canvas_ground = pygame.image.load('graphics/ground.png').convert_alpha()
canvas_text = test_font.render('My Game', False, 'Black')

object_pos = 0
def boundary_check_fn(object_pos):
    if object_pos < -100:
        object_pos = 800
    elif object_pos > 800:
        object_pos = -100
    else:
        print('waiting!')
    print(object_pos)
    return object_pos


snail_surf = pygame.image.load('graphics/snail/snail1.png').convert_alpha()
snail_rect = snail_surf.get_rect(topleft = (600, 260))

player_surf = pygame.image.load('graphics/player/player_walk_1.png').convert_alpha()
# get the rectangle of the image outline 
player_rect = player_surf.get_rect(topleft = (80, 210))

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()
        # draw all the elements
        # update everything

    # origin point is Top Left of the canvas
    screen.blit(canvas_sky, (0, 0))
    screen.blit(canvas_ground, (0, 300))
    screen.blit(canvas_text, (300, 50))

    snail_rect.left -= 5
    snail_rect.left = boundary_check_fn(snail_rect.left)
    screen.blit(snail_surf, snail_rect)

    player_rect.left += 2
    player_rect.left = boundary_check_fn(player_rect.left)
    screen.blit(player_surf, player_rect)
    
    # collision check, boolean value
    player_rect.colliderect(snail_rect)

    mouse_pos = pygame.mouse.get_pos()
    if player_rect.collidepoint(mouse_pos):
        print('collision')

    pygame.display.update()
    # capping the FPS to 60
    clock.tick(60)
   


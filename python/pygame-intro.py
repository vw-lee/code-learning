import pygame
from sys import exit

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

# get the rectangle of the image outline 
score_surf = test_font.render('My Game', False, 'Black')
score_rect = score_surf.get_rect(center = (400, 30))

snail_surf = pygame.image.load('graphics/snail/snail1.png').convert_alpha()
snail_rect = snail_surf.get_rect(topleft = (600, 260))

player_surf = pygame.image.load('graphics/player/player_walk_1.png').convert_alpha()
player_rect = player_surf.get_rect(topleft = (80, 210))


# functions
object_pos = 0
def boundary_check_fn(object_pos):
    if object_pos < -100:
        object_pos = 800
    elif object_pos > 800:
        object_pos = -100
    return object_pos

player_gravity = -20
player_movement = False
player_movement_dir = 'none'

def gravity_fn(player_current_pos):
    return player_current_pos
    

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()
        # monitors mouse movement
        # if event.type == pygame.MOUSEMOTION:
        #     print(event.pos)
        #     if player_rect.collidepoint(event.pos):
        #         print('mouse collision with player')
            
        if event.type == pygame.MOUSEBUTTONDOWN:
            player_movement = True
            if event.pos[0] < player_rect.x:
                player_gravity = -20
                player_movement_dir = 'left'
                print('left')
            if event.pos[0] > player_rect.x:
                player_gravity = -20
                player_movement_dir = 'right'
                print('right')
        else:
            player_movement = False

                

        # check if a key is pressed, with de-bouncing
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_SPACE:
                player_gravity = -20
    


    # origin point is Top Left of the canvas
    screen.blit(canvas_sky, (0, 0))
    screen.blit(canvas_ground, (0, 300))
    pygame.draw.rect(screen, 'Yellow', score_rect, 5, 5)
    pygame.draw.line(screen, 'Blue', (0,50), (800,50), 3)
    screen.blit(score_surf, score_rect)

    '''
    enviornment objects
    '''
    snail_rect.left -= 5
    snail_rect.left = boundary_check_fn(snail_rect.left)
    screen.blit(snail_surf, snail_rect)

    '''
    player
    '''

    player_gravity += 1
    player_rect.y += player_gravity
    # implementing a floor
    if player_rect.y > 210:
        player_rect.y = 210

    if (player_movement == True) & (player_movement_dir == 'left'):
        player_rect.left -= 20
    if (player_movement == True) & (player_movement_dir == 'right'):
        player_rect.left += 20
    
    player_rect.left = boundary_check_fn(player_rect.left)
    screen.blit(player_surf, player_rect)
    

    # collision check, boolean value
    player_rect.colliderect(snail_rect)

    mouse_pos = pygame.mouse.get_pos()
    if player_rect.collidepoint(mouse_pos):
        print('mouse collision')
    

    pygame.display.update()
    # capping the FPS to 60
    clock.tick(60)
   
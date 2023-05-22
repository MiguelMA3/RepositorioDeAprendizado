import pygame

yellow = (255, 255, 0)
black = (0, 0, 0)
vel = 0.5
raio = 30
pygame.init()

tela = pygame.display.set_mode((640, 480), 0)
x = 10
y = 10
vel_x = vel
vel_y = vel

while True:
    # Calcula as regras    
    x = x + vel_x
    y = y + vel_y

    if x + raio > 640:
        vel_x = -vel
    if x - raio < 0:
        vel_x = vel

    if y + raio > 480:
        vel_y = -vel
    if y - raio < 0:
        vel_y = vel

    # Pinta
    tela.fill((black))
    pygame.draw.circle(tela, yellow, (int(x), int(y)), 30, 0)
    pygame.display.update()


    #Eventos
    for e in pygame.event.get():
        if e.type == pygame.QUIT:
            exit()


#include "raylib.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------

bool collisionr=false;
Vector2 mouseposp = {-100.0f, 100.0f};

int piano(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitAudioDevice();
    InitWindow(screenWidth, screenHeight, "piano_proto1");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    
    Texture2D keys= LoadTexture("./assets/keyscr.png");
    Texture2D press= LoadTexture("./assets/press.png");
    Texture2D returnbu=LoadTexture("./assets/return.png");
    Vector2 presspos ={-100,230};
    Sound unokey=LoadSound("./sounds/piano/c3.mp3");
    Sound dokey=LoadSound("./sounds/piano/c#3.mp3");
    Sound trikey=LoadSound("./sounds/piano/d3.mp3");
    Sound qukey=LoadSound("./sounds/piano/d#3.mp3");
    Sound fikey=LoadSound("./sounds/piano/e3.mp3");
    Sound sikey=LoadSound("./sounds/piano/f3.mp3");
    Sound sekey=LoadSound("./sounds/piano/f#3.mp3");
    Sound eikey=LoadSound("./sounds/piano/g3.mp3");
    Sound nikey=LoadSound("./sounds/piano/g#3.mp3");
    Sound tenkey=LoadSound("./sounds/piano/a3.mp3");
    Sound elkey=LoadSound("./sounds/piano/a#3.mp3");
    Sound twkey=LoadSound("./sounds/piano/b3.mp3");
    Sound thikey=LoadSound("./sounds/piano/c4.mp3");
    Sound foukey=LoadSound("./sounds/piano/c#4.mp3");
    Sound fifkey=LoadSound("./sounds/piano/d4.mp3");
    Sound sixtkey=LoadSound("./sounds/piano/d#4.mp3");
    Sound sevkey=LoadSound("./sounds/piano/e4.mp3");
    Sound eitkey=LoadSound("./sounds/piano/f4.mp3");
    Sound nitkey=LoadSound("./sounds/piano/f#4.mp3");
    Sound twtkey=LoadSound("./sounds/piano/g4.mp3");
    Sound tw1key=LoadSound("./sounds/piano/g#4.mp3");
    Sound tw2key=LoadSound("./sounds/piano/a4.mp3");
    Sound tw3key=LoadSound("./sounds/piano/a#4.mp3");
    Sound tw4key=LoadSound("./sounds/piano/b4.mp3");
    Sound tw5key=LoadSound("./sounds/piano/c5.mp3");
    Sound click=LoadSound("./sounds/drums/click.mp3");
    bool visible=false;
    
    
    Rectangle retrec;
     Rectangle point;
    
    
    
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

          if (IsKeyDown(KEY_Q))
            {
               //visible=true;
              PlaySound(unokey);
               presspos.x=1;
             
             }
          else if(IsKeyPressed(KEY_F1))
            {
              PlaySound(dokey);
             
              
            }
            if(IsKeyPressed(KEY_W))
            {
              PlaySound(trikey);
              visible=true;
              presspos.x=55;
            }
            
            if(IsKeyPressed(KEY_F2))
            {
              PlaySound(qukey);
            }
            if(IsKeyPressed(KEY_E))
            {
              // visible=true;
              PlaySound(fikey);
              presspos.x=108;
            }
            if(IsKeyPressed(KEY_R))
            {
             //  visible=true;
              PlaySound(sikey);
              presspos.x=161;
            }
            if(IsKeyPressed(KEY_F3))
            {
              PlaySound(sekey);
            }
            if(IsKeyPressed(KEY_T))
            {
              // visible=true;
              PlaySound(eikey);
              presspos.x=214;
            }
            if(IsKeyPressed(KEY_F4))
            {
              PlaySound(nikey);
            }
            
            if(IsKeyPressed(KEY_Y))
             {
               PlaySound(tenkey);
               presspos.x=267;
             }
             
             
                 if(IsKeyPressed(KEY_F5))
             {
               PlaySound(elkey);
             }
             
             
                 if(IsKeyPressed(KEY_U))
             {
               PlaySound(twkey);
               presspos.x=320;
             }
             
             
                 if(IsKeyPressed(KEY_I))
             {
               PlaySound(thikey);
               presspos.x=374;
             }
             
                 if(IsKeyPressed(KEY_F6))
             {
               PlaySound(foukey);
             }
             
             if(IsKeyPressed(KEY_O))
             {
               PlaySound(fifkey);
               presspos.x=428;
             }
             
                   if(IsKeyPressed(KEY_F7))
             {
               PlaySound(sixtkey);
             }
             
             if(IsKeyPressed(KEY_P))
             {
               PlaySound(sevkey);
               presspos.x=481;
             }
             
             if(IsKeyPressed(KEY_A))
             {
               PlaySound(eitkey);
               presspos.x=534;
             }
             
            if(IsKeyPressed(KEY_F8))
             {
               PlaySound(nitkey);
             }
             
                  if(IsKeyPressed(KEY_S))
             {
               PlaySound(twtkey);
               presspos.x=588;
             }
                
                
           if(IsKeyPressed(KEY_F9))
             {
               PlaySound(tw1key);
             }
             
          if(IsKeyPressed(KEY_D))
             {
               PlaySound(tw2key);
               presspos.x=641;
             }
             
          if(IsKeyPressed(KEY_F10))
             {
               PlaySound(tw3key);
             }
             
                 if(IsKeyPressed(KEY_F))
             {
               PlaySound(tw4key);
               presspos.x=694;
             }
             
             if(IsKeyPressed(KEY_G))
             {
               PlaySound(tw5key);
               presspos.x=747 ;
             }
             
             
         retrec.x=600;
         retrec.y=50;
         retrec.width=returnbu.width;
         retrec.height=returnbu.height-10;
         
          mouseposp = GetMousePosition();
         
         point.x = mouseposp.x;
         point.y = mouseposp.y;
         point.width = 20;
         point.height = 20;
         
          collisionr=CheckCollisionRecs(point,retrec);
    if(collisionr)
      {
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
         {
         PlaySound(click);
         CloseAudioDevice();
         CloseWindow();
         main();
         
         }
      }
           
            
          ///  if(IsKeyPressed)
          //    {
        //       visible=true;
         //     }
            
            
              
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
            DrawTexture(keys,1,-40,WHITE);
            if(visible==true)
             {
            DrawTextureV(press,presspos,WHITE);
          //  DrawRectangleRec(str1,RED);
             }
             
             DrawTexture(returnbu,600,50,WHITE);
            DrawRectangleLinesEx(retrec,1.5,ORANGE);
            DrawRectangleRec(point,BLUE);
       

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

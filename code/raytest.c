
#include "raylib.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
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
    Vector2 presspos ={-100,230};
    Sound unokey=LoadSound("./sounds/c3.mp3");
    Sound dokey=LoadSound("./sounds/c#3.mp3");
    Sound trikey=LoadSound("./sounds/d3.mp3");
    Sound qukey=LoadSound("./sounds/d#3.mp3");
    Sound fikey=LoadSound("./sounds/e3.mp3");
    Sound sikey=LoadSound("./sounds/f3.mp3");
    Sound sekey=LoadSound("./sounds/f#3.mp3");
    Sound eikey=LoadSound("./sounds/g3.mp3");
    Sound nikey=LoadSound("./sounds/g#3.mp3");
    Sound tenkey=LoadSound("./sounds/a3.mp3");
    Sound elkey=LoadSound("./sounds/a#3.mp3");
    Sound twkey=LoadSound("./sounds/b3.mp3");
    Sound thikey=LoadSound("./sounds/c4.mp3");
    Sound foukey=LoadSound("./sounds/c#4.mp3");
    Sound fifkey=LoadSound("./sounds/d4.mp3");
    Sound sixtkey=LoadSound("./sounds/d#4.mp3");
    Sound sevkey=LoadSound("./sounds/e4.mp3");
    Sound eitkey=LoadSound("./sounds/f4.mp3");
    Sound nitkey=LoadSound("./sounds/f#4.mp3");
    Sound twtkey=LoadSound("./sounds/g4.mp3");
    Sound tw1key=LoadSound("./sounds/g#4.mp3");
    Sound tw2key=LoadSound("./sounds/a4.mp3");
    Sound tw3key=LoadSound("./sounds/a#4.mp3");
    Sound tw4key=LoadSound("./sounds/b4.mp3");
    Sound tw5key=LoadSound("./sounds/c5.mp3");
    bool visible=false;
    
    
    
    
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

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

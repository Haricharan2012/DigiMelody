
#include "raylib.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------

bool collision[5] = {false, false, false, false, false};
Vector2 mousepos = {-100.0f, 100.0f};


int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 500;
     InitAudioDevice();
    InitWindow(screenWidth, screenHeight, "Guitar_proto");
    
    Texture2D guitarscr=LoadTexture("./assets/guitarscr.png");
    
    
    Sound strs1 =LoadSound("./sounds/guitarch/1st_str.mp3");
    Sound strs2 =LoadSound("./sounds/guitarch/2nd_str.mp3");
    Sound strs3 =LoadSound("./sounds/guitarch/3rd_str.mp3");
    Sound strs4 =LoadSound("./sounds/guitarch/4th_str.mp3");
    Sound strs5 =LoadSound("./sounds/guitarch/5th_str.mp3");
    Sound strs6 =LoadSound("./sounds/guitarch/6th_str.mp3");
    
    Rectangle str1;
    Rectangle str2;
    Rectangle str3;
    Rectangle str4;
    Rectangle str5;
    Rectangle str6;
    Rectangle point;

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
         str1.width=721;
         str1.height=9;
         str1.x=-2;
         str1.y= 150;
         
         str2.width=721;
         str2.height=9;
         str2.x=-2;
         str2.y= 190;
         
         
         str3.width=721;
         str3.height=9;
         str3.x=-2;
         str3.y= 230;
         
         
         str4.width=721;
         str4.height=9;
         str4.x=-2;
         str4.y= 270;
         
         str5.width=721;
         str5.height=9;
         str5.x=-2;
         str5.y= 305;
         
         str6.width=721;
         str6.height=9;
         str6.x=-2;
         str6.y= 343;


         point.x = mousepos.x;
         point.y = mousepos.y;
         point.width = 20;
         point.height = 20;
         
          mousepos = GetMousePosition();
         
         
          collision[1] = CheckCollisionRecs(point, str1);
    if (collision[1])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(strs1);
        str1.x=+1;
        str1.x=-2;
        
      }
    }
    
             collision[2] = CheckCollisionRecs(point, str2);
    if (collision[2])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(strs2);
        
      }
    }
    
             collision[3] = CheckCollisionRecs(point, str3);
    if (collision[3])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(strs3);
        
      }
    }
    
             collision[4] = CheckCollisionRecs(point, str4);
    if (collision[4])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(strs4);
        
      }
    }
    
             collision[5] = CheckCollisionRecs(point, str5);
    if (collision[5])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(strs5);
        
      }
    }
    
             collision[6] = CheckCollisionRecs(point, str6);
    if (collision[6])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(strs6);
        
      }
    }
        

         
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
            DrawTexture(guitarscr,-2,1,WHITE);
            DrawRectangleRec(point,BLUE);	
                 DrawRectangleLinesEx(str1,1.5,RED);
            DrawRectangleLinesEx(str2,1.5,GREEN);
            DrawRectangleLinesEx(str3,1.5,BLUE);
            DrawRectangleLinesEx(str4,1.5,GOLD);
            DrawRectangleLinesEx(str5,1.5,ORANGE);
            DrawRectangleLinesEx(str6,1.5,LIME);
            
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

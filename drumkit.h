
#include "raylib.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------

extern bool collision[11]={false,false,false,false,false,false,false,false,false,false,false};
extern Vector2 mousepos = {-100.0f, 100.0f};


int drum(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 500;
     InitAudioDevice();
    InitWindow(screenWidth, screenHeight, "Drumkit_proto");
    
    Texture2D drumscr=LoadTexture("./assets/drums.png");
    Texture2D returnbu=LoadTexture("./assets/return.png");
    
    
    Sound crash =LoadSound("./sounds/drums/crashcymbal.wav");
    Sound hightom =LoadSound("./sounds/drums/hightom.wav");
    Sound hihat =LoadSound("./sounds/drums/hihat.wav");
    Sound kick =LoadSound("./sounds/drums/kick.wav");
    Sound lowtom =LoadSound("./sounds/drums/lowtom.wav");
    Sound midtom =LoadSound("./sounds/drums/midtom.wav");
    Sound ridecym =LoadSound("./sounds/drums/ridecymbal.mp3");
    Sound snare =LoadSound("./sounds/drums/snare.wav");
    Sound click=LoadSound("./sounds/drums/click.mp3");
    
    Rectangle str1;
    Rectangle str2;
    Rectangle str3;
    Rectangle str4;
    Rectangle str5;
    Rectangle str6;
      Rectangle str7;
    Rectangle str8;
    Rectangle str9;
    Rectangle str10;
    Rectangle retrec;
    
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
         str1.width=111;
         str1.height=79;
         str1.x=250;
         str1.y= 220;
         
         str2.width=106;
         str2.height=95;
         str2.x=462;
         str2.y= 223;
         
         
         str3.width=95;
         str3.height=95;
         str3.x=294;
         str3.y= 106;
         
         
         str4.width=103;
         str4.height=96;
         str4.x=428;
         str4.y=106;
         
         str5.width=165;
         str5.height=122;
         str5.x=98;
         str5.y= 45;
         
         str6.width=182;
         str6.height=133;
         str6.x=482;
         str6.y=13;
         
         str7.width=155;
         str7.height=131;
         str7.x=97;
         str7.y=249;
         
          str8.width=122;
         str8.height=90;
         str8.x=583;
         str8.y=152;
         
          str9.width=182;
         str9.height=133;
         str9.x=482;
         str9.y=13;
         
          str10.width=81;
         str10.height=64;
         str10.x=362;
         str10.y=273;


         point.x = mousepos.x;
         point.y = mousepos.y;
         point.width = 20;
         point.height = 20;
         
         
         retrec.x=480;
         retrec.y=400;
         retrec.width=returnbu.width;
         retrec.height=returnbu.height-10;
         
          mousepos = GetMousePosition();
         
         
          collision[1] = CheckCollisionRecs(point, str1);
    if (collision[1])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(snare);
        str1.x=+1;
        str1.x=-2;
        
      }
    }
    
    
      collision[2] = CheckCollisionRecs(point, str2);
    if (collision[2])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(lowtom);
        
      }
    }
    
    
    collision[3] = CheckCollisionRecs(point, str3);
    if (collision[3])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(hightom);
        
      }
    }
    
    
               collision[4] = CheckCollisionRecs(point, str4);
    if (collision[4])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(midtom);
        
      }
    }
    
    
           collision[5] = CheckCollisionRecs(point, str5);
    if (collision[5])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(crash);
        
      }
    }
    
    
    
       collision[6] = CheckCollisionRecs(point, str6);
    if (collision[6])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(lowtom);
        
      }
    }
    
    
           collision[7] = CheckCollisionRecs(point, str7);
    if (collision[7])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(hihat);
        
      }
    }
    
           collision[8] = CheckCollisionRecs(point, str8);
    if (collision[8])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(crash);
        
      }
    }
    
    
    
           collision[9] = CheckCollisionRecs(point, str10);
    if (collision[9])
    {

      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
        PlaySound(kick);
        
      }
    }
    
    collision[10]=CheckCollisionRecs(point,retrec);
    if(collision[10])
      {
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
         {
         PlaySound(click);
         CloseAudioDevice();
         CloseWindow();
         main();
         
         }
      }
           
       
       
       
       
       
       
       
    
    
    
    
     

         
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
            DrawTexture(drumscr,-2,1,WHITE);
            DrawRectangleRec(point,BLUE);	
            DrawRectangleLinesEx(str1,1.5,RED);
            DrawRectangleLinesEx(str2,1.5,GREEN);
            DrawRectangleLinesEx(str3,1.5,BLUE);
            DrawRectangleLinesEx(str4,1.5,GOLD);
            DrawRectangleLinesEx(str5,1.5,ORANGE);
            DrawRectangleLinesEx(str6,1.5,LIME);
            
             DrawRectangleLinesEx(str7,1.5,BLUE);
            DrawRectangleLinesEx(str8,1.5,GOLD);
            DrawRectangleLinesEx(str9,1.5,ORANGE);
            DrawRectangleLinesEx(str10,1.5,LIME);
            DrawTexture(returnbu,480,400,WHITE);
            DrawRectangleLinesEx(retrec,1.5,ORANGE);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
    return 0;
}

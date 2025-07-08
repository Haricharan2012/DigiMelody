#include "raylib.h"

//------------------------------------------------------------------------------------
// Program main entry point


bool collision[10]={false,false,false,false,false,false,false,false,false,false};

Vector2 mousepos={-100.0f,100.0f};

//------------------------------------------------------------------------------------
int flute(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    
    InitAudioDevice();

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    
    Texture2D flutescr=LoadTexture("./assets/flutscr.png");
    
    //rectangles
    
    Rectangle pipe1;
    Rectangle pipe2;
    Rectangle pipe3;
    Rectangle pipe4;
    Rectangle pipe5;
    Rectangle pipe6;
    Rectangle pipe7;
    Rectangle pipe8;
    Rectangle pipe9;
    Rectangle point;
    
    //sounds
    
    Sound notes[10]={LoadSound("./sounds/fluteso/a2.wav"),LoadSound("./sounds/fluteso/g2.wav"),LoadSound("./sounds/fluteso/f1.wav"),LoadSound("./sounds/fluteso/e1.wav"),LoadSound("./sounds/fluteso/d1.wav"),LoadSound("./sounds/fluteso/c1.wav"),LoadSound("./sounds/fluteso/h1.wav"),LoadSound("./sounds/fluteso/a1.wav"),LoadSound("./sounds/fluteso/g1.wav")};
    
    
    

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        
        mousepos=GetMousePosition();
        
        pipe1.width=47;
        pipe1.height=362;
        pipe1.x=241;
        pipe1.y=49;
        
        pipe2.width=38;
        pipe2.height=333;
        pipe2.x=291;
        pipe2.y=43;
        
        pipe3.width=41;
        pipe3.height=305;
        pipe3.x=334;
        pipe3.y=43;
        
        pipe4.width=42;
        pipe4.height=274;
        pipe4.x=377;
        pipe4.y=45;
        
        pipe5.width=39;
        pipe5.height=239;
        pipe5.x=423;
        pipe5.y=51;
        
        
        pipe6.width=42;
        pipe6.height=215;
        pipe6.x=465;
        pipe6.y=56;
        
        pipe7.width=34;
        pipe7.height=188;
        pipe7.x=508;
        pipe7.y=62;
        
        pipe8.width=35;
        pipe8.height=172;
        pipe8.x=542;
        pipe8.y=70;	
        
        pipe9.width=28;
        pipe9.height=145;
        pipe9.x=577;
        pipe9.y=82;
        
        point.width=10;
        point.height=10;
        point.x=mousepos.x;
        point.y=mousepos.y;
        
        
        
        
        


         collision[0]=CheckCollisionRecs(point,pipe1);
         collision[1]=CheckCollisionRecs(point,pipe2);
         collision[2]=CheckCollisionRecs(point,pipe3);
         collision[3]=CheckCollisionRecs(point,pipe4);
         collision[4]=CheckCollisionRecs(point,pipe5);
         collision[5]=CheckCollisionRecs(point,pipe6);
         collision[6]=CheckCollisionRecs(point,pipe7);
         collision[7]=CheckCollisionRecs(point,pipe8);
         collision[8]=CheckCollisionRecs(point,pipe9);
         
           
           for(int n=0;n<=10;n++)
           {
           
           if(collision[n])
             {
             
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                   {
                     PlaySound(notes[n]);
                   }
               }
               
             }
         
         
         
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
            DrawTexture(flutescr,1,-10,WHITE);
            DrawRectangleLinesEx(pipe1,1.5,BLUE);
            DrawRectangleLinesEx(pipe2,1.5,RED);
            DrawRectangleLinesEx(pipe3,1.5,BLUE);
            DrawRectangleLinesEx(pipe4,1.5,ORANGE);
            DrawRectangleLinesEx(pipe5,1.5,GREEN);
            DrawRectangleLinesEx(pipe6,1.5,GRAY);
            DrawRectangleLinesEx(pipe7,1.5,BLACK);
            DrawRectangleLinesEx(pipe8,1.5,LIME);
            DrawRectangleLinesEx(pipe9,1.5,BLACK);
            DrawRectangleLinesEx(point,1.5,SKYBLUE);
            
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

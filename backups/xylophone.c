
#include "raylib.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------

bool collision[13]={false,false,false,false,false,false,false,false,false,false,false,false,false};
Vector2 mousepos={-100.0f,100.0f};



int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 500;
    
    InitAudioDevice();
    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------
    
    
    //Textures
    Texture2D xyloscr=LoadTexture("./assets/xylo.png");
    
    
    //sounds
    
    Sound notes[13]={LoadSound("./sounds/xyloso/note1.wav"),LoadSound("./sounds/xyloso/note2.wav"),LoadSound("./sounds/xyloso/note3.wav"),LoadSound("./sounds/xyloso/note4.wav"),LoadSound("./sounds/xyloso/note5.wav"),LoadSound("./sounds/xyloso/note6.wav"),LoadSound("./sounds/xyloso/note7.wav"),LoadSound("./sounds/xyloso/note8.wav"),LoadSound("./sounds/xyloso/note9.wav"),LoadSound("./sounds/xyloso/note10.wav"),LoadSound("./sounds/xyloso/note11.wav"),LoadSound("./sounds/xyloso/note12.wav"),LoadSound("./sounds/xyloso/note13.wav")};
   
    
    
    //rectangles 
    
		    Rectangle rec1;
		     Rectangle rec2;
		      Rectangle rec3;
		       Rectangle rec4;
			Rectangle rec5;
			 Rectangle rec6;
			  Rectangle rec7;
			   Rectangle rec8;
			    Rectangle rec9;
			     Rectangle rec10;
			      Rectangle rec11;
			       Rectangle rec12;
			       Rectangle rec13;
			       Rectangle point;
               

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        rec1.width= 34;
        rec1.height=239;
        rec1.x=120;
        rec1.y=115;

        rec2.width= 37;
        rec2.height=230;
        rec2.x=166;
        rec2.y=123;
        
        
        rec3.width= 37;
        rec3.height=223;
        rec3.x=212;
        rec3.y=127;
        
        
        rec4.width= 37;
        rec4.height=201;
        rec4.x=257;
        rec4.y=136;
        
        rec5.width= 37;
        rec5.height=191;
        rec5.x=305;
        rec5.y=139;
        
         rec6.width= 38;
        rec6.height=179;
        rec6.x=347;
        rec6.y=148;
        
         rec7.width= 35;
        rec7.height=147;
        rec7.x=395;
        rec7.y=170;
        
         rec8.width= 38;
        rec8.height=161;
        rec8.x=435;
        rec8.y=155;
        
        
         rec9.width= 34;
        rec9.height=157;
        rec9.x=482;
        rec9.y=156;
        
        
         rec10.width= 38;
        rec10.height=147;
        rec10.x=522;
        rec10.y=162;
        
         rec11.width= 36;
        rec11.height=141;
        rec11.x=567;
        rec11.y=165;
        
        
         rec12.width= 40;
        rec12.height=126;
        rec12.x=607;
        rec12.y=172;
        
         rec13.width= 36;
        rec13.height=119;
        rec13.x=651;
        rec13.y=175;
        
        mousepos=GetMousePosition();
        
        point.x=mousepos.x;
        point.y=mousepos.y;
        point.height=10;
        point.width=10;
        
        
        collision[0]=CheckCollisionRecs(rec1,point);
        collision[1]=CheckCollisionRecs(rec2,point);
        collision[2]=CheckCollisionRecs(rec3,point);
        collision[3]=CheckCollisionRecs(rec4,point);
        collision[4]=CheckCollisionRecs(rec5,point);
        collision[5]=CheckCollisionRecs(rec6,point);
        collision[6]=CheckCollisionRecs(rec7,point);
        collision[7]=CheckCollisionRecs(rec8,point);
        collision[8]=CheckCollisionRecs(rec9,point);
        collision[9]=CheckCollisionRecs(rec10,point);
        collision[10]=CheckCollisionRecs(rec11,point);
        collision[11]=CheckCollisionRecs(rec12,point);
        collision[12]=CheckCollisionRecs(rec13,point);
        
           
           
           for(int n=0;n<=13;n++)
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
            DrawTexture(xyloscr,10,10,WHITE);
           
            DrawRectangleLinesEx(rec1,1.5,RED);
            DrawRectangleLinesEx(rec2,1.5,GREEN);
            DrawRectangleLinesEx(rec3,1.5,ORANGE);
            DrawRectangleLinesEx(rec4,1.5,GOLD);
            DrawRectangleLinesEx(rec5,1.5,PINK);
            DrawRectangleLinesEx(rec6,1.5,VIOLET);
            DrawRectangleLinesEx(rec7,1.5,LIME);
            DrawRectangleLinesEx(rec8,1.5,MAROON);
            DrawRectangleLinesEx(rec9,1.5,GRAY);
            DrawRectangleLinesEx(rec10,1.5,BEIGE);
            DrawRectangleLinesEx(rec11,1.5,PURPLE);
            DrawRectangleLinesEx(rec12,1.5,BROWN);
            DrawRectangleLinesEx(rec13,1.5,YELLOW);
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

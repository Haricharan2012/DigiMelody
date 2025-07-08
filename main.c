
#include "raylib.h"
#include "xylophone.h"
#include "drumkit.h"
#include "flute.h"
#include "guitar.h"
#include "piano.h"


//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
Vector2 mouseposi={-100.0f,100.0f};
extern bool collisioni[5]={false,false,false,false,false};

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 500;

    InitWindow(screenWidth, screenHeight, "main");
     

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------
    
    	Texture2D logoscr=LoadTexture("./assets/logoscr2.png");
    	Texture2D optionscr=LoadTexture("./assets/option.png");
    	Texture2D selec[5]={LoadTexture("./assets/xyloselect.png"),LoadTexture("./assets/pianosel.png"),LoadTexture("./assets/drumsel.png"),LoadTexture("./assets/guitarsel.png"),LoadTexture("./assets/flutesel.png")};
    	
    	int framecount=0;
    	
    	Rectangle xylorec;
    	Rectangle pianorec;
    	Rectangle drumrec;
    	Rectangle guitarrec;
    	Rectangle fluterec;
    	Rectangle point;
    	
    	

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        
          framecount++;
          
     //     if(framecount>120)
        //    {
        //      UnloadTexture(logoscr);
              
              
         //   }
         
        mouseposi=GetMousePosition();
        
        
        xylorec.width=50;
        xylorec.height=72;
        xylorec.x=310;
        xylorec.y=299;
        
        pianorec.width=59;
        pianorec.height=97;
        pianorec.x=276;
        pianorec.y=158;
        
        drumrec.width=115;
        drumrec.height=55;
        drumrec.x=352;
        drumrec.y=111;
        
        guitarrec.width=65;
        guitarrec.height=84;
        guitarrec.x=475;
        guitarrec.y=164;
        
        fluterec.width=84;
        fluterec.height=45;
        fluterec.x=439;
        fluterec.y=309;
        
        point.width=10;
        point.height=10;
        point.x=mouseposi.x;
        point.y=mouseposi.y;
        
        
         collisioni[0]=CheckCollisionRecs(point,xylorec);
         collisioni[1]=CheckCollisionRecs(point,pianorec);
         collisioni[2]=CheckCollisionRecs(point,drumrec);
         collisioni[3]=CheckCollisionRecs(point,guitarrec);
         collisioni[4]=CheckCollisionRecs(point,fluterec);
        
          //if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                 //  {
                 //    CloseWindow();
                  //   work();
                    
                 //  }
                   
                   
             
       
         
         
        
        

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);



             DrawTexture(optionscr,1,1,WHITE);
             DrawRectangleLinesEx(xylorec,1.5,BLANK);
             DrawRectangleLinesEx(pianorec,1.5,BLANK);
             DrawRectangleLinesEx(drumrec,1.5,BLANK);
             DrawRectangleLinesEx(guitarrec,1.5,BLANK);
             DrawRectangleLinesEx(fluterec,1.5,BLANK);
             DrawRectangleLinesEx(point,1.5,LIME);
           
           
                for(int n=0;n<5;n++)
           {
           
           if(collisioni[n])
             {
             
               DrawTexture(selec[n],1,1,WHITE);
             
                if((n==0) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                   {
                     CloseWindow();
                     xylo();
                   }
                   
                if((n==1) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                   {
                     CloseWindow();
                     piano();
                   }
                   
                 if((n==2) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                   {
                     CloseWindow();
                     drum();
                   }
                   
                 if((n==3) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                   {
                     CloseWindow();
                     guitar();
                   }
                 if((n==4) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                   {
                     CloseWindow();
                     flute();
                   }
               }
               
             } 
             
            // DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

            if(framecount<120)
             {
             
             DrawTexture(logoscr,1,1,WHITE);
            
            
           // UnloadTexture(logoscr);
            
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

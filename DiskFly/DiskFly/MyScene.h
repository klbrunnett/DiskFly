//
//  MyScene.h
//  DiskFly
//

//  Copyright (c) 2013 InitToWinIt. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "MenuNode.h"
#import "Disc.h"
#import "GoalNode.h"
#import "CongratulationsScene.h"
#import "MenuNode.h"
#import "MoveZone.h"
#import "Pause Button.h"
#import "LevelCreator.h"
#import "Obstacles.h"

@interface MyScene : SKScene

-(void) pause;
-(void) resume;
-(void) retry;
-(Boolean) targetRestingInGoal;
-(Boolean) diskCanReset;
-(int) starsEarned;
-(void) makeStar;
-(Disc*) makeStarReturn;
-(void)loadCurrentLevel;
-(void)loadLevel: (int) level;

@property int currentLevelNumber;
@property MenuNode *menu;

@end

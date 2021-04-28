/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/Versions/A/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/GKStrategist.h>

@class NSString;

@interface GKMonteCarloStrategist : NSObject <GKStrategist> {

	GKCMonteCarloStrategist* _monteCarloStrategist;

}

@property (assign,nonatomic) unsigned long long budget; 
@property (assign,nonatomic) unsigned long long explorationParameter; 
@property (nonatomic,retain) id<GKGameModel> gameModel; 
@property (nonatomic,retain) id<GKRandom> randomSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)setBudget:(unsigned long long)arg1 ;
-(unsigned long long)budget;
-(id<GKGameModel>)gameModel;
-(id)bestMoveForActivePlayer;
-(void)setGameModel:(id<GKGameModel>)arg1 ;
-(id<GKRandom>)randomSource;
-(void)setRandomSource:(id<GKRandom>)arg1 ;
-(char)validateGameModel:(id)arg1 ;
-(unsigned long long)explorationParameter;
-(void)setExplorationParameter:(unsigned long long)arg1 ;
@end


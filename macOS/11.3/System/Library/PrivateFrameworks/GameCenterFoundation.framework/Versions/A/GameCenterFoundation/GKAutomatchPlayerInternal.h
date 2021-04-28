/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKSpecialPlayerInternal.h>

@class NSString;

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal {

	long long _automatchPosition;

}

@property (assign,nonatomic) long long automatchPosition;                              //@synthesize automatchPosition=_automatchPosition - In the implementation block
@property (nonatomic,readonly) NSString * automatchPositionDisplayString; 
+(char)supportsSecureCoding;
-(id)alias;
-(id)playerID;
-(id)teamPlayerID;
-(id)gamePlayerID;
-(char)isAutomatchPlayer;
-(NSString *)automatchPositionDisplayString;
-(long long)automatchPosition;
-(void)setAutomatchPosition:(long long)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSNumber, NSSet;

@interface GKGameSummaryInternal : GKInternalRepresentation {

	char _isArcade;
	NSString* _bundleID;
	NSNumber* _adamID;
	NSSet* _compatiblePlatforms;

}

@property (nonatomic,retain) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * adamID;                        //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,retain) NSSet * compatiblePlatforms;              //@synthesize compatiblePlatforms=_compatiblePlatforms - In the implementation block
@property (assign,nonatomic) char isArcade;                            //@synthesize isArcade=_isArcade - In the implementation block
+(id)secureCodedPropertyKeys;
-(id)description;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setAdamID:(NSNumber *)arg1 ;
-(NSNumber *)adamID;
-(NSSet *)compatiblePlatforms;
-(char)isArcade;
-(void)setCompatiblePlatforms:(NSSet *)arg1 ;
-(void)setIsArcade:(char)arg1 ;
-(id)initWithGameSummary:(id)arg1 ;
@end

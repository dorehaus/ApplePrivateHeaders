/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSSet, GKGameCacheObject;

@interface FriendPlayedGameEntry : NSManagedObject

@property (nonatomic,retain) NSSet * friendsPlayed; 
@property (nonatomic,retain) GKGameCacheObject * game; 
+(id)fetchRequest;
@end


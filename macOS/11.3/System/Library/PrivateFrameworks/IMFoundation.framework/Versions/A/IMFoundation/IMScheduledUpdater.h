/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMManualUpdater.h>

@class NSCountedSet;

@interface IMScheduledUpdater : IMManualUpdater {

	NSCountedSet* _holdingUpdatesKeys;

}

@property (nonatomic,retain) NSCountedSet * holdingUpdatesKeys;              //@synthesize holdingUpdatesKeys=_holdingUpdatesKeys - In the implementation block
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
-(NSCountedSet *)holdingUpdatesKeys;
-(void)setHoldingUpdatesKeys:(NSCountedSet *)arg1 ;
-(char)isHoldingUpdates;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForAllKeys;
-(char)isHoldingUpdatesForKey:(id)arg1 ;
@end

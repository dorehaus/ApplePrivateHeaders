/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSUndoManager.h>

@class NSMutableArray;

@interface ABUndoManager : NSUndoManager {

	char _inCreationUndoGrouping;
	char _checkpointSet;
	NSMutableArray* _commandTargetsSinceCheckpoint;

}
+(void)initialize;
+(id)sharedInstance;
+(id)makeUndoManager;
-(void)dealloc;
-(id)init;
-(void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)clearCheckpoint;
-(void)beginCreationUndoGrouping;
-(void)endCreationUndoGrouping;
-(void)setNonCreationActionName:(id)arg1 ;
-(void)setCheckpoint;
-(void)removeCommandsSinceCheckpoint;
@end


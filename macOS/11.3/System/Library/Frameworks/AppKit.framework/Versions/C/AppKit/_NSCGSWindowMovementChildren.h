/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSMutableSet;

@interface _NSCGSWindowMovementChildren : NSObject {

	NSMutableOrderedSet* _windowsToAdd;
	NSMutableSet* _windowsToRemove;

}
-(void)dealloc;
-(id)init;
-(void)removeWindow:(id)arg1 ;
-(void)addWindow:(id)arg1 ;
-(void)setWindows:(id)arg1 ;
-(id)windowsForWindow:(id)arg1 ;
-(void)commitForWindow:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <Foundation/NSNotificationCenter.h>

@class NSWorkspace, NSLock, NSHashTable;

@interface NSWorkspaceNotificationCenter : NSNotificationCenter {

	NSWorkspace* _workspace;
	NSLock* _workspaceLock;
	NSWorkspaceNotificationCenterSubsystemContext_t _subsystemContexts[20];
	NSHashTable* _notificationObservers[25];

}
-(void)dealloc;
-(id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(id)initWithWorkspace:(id)arg1 ;
-(char)hasObserversForNotificationName:(id)arg1 ;
-(char)_checkForObserversOfSubsystem:(int)arg1 ;
-(void)_createSubsystemIfNecessary:(int)arg1 ;
-(void)_destroyAllUnobservedSubsystems;
-(char)_destroySubsystemIfUnobserved:(int)arg1 ;
-(void)_addOrRemoveObserverForAllNotifications:(id)arg1 isAdding:(char)arg2 ;
-(void)_addOrRemoveObserver:(id)arg1 forName:(id)arg2 isAdding:(char)arg3 ;
-(void)_workspaceDidResignOrBecomeActive:(id)arg1 ;
-(id)workspace;
-(unsigned)connectionID;
-(void)_workspaceDidBecomeActive:(id)arg1 ;
-(void)_workspaceDidResignActive:(id)arg1 ;
-(void)_accessibilityDisplaySettingsDidChange:(id)arg1 ;
-(void)_voiceOverStatusDidChange:(id)arg1 ;
-(void)_switchControlStatusDidChange:(id)arg1 ;
-(void)_menuBarDidChangeAppearance:(id)arg1 ;
@end

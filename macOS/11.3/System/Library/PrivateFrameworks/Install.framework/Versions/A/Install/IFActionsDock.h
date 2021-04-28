/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface IFActionsDock : NSObject {

	NSArray* _dockItems;
	unsigned _port;
	int _tid;
	char _connected;

}
-(void)dealloc;
-(id)init;
-(void)close;
-(char)connect;
-(char)addDockItem:(id)arg1 atIndex:(id)arg2 ;
-(char)moveDockItem:(id)arg1 toIndex:(id)arg2 ;
-(char)removeDockItem:(id)arg1 ;
-(char)legacyAddDockItem:(id)arg1 atIndex:(id)arg2 ;
-(id)getDockItems;
-(char)legacyMoveDockItem:(unsigned)arg1 toIndex:(unsigned)arg2 ;
-(id)legacyGetDockItems;
-(char)legacyRemoveDockItem:(unsigned)arg1 ;
-(id)dockPlistPathForUser:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LoginUIKit/LoginUIKit-Structs.h>
@class NSMutableSet;

@interface LUIUnmanagedSpace : NSObject {

	int _level;
	unsigned long long _spaceID;
	CFArrayRef _spaceIDs;
	NSMutableSet* _windowIDs;
	long long _shownCount;

}

@property (assign) unsigned long long spaceID;              //@synthesize spaceID=_spaceID - In the implementation block
@property (assign) CFArrayRef spaceIDs;                     //@synthesize spaceIDs=_spaceIDs - In the implementation block
@property (retain) NSMutableSet * windowIDs;                //@synthesize windowIDs=_windowIDs - In the implementation block
@property (assign) long long shownCount;                    //@synthesize shownCount=_shownCount - In the implementation block
@property (readonly) int level;                             //@synthesize level=_level - In the implementation block
+(id)unmanagedSpaceWithLevel:(int)arg1 ;
-(long long)_numWindowsInSpace;
-(void)_setupSpace;
-(void)_cleanupSpace;
-(void)showSpace;
-(void)hideSpace;
-(CFArrayRef)spaceIDs;
-(void)setSpaceIDs:(CFArrayRef)arg1 ;
-(NSMutableSet *)windowIDs;
-(void)setWindowIDs:(NSMutableSet *)arg1 ;
-(long long)shownCount;
-(void)setShownCount:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(int)level;
-(void)removeWindow:(id)arg1 ;
-(void)addWindow:(id)arg1 ;
-(unsigned long long)spaceID;
-(id)initWithLevel:(int)arg1 ;
-(void)addWindows:(id)arg1 ;
-(void)removeWindows:(id)arg1 ;
-(void)setSpaceID:(unsigned long long)arg1 ;
@end


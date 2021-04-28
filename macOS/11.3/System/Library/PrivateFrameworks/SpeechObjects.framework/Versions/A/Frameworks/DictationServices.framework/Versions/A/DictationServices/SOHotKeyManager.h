/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/Frameworks/DictationServices.framework/Versions/A/DictationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface SOHotKeyManager : NSObject {

	unsigned _ourCGSConnectionID;
	NSMutableArray* _registeredHotKeyArray;
	NSArray* _cachedSymbolicHotKeyTable;
	unsigned _ioConnection;

}
+(id)defaultHotKeyManager;
-(id)init;
-(void)delete;
-(char)stickyKeysIsEnabled;
-(unsigned)findConflictingSymbolicHotKeyFor:(unsigned)arg1 ;
-(void)gotoKbdPref;
-(unsigned)sharedCGSConnectionID;
-(char)unregisterAllHotKeys;
-(unsigned)_IOConnection;
-(id)symbolicHotKeys;
-(char)registerVirtualKeyCode:(unsigned short)arg1 modifierKeyFlags:(unsigned)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(char)unregisterVirtualKeyCode:(unsigned short)arg1 modifierKeyFlags:(unsigned)arg2 ;
@end


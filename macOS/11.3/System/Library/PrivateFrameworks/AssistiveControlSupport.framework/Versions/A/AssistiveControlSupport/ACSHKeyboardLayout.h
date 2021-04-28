/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssistiveControlSupport/AssistiveControlSupport-Structs.h>
@class NSString, NSData, NSMutableDictionary;

@interface ACSHKeyboardLayout : NSObject {

	unsigned char _keyboardHWType;
	NSString* _currentInputSourceName;
	NSData* __ucData;
	NSMutableDictionary* _keyCapsByModifiersAndDeadKeyState;
	UCKeyboardLayout* _ucKeyboardLayout;

}

@property (nonatomic,copy) NSString * currentInputSourceName;                            //@synthesize currentInputSourceName=_currentInputSourceName - In the implementation block
@property (nonatomic,retain) NSData * _ucData;                                           //@synthesize _ucData=__ucData - In the implementation block
@property (retain) NSMutableDictionary * keyCapsByModifiersAndDeadKeyState;              //@synthesize keyCapsByModifiersAndDeadKeyState=_keyCapsByModifiersAndDeadKeyState - In the implementation block
@property (assign) unsigned char keyboardHWType;                                         //@synthesize keyboardHWType=_keyboardHWType - In the implementation block
@property (assign) UCKeyboardLayout* ucKeyboardLayout;                                   //@synthesize ucKeyboardLayout=_ucKeyboardLayout - In the implementation block
+(unsigned long long)relevantModifiersFromModifiers:(unsigned long long)arg1 ;
+(id)keyboardLayoutForCurrentKeyboardType;
+(id)keyboardLayoutForHWType:(unsigned char)arg1 ;
+(id)relevantModifiers;
+(id)_allRelevantModifierMaskCombinations;
+(unsigned long long)_functionMappedMacKeyCodeForMacKeyCode:(unsigned long long)arg1 modifiers:(unsigned)arg2 ;
+(void)updateInputSourceForAllLayouts;
-(id)description;
-(void)setKeyboardHWType:(unsigned char)arg1 ;
-(unsigned char)keyboardHWType;
-(char)macKeyCodeIsModifiedByCapsLock:(unsigned long long)arg1 modifiers:(unsigned long long)arg2 deadKeyState:(unsigned)arg3 ;
-(id)keyCapsByModifierMaskForUSBKeyCode:(unsigned long long)arg1 deadKeyState:(unsigned)arg2 ;
-(NSString *)currentInputSourceName;
-(void)setCurrentInputSourceName:(NSString *)arg1 ;
-(id)stringFromUSBKeyCode:(unsigned long long)arg1 modifiers:(unsigned)arg2 deadKeyState:(unsigned)arg3 isDeadKey:(char*)arg4 ;
-(id)initWithKeyboardHWType:(unsigned char)arg1 ;
-(void)_setKeyboardHWType:(unsigned char)arg1 ;
-(void)setKeyCapsByModifiersAndDeadKeyState:(NSMutableDictionary *)arg1 ;
-(void)updateInputSource;
-(void)set_ucData:(NSData *)arg1 ;
-(NSData *)_ucData;
-(void)setUcKeyboardLayout:(UCKeyboardLayout*)arg1 ;
-(void)_clearKeyCapsCache;
-(id)stringFromMacKeyCode:(unsigned long long)arg1 modifiers:(unsigned)arg2 deadKeyState:(unsigned)arg3 isDeadKey:(char*)arg4 ;
-(unsigned)_carbonModifiersForNSModifiers:(unsigned long long)arg1 ;
-(UCKeyboardLayout*)ucKeyboardLayout;
-(NSMutableDictionary *)keyCapsByModifiersAndDeadKeyState;
-(char)usbKeyCodeIsModifiedByCapsLock:(unsigned long long)arg1 modifiers:(unsigned long long)arg2 deadKeyState:(unsigned)arg3 ;
@end


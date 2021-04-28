/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityEvents.framework/Versions/A/AccessibilityEvents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityEvents/AccessibilityEvents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXEKeyboardEvent : NSObject <NSCopying> {

	char _isDownEvent;
	char _isRepeatEvent;
	char _isModifierChangedEvent;
	char _isCommandDown;
	char _isLeftCommandDown;
	char _isRightCommandDown;
	char _isOptionDown;
	char _isLeftOptionDown;
	char _isRightOptionDown;
	char _isControlDown;
	char _isLeftControlDown;
	char _isRightControlDown;
	char _isShiftDown;
	char _isLeftShiftDown;
	char _isRightShiftDown;
	char _isFnDown;
	char _isSynthesized;
	unsigned long long _keyCode;
	NSString* _unicodeCharacter;
	unsigned long long __flags;

}

@property (assign,nonatomic) unsigned long long keyCode;              //@synthesize keyCode=_keyCode - In the implementation block
@property (nonatomic,copy) NSString * unicodeCharacter;               //@synthesize unicodeCharacter=_unicodeCharacter - In the implementation block
@property (assign) char isDownEvent;                                  //@synthesize isDownEvent=_isDownEvent - In the implementation block
@property (assign) char isRepeatEvent;                                //@synthesize isRepeatEvent=_isRepeatEvent - In the implementation block
@property (assign) char isModifierChangedEvent;                       //@synthesize isModifierChangedEvent=_isModifierChangedEvent - In the implementation block
@property (assign) char isCommandDown;                                //@synthesize isCommandDown=_isCommandDown - In the implementation block
@property (assign) char isLeftCommandDown;                            //@synthesize isLeftCommandDown=_isLeftCommandDown - In the implementation block
@property (assign) char isRightCommandDown;                           //@synthesize isRightCommandDown=_isRightCommandDown - In the implementation block
@property (assign) char isOptionDown;                                 //@synthesize isOptionDown=_isOptionDown - In the implementation block
@property (assign) char isLeftOptionDown;                             //@synthesize isLeftOptionDown=_isLeftOptionDown - In the implementation block
@property (assign) char isRightOptionDown;                            //@synthesize isRightOptionDown=_isRightOptionDown - In the implementation block
@property (assign) char isControlDown;                                //@synthesize isControlDown=_isControlDown - In the implementation block
@property (assign) char isLeftControlDown;                            //@synthesize isLeftControlDown=_isLeftControlDown - In the implementation block
@property (assign) char isRightControlDown;                           //@synthesize isRightControlDown=_isRightControlDown - In the implementation block
@property (assign) char isShiftDown;                                  //@synthesize isShiftDown=_isShiftDown - In the implementation block
@property (assign) char isLeftShiftDown;                              //@synthesize isLeftShiftDown=_isLeftShiftDown - In the implementation block
@property (assign) char isRightShiftDown;                             //@synthesize isRightShiftDown=_isRightShiftDown - In the implementation block
@property (assign) char isFnDown;                                     //@synthesize isFnDown=_isFnDown - In the implementation block
@property (assign) char isSynthesized;                                //@synthesize isSynthesized=_isSynthesized - In the implementation block
@property (assign,nonatomic) unsigned long long _flags;               //@synthesize _flags=__flags - In the implementation block
@property (readonly) char isDown; 
@property (readonly) char isRepeat; 
@property (readonly) long long modifierMask; 
+(id)eventFromCGEvent:(CGEventRef)arg1 ;
+(char)isKeyboardEvent:(CGEventRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)_flags;
-(long long)modifierMask;
-(unsigned long long)keyCode;
-(char)isSynthesized;
-(void)setKeyCode:(unsigned long long)arg1 ;
-(char)isDown;
-(NSString *)unicodeCharacter;
-(void)setUnicodeCharacter:(NSString *)arg1 ;
-(char)isDownEvent;
-(void)setIsDownEvent:(char)arg1 ;
-(char)isRepeatEvent;
-(void)setIsRepeatEvent:(char)arg1 ;
-(char)isModifierChangedEvent;
-(void)setIsModifierChangedEvent:(char)arg1 ;
-(char)isLeftCommandDown;
-(void)setIsLeftCommandDown:(char)arg1 ;
-(char)isRightCommandDown;
-(void)setIsRightCommandDown:(char)arg1 ;
-(char)isLeftOptionDown;
-(void)setIsLeftOptionDown:(char)arg1 ;
-(char)isRightOptionDown;
-(void)setIsRightOptionDown:(char)arg1 ;
-(char)isLeftShiftDown;
-(void)setIsLeftShiftDown:(char)arg1 ;
-(char)isRightShiftDown;
-(void)setIsRightShiftDown:(char)arg1 ;
-(char)isFnDown;
-(void)setIsFnDown:(char)arg1 ;
-(char)isLeftControlDown;
-(char)isRightControlDown;
-(char)isCommandDown;
-(char)isOptionDown;
-(char)isControlDown;
-(char)isShiftDown;
-(void)setIsLeftControlDown:(char)arg1 ;
-(void)setIsRightControlDown:(char)arg1 ;
-(void)set_flags:(unsigned long long)arg1 ;
-(void)setIsSynthesized:(char)arg1 ;
-(void)setIsCommandDown:(char)arg1 ;
-(void)setIsOptionDown:(char)arg1 ;
-(void)setIsControlDown:(char)arg1 ;
-(void)setIsShiftDown:(char)arg1 ;
-(char)isRepeat;
@end


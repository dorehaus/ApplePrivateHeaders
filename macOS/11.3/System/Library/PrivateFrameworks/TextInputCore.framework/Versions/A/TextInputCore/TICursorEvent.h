/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TIUserAction.h>

@class NSString;

@interface TICursorEvent : TIUserAction {

	char _isSelection;
	char _extendsPriorWord;
	NSString* _inWord;
	unsigned long long _selectionLocation;
	NSRange _inWordRange;

}

@property (assign,nonatomic) char isSelection;                                  //@synthesize isSelection=_isSelection - In the implementation block
@property (assign,nonatomic) char extendsPriorWord;                             //@synthesize extendsPriorWord=_extendsPriorWord - In the implementation block
@property (nonatomic,copy) NSString * inWord;                                   //@synthesize inWord=_inWord - In the implementation block
@property (assign,nonatomic) NSRange inWordRange;                               //@synthesize inWordRange=_inWordRange - In the implementation block
@property (assign,nonatomic) unsigned long long selectionLocation;              //@synthesize selectionLocation=_selectionLocation - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTIKeyboardState:(id)arg1 ;
-(char)extendsPriorWord;
-(void)setExtendsPriorWord:(char)arg1 ;
-(char)isSelection;
-(void)setIsSelection:(char)arg1 ;
-(NSString *)inWord;
-(void)setInWord:(NSString *)arg1 ;
-(NSRange)inWordRange;
-(void)setInWordRange:(NSRange)arg1 ;
-(unsigned long long)selectionLocation;
-(void)setSelectionLocation:(unsigned long long)arg1 ;
@end


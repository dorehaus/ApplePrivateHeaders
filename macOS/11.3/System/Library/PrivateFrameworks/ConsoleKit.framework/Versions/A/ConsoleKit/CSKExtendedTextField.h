/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConsoleKit/ConsoleKit-Structs.h>
#import <AppKit/NSTextField.h>

@protocol CSKExtendedTextFieldDelegate;
@class NSString;

@interface CSKExtendedTextField : NSTextField {

	char _showsAlternate;
	NSString* _defaultStringValue;
	NSString* _alternateStringValue;
	id<CSKExtendedTextFieldDelegate> _extraDelegate;

}

@property (assign,nonatomic) char showsAlternate;                                                //@synthesize showsAlternate=_showsAlternate - In the implementation block
@property (nonatomic,retain) NSString * defaultStringValue;                                      //@synthesize defaultStringValue=_defaultStringValue - In the implementation block
@property (nonatomic,retain) NSString * alternateStringValue;                                    //@synthesize alternateStringValue=_alternateStringValue - In the implementation block
@property (assign,nonatomic,__weak) id<CSKExtendedTextFieldDelegate> extraDelegate;              //@synthesize extraDelegate=_extraDelegate - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)defaultStringValue;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)_commonInit;
-(void)setDefaultStringValue:(NSString *)arg1 ;
-(void)setAlternateStringValue:(NSString *)arg1 ;
-(void)setExtraDelegate:(id<CSKExtendedTextFieldDelegate>)arg1 ;
-(void)showAlternateStringValue:(char)arg1 ;
-(void)setShowsAlternate:(char)arg1 ;
-(NSString *)alternateStringValue;
-(char)showsAlternate;
-(id<CSKExtendedTextFieldDelegate>)extraDelegate;
@end

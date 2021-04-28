/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistiveControlSupport/AssistiveControlSupport-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@interface ACSHTextFieldCell : NSTextFieldCell {

	unsigned long long _verticalTextPlacement;

}

@property (assign,nonatomic) unsigned long long verticalTextPlacement;              //@synthesize verticalTextPlacement=_verticalTextPlacement - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)accessibilitySubrole;
-(id)initTextCell:(id)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)_commonInit;
-(unsigned long long)verticalTextPlacement;
-(void)setVerticalTextPlacement:(unsigned long long)arg1 ;
-(void)_updateVerticalCentering;
@end

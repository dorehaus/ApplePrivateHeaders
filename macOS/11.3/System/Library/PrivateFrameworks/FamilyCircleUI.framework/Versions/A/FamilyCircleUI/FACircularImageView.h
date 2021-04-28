/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/Versions/A/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircleUI/FamilyCircleUI-Structs.h>
#import <AppKit/NSImageView.h>

@class NSColor;

@interface FACircularImageView : NSImageView {

	double _borderWidth;
	NSColor* _borderColor;

}

@property (assign,nonatomic) double borderWidth;                 //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) NSColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
-(void)layout;
-(NSColor *)borderColor;
-(void)setBorderColor:(NSColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(double)borderWidth;
@end


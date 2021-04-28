/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/Versions/A/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardKit/CardKit-Structs.h>
#import <AppKit/NSView.h>

@class NSView;

@interface CRKKeyline : NSView {

	NSView* _keylineView;
	long long _type;
	long long _direction;
	unsigned long long _visualEffectStyle;

}

@property (readonly) long long type;                                    //@synthesize type=_type - In the implementation block
@property (readonly) long long direction;                               //@synthesize direction=_direction - In the implementation block
@property (readonly) unsigned long long visualEffectStyle;              //@synthesize visualEffectStyle=_visualEffectStyle - In the implementation block
-(long long)type;
-(long long)direction;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithType:(long long)arg1 direction:(long long)arg2 visualEffectStyle:(unsigned long long)arg3 ;
-(double)_roundedKeylineThickness;
-(double)defaultKeylineInsetForCurrentDevice;
-(unsigned long long)visualEffectStyle;
@end


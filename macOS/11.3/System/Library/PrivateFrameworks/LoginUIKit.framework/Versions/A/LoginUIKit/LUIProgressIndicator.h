/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <AppKit/NSView.h>

@class NSMutableArray, NSImage;

@interface LUIProgressIndicator : NSView {

	char _isSpinning;
	char _isHeartBeatInstalled;
	unsigned long long _controlSize;
	unsigned long long _animationFrame;
	unsigned long long _prevAnimationFrame;
	NSMutableArray* _images;
	NSImage* _image;

}
-(id)_imageForIndex:(unsigned long long)arg1 ;
-(void)_installHeartBeat:(char)arg1 ;
-(void)dealloc;
-(unsigned long long)controlSize;
-(void)setControlSize:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)sizeToFit;
-(void)heartBeat:(SCD_Struct_LU6*)arg1 ;
-(id)_images;
-(void)startAnimation:(id)arg1 ;
-(void)stopAnimation:(id)arg1 ;
@end


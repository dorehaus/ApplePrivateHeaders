/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject {

	CUIPSDLayerRef* _layerRef;
	char _isVectorMask;

}
-(void)dealloc;
-(char)isEnabled;
-(CGRect)bounds;
-(char)isLinked;
-(id)initLayerMaskWithLayerRef:(id)arg1 ;
-(id)initVectorMaskWithLayerRef:(id)arg1 ;
-(CGPathRef)newBezierPathAtScale:(double)arg1 ;
-(id)layerRef;
-(char)isInvertedWhenBlending;
-(CGPathRef)newBezierPath;
-(CGImageRef)createCGImageMask;
@end

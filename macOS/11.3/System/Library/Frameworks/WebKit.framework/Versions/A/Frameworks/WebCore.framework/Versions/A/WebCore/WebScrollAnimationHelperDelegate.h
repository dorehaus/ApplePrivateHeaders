/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebScrollAnimationHelperDelegate : NSObject {

	NakedPtr<WebCore::ScrollAnimatorMac>* _animator;

}
-(void)invalidate;
-(id)window;
-(CGRect)bounds;
-(id)superview;
-(id)documentView;
-(CGSize)convertSizeToBacking:(CGSize)arg1 ;
-(CGPoint)_pixelAlignProposedScrollPosition:(CGPoint)arg1 ;
-(void)_immediateScrollToPoint:(CGPoint)arg1 ;
-(CGSize)convertSizeFromBacking:(CGSize)arg1 ;
-(CGSize)convertSizeToBase:(CGSize)arg1 ;
-(CGSize)convertSizeFromBase:(CGSize)arg1 ;
-(id)initWithScrollAnimator:(NakedPtr<WebCore::ScrollAnimatorMac>*)arg1 ;
-(void)_recursiveRecomputeToolTips;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <AppKit/NSView.h>

@interface WKContentView : NSView {

	RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>>* _page;
	char _sizeChangedSinceLastVisibleContentRectUpdate;

}

@property (assign,nonatomic) char sizeChangedSinceLastVisibleContentRectUpdate;              //@synthesize sizeChangedSinceLastVisibleContentRectUpdate=_sizeChangedSinceLastVisibleContentRectUpdate - In the implementation block
-(char)isFlipped;
-(id)initWithFrame:(CGRect)arg1 page:(RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>>*)arg2 ;
-(void)_setAcceleratedCompositingRootLayer:(id)arg1 ;
-(char)sizeChangedSinceLastVisibleContentRectUpdate;
-(void)setSizeChangedSinceLastVisibleContentRectUpdate:(char)arg1 ;
@end


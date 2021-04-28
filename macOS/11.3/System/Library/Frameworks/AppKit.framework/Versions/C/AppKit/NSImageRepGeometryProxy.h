/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <Foundation/NSProxy.h>

@class NSImageRep;

@interface NSImageRepGeometryProxy : NSProxy {

	NSImageRep* _rep;
	CGRect _alignmentRect;
	NSEdgeInsets _capInsets;
	long long _resizingMode;
	char _template;

}
+(id)proxyWithRep:(id)arg1 alignmentRect:(CGRect)arg2 capInsets:(NSEdgeInsets)arg3 resizingMode:(long long)arg4 template:(char)arg5 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(long long)resizingMode;
-(char)isTemplate;
-(CGRect)alignmentRect;
-(char)inheritsGeometryFromImage;
-(NSEdgeInsets)capInsets;
@end


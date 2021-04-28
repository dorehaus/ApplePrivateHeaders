/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSStoryboardSegueTemplate.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSView;

@interface NSStoryboardEmbedSegueTemplate : NSStoryboardSegueTemplate <NSCoding> {

	NSView* _containerView;

}

@property (retain) NSView * containerView;              //@synthesize containerView=_containerView - In the implementation block
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(NSView *)containerView;
-(void)setContainerView:(NSView *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConsoleKit/ConsoleKit-Structs.h>
#import <AppKit/NSScrollView.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface CSKScrollView : NSScrollView {

	char _postsDidEndResizeNotifications;
	NSObject*<OS_dispatch_source> _resizingEventsSource;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> resizingEventsSource;              //@synthesize resizingEventsSource=_resizingEventsSource - In the implementation block
@property (assign,nonatomic) char postsDidEndResizeNotifications;                             //@synthesize postsDidEndResizeNotifications=_postsDidEndResizeNotifications - In the implementation block
-(void)dealloc;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_commonInit;
-(NSObject*<OS_dispatch_source>)resizingEventsSource;
-(void)viewFrameDidChangeNotification:(id)arg1 ;
-(void)setResizingEventsSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setPostsDidEndResizeNotifications:(char)arg1 ;
-(char)postsDidEndResizeNotifications;
@end

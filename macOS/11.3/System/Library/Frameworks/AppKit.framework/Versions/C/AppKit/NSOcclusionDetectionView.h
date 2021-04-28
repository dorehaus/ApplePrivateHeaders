/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class CAContext;

@interface NSOcclusionDetectionView : NSView {

	char _registeredForNotifications;
	CAContext* _context;

}
-(void)dealloc;
-(void)viewDidMoveToWindow;
-(char)wantsLayer;
-(void)_registerForNotifications:(char)arg1 ;
-(void)_cleanUpContext;
-(void)viewGeometryDidChangeNotification:(id)arg1 ;
-(char)validateNoOcclusionSinceToken:(id)arg1 ;
@end


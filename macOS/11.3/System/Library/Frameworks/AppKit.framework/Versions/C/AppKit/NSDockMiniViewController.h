/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSView, NSWindow;

@interface NSDockMiniViewController : NSObject {

	NSView* _view;
	NSWindow* _window;
	unsigned _contextid;

}

@property (nonatomic,retain) NSView * view;                                      //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NS134 miniViewIdentifier; 
-(void)dealloc;
-(NSView *)view;
-(void)setView:(NSView *)arg1 ;
-(id)initWithView:(id)arg1 ;
-(SCD_Struct_NS134)miniViewIdentifier;
-(void)_setShown:(char)arg1 ;
-(void)_frameChanged;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSView.h>

@interface AMWorkflowHeaderView : NSView {

	char _shouldDrawHeaderConnection;

}

@property (assign) char shouldDrawHeaderConnection;              //@synthesize shouldDrawHeaderConnection=_shouldDrawHeaderConnection - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(char)shouldDrawHeaderConnection;
-(id)outlinePathWithConnection:(char)arg1 ;
-(id)bottomLineWithConnection:(char)arg1 ;
-(void)setShouldDrawHeaderConnection:(char)arg1 ;
@end


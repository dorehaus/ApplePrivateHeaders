/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InstantMessage.framework/Versions/A/InstantMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstantMessage/IMAVControlBar.h>

@class NSMutableArray;

@interface IMAVControlBarImpl : IMAVControlBar {

	NSMutableArray* _controls;
	char _updateScheduled;

}
+(id)sharedControlBar;
-(id)init;
-(id)_dictionaryRepresentation;
-(id)controls;
-(void)addControl:(id)arg1 ;
-(void)removeControl:(id)arg1 ;
-(void)removeAllControls;
-(void)_deferredControlSync;
-(void)_controlDidChange:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ABThrottledTrackingAreaMonitor : NSObject {

	/*^block*/id _updateHandler;
	char _mouseInTrackingArea;

}

@property (assign,getter=isMouseInTrackingArea,nonatomic) char mouseInTrackingArea;              //@synthesize mouseInTrackingArea=_mouseInTrackingArea - In the implementation block
-(void)dealloc;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)resendUpdate;
-(void)sendUpdate:(id)arg1 ;
-(char)isMouseInTrackingArea;
-(void)setMouseInTrackingArea:(char)arg1 ;
@end


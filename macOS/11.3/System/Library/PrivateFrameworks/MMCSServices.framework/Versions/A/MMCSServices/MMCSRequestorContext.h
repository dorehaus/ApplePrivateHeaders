/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/Versions/A/MMCSServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MMCSController, NSString;

@interface MMCSRequestorContext : NSObject {

	MMCSController* _controller;
	NSString* _transferID;

}

@property (retain,readonly) MMCSController * controller;              //@synthesize controller=_controller - In the implementation block
@property (retain,readonly) NSString * transferID;                    //@synthesize transferID=_transferID - In the implementation block
-(void)dealloc;
-(MMCSController *)controller;
-(NSString *)transferID;
-(id)initWithController:(id)arg1 transferID:(id)arg2 ;
-(void)removeFromController;
@end


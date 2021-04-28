/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AMSDialogButton : NSObject {

	/*^block*/id _handler;
	long long _style;
	NSString* _title;

}

@property (copy) id handler;                     //@synthesize handler=_handler - In the implementation block
@property (assign) long long style;              //@synthesize style=_style - In the implementation block
@property (copy) NSString * title;               //@synthesize title=_title - In the implementation block
+(id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)buttonWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(long long)style;
-(void)setTitle:(NSString *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSString *)title;
-(void)setStyle:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
@end


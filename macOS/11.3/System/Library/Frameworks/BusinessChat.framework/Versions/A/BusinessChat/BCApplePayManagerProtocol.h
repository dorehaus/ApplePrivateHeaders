/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/Versions/A/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BCApplePayManagerProtocol
@property (assign,nonatomic,__weak) id<BCApplePayManagerDelegate> delegate; 
@required
-(id<BCApplePayManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)message;
-(long long)applePayStatus;
-(void)presentApplePayWithWindow:(id)arg1;

@end

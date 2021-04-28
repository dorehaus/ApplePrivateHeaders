/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVB17221ACMPMessage;

@interface AVB17221ACMPPendingResponse : NSObject {

	char responseReceived;
	AVB17221ACMPMessage* message;
	/*^block*/id completionHandler;

}

@property (assign) char responseReceived; 
@property (copy) AVB17221ACMPMessage * message; 
@property (copy) id completionHandler; 
-(AVB17221ACMPMessage *)message;
-(void)setMessage:(AVB17221ACMPMessage *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(char)responseReceived;
-(void)setResponseReceived:(char)arg1 ;
@end


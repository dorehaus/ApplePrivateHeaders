/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAP2AccessoryServerTransportBaseOperation.h>

@class HAP2AccessoryServerTransportRequest, NSData;

@interface HAP2AccessoryServerTransportBaseOperationSendRequest : HAP2AccessoryServerTransportBaseOperation {

	HAP2AccessoryServerTransportRequest* _request;
	NSData* _response;
	/*^block*/id _clientCompletion;

}
-(void)main;
-(id)initWithTransport:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
@end


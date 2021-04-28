/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAP2AccessoryServerControllerOperation.h>

@protocol HAP2EncodedRequest;
@interface HAP2AccessoryServerControllerTimedWriteOperation : HAP2AccessoryServerControllerOperation {

	id<HAP2EncodedRequest> _executeRequest;

}

@property (nonatomic,readonly) id<HAP2EncodedRequest> executeRequest;              //@synthesize executeRequest=_executeRequest - In the implementation block
-(void)_cleanUp;
-(id<HAP2EncodedRequest>)executeRequest;
-(void)_sendRequest;
-(void)_parseResponseData:(id)arg1 ;
-(void)_sendPrepareRequest;
-(void)_parsePrepareResponseData:(id)arg1 ;
-(void)_sendExecuteRequest;
-(void)_parseExecuteResponseData:(id)arg1 ;
-(id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 prepareRequest:(id)arg5 executeRequest:(id)arg6 endpoint:(id)arg7 mimeType:(id)arg8 timeout:(double)arg9 options:(unsigned long long)arg10 ;
@end

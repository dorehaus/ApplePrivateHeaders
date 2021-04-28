/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRUpdateActiveSystemEndpointRequest;

@interface MRUpdateActiveSystemEndpointMessage : MRProtocolMessage {

	MRUpdateActiveSystemEndpointRequest* _request;

}

@property (nonatomic,readonly) MRUpdateActiveSystemEndpointRequest * request;              //@synthesize request=_request - In the implementation block
-(unsigned long long)type;
-(MRUpdateActiveSystemEndpointRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
@end

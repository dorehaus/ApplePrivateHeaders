/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CATTransport;

@interface CRKTransportPreflightResultObject : NSObject {

	char _shouldResetBackoff;
	CATTransport* _transport;

}

@property (nonatomic,retain) CATTransport * transport;               //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) char shouldResetBackoff;              //@synthesize shouldResetBackoff=_shouldResetBackoff - In the implementation block
-(void)dealloc;
-(CATTransport *)transport;
-(void)setTransport:(CATTransport *)arg1 ;
-(id)takeTransport;
-(char)shouldResetBackoff;
-(id)initWithTransport:(id)arg1 shouldResetBackoff:(char)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Versions/A/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OspreyGRPCChannel, NSUUID;

@interface OspreyAuthService : NSObject {

	OspreyGRPCChannel* _channel;
	NSUUID* _authUUID;
	unsigned long long _authStrategyVersion;

}
-(id)initWithChannel:(id)arg1 authStrategyVersion:(unsigned long long)arg2 ;
-(void)certificateDataWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)createClientSessionWithData:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end


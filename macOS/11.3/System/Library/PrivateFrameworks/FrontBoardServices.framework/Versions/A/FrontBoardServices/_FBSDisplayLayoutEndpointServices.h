/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _FBSDisplayLayoutService;

@interface _FBSDisplayLayoutEndpointServices : NSObject {

	_FBSDisplayLayoutService* _sharedLock_services[3];
	unsigned long long _sharedLock_servicesRefCnt[3];

}
+(id)_checkoutServiceWithEndpoint:(id)arg1 qos:(char)arg2 ;
+(void)_checkinService:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SensorKit.framework/Versions/A/SensorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SRError : NSObject
+(id)errorWithCode:(long long)arg1 ;
+(id)invalidInfoPlistErrorWithMissingKey:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3 underlyingError:(id)arg4 ;
+(id)connectionNotFoundError;
+(id)invalidEntitlementError;
+(id)authorizationErrorWithStatus:(long long)arg1 ;
+(id)authorizationError;
@end


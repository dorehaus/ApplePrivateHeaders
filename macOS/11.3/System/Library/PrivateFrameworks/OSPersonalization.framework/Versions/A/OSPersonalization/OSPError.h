/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSPersonalization.framework/Versions/A/OSPersonalization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OSPError : NSObject
+(id)localizedInternalRecoverySuggestionForErrorCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 ;
+(id)localizedDescriptionForErrorCode:(long long)arg1 ;
+(id)errorWithCode:(long long)arg1 underlyingRestoreErrorCode:(long long)arg2 userInfo:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 underlyingPOSIXErrorCode:(long long)arg2 ;
@end

